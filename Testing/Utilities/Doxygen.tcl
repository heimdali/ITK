# Put in this directory
# Year Month Day - TimeZone - Hour:Minute
# e.g. 20000926-EDT-16:02
# or Year Month Day Hour Minute
# clock format [clock seconds] -format %Y%m%d%H%M

# Must be run from root directory of Insight build, only by make

set Model Experimental
if { $argc > 0 } \
{
  set Model [lindex $argv 0]
}

set UtilityDir [file join Testing Utilities]


source [file join $UtilityDir Utility.tcl.in]

# Begin the XML output
set Out stdout

puts $Out {<?xml version="1.0" encoding="UTF-8"?>}
# puts $Out {<!DOCTYPE Insight>}
puts $Out {<Doxygen>}
puts $Out "\t<StartDateTime>[clock format [clock seconds]]</StartDateTime>"


# Ensure that the Directory Documents exists
if { ![file exists Documents] } \
{
  file mkdir Documents
}
cd Code
set Log Doxygen.log

# Do the build
set DoxygenStatus [catch { exec doxygen doxygen.config >& $Log } Result ]

set Doxygen [open $Log r]

set Cache ""
catch { unset ErrorList }
set ErrorList(Counter) 0
set ErrorList(Append) ""
set ErrorList(Buffer) ""
set PostContextCount 5
set BufferLength 5

set Exceptions ""
set Line 1
while { ![eof $Doxygen] } \
{
  # Get a line and write it out
  set LogLine [gets $Doxygen]

  set hasError [Match {.*[Ee][Rr][Rr][Oo][Rr]:.*} $LogLine $Exceptions]
  set hasWarning [Match {.*[Ww[Aa][Rr][Nn][Ii][Nn][Gg]:.*} $LogLine $Exceptions]

  if { $hasError } \
  {
    set Type Error
  }
  if { $hasWarning } \
  {
    set Type Warning
  }
  if { $hasError || $hasWarning } \
  {
    set i $ErrorList(Counter)
    incr ErrorList(Counter)
    set ErrorList($i,Type) $Type
    set ErrorList($i,Text) $LogLine
    set ErrorList($i,Line) $Line
    set ErrorList($i,PreContext) $ErrorList(Buffer)
    set ErrorList($i,PostContext) ""
    set ErrorList($i,ContextCounter) 0
    set ErrorList($i,SourceFile) ""
    set ErrorList($i,SourceLineNumber) ""

    # Take a stab at getting a file name out of the line
    # For GCC, we get /path/to/source.cxx:##
    if { [string match "*SourceLogLine] } \
    {
      # GCC
      if { [regexp "${SourceDirectory}/(\[^:\]*):(\[0-9\]*)" $LogLine dummy SourceFile LineNumber] } \
      {
	set ErrorList($i,SourceFile) $SourceFile
	set ErrorList($i,SourceLineNumber) $LineNumber
      }
    }
    
    lappend ErrorList(Append) $i
  }

  # Add to the PreContextBuffer
  set l [llength $ErrorList(Buffer)]
  if { $l > $BufferLength } \
  {
    set ErrorList(Buffer) [lrange $ErrorList(Buffer) 1 [expr $l - 2]]
  }
  lappend ErrorList(Buffer) $LogLine

  # Go through all in the ErrorList to append to, and do it
  set AppendList $ErrorList(Append)
  foreach i $AppendList \
  {
    if { $ErrorList($i,Line) != $Line } \
    {
      lappend ErrorList($i,PostContext) $LogLine
      incr ErrorList($i,ContextCounter) 

      # Remove this error for the append list
      if { $ErrorList($i,ContextCounter) > $PostContextCount } \
      {
	set ErrorList(Append) [lremove $ErrorList(Append) $i]
      }
    }
  }
  incr Line
}

# Write all the errors out to the Out file
for { set i 0 } { $i < $ErrorList(Counter) } { incr i } \
{
  puts $Out "\t<$ErrorList($i,Type)>"
  puts $Out "\t\t<LogLine>[XMLSafeString $ErrorList($i,Line)]</LogLine>"
  puts $Out "\t\t<Text>[XMLSafeString $ErrorList($i,Text)]</Text>"
  if { $ErrorList($i,SourceFile) != "" } \
  {
    puts $Out "\t\t<SourceFile>[XMLSafeString $ErrorList($i,SourceFile)]</SourceFile>"
    puts $Out "\t\t<SourceLineNumber>$ErrorList($i,SourceLineNumber)</SourceLineNumber>"
  }
  puts $Out "\t\t<PreContext>"
  foreach l $ErrorList($i,PreContext) \
  {
    puts $Out [XMLSafeString $l]
  }
  puts $Out "\t\t</PreContext>"
  puts $Out "\t\t<PostContext>"
  foreach l $ErrorList($i,PostContext) \
  {
    puts $Out [XMLSafeString $l]
  }
  puts $Out "\t\t</PostContext>"
  puts $Out "</$ErrorList($i,Type)>"
  puts $Out "\n"
}

# set LogCompressionStatus [ catch { CompressFile $DoxygenLogTempFilename $DoxygenLogCompressedFilename } CompressionResult ]
# if { $LogCompressionStatus } \
# {
#   error $CompressionResult
# }
# set DoxygenLog [open $DoxygenLogCompressedFilename r]
# fconfigure $DoxygenLog -translation binary

# puts $Out "\t<Log Encoding=\"base64\" Compression=\"$CompressionType\">"
# puts $Out [Base64Encode [read $DoxygenLog ]]
# puts $Out "\t</Log>"

puts $Out "\t<EndDateTime>[clock format [clock seconds]]</EndDateTime>"

puts $Out "</Doxygen>"

close $Doxygen
close $Out

file delete $Log
exit

