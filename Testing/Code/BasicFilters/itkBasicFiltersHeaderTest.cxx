/*=========================================================================

  Program:   Insight Segmentation & Registration Toolkit (ITK)
  Module:
  Language:  C++
  Date:
  Version:


Copyright (c) 2000 National Library of Medicine
All rights reserved.

See COPYRIGHT.txt for copyright details.

=========================================================================*/
#if defined(_MSC_VER)
#pragma warning ( disable : 4786 )
#endif

#include <iostream>
// This file has been generated by BuildHeaderTest.tcl
// Test to include each header file for Insight

#include "itkAcosImageFilter.h"
#include "itkAdaptImageFilter.h"
#include "itkAddImageFilter.h"
#include "itkAnisotropicDiffusionFunction.h"
#include "itkAnisotropicDiffusionImageFilter.txx"
#include "itkAsinImageFilter.h"
#include "itkAtan2ImageFilter.h"
#include "itkAtanImageFilter.h"
#include "itkBSplineCenteredL2ResampleImageFilterBase.txx"
#include "itkBSplineCenteredResampleImageFilterBase.txx"
#include "itkBSplineDecompositionImageFilter.txx"
#include "itkBSplineDownsampleImageFilter.txx"
#include "itkBSplineInterpolateImageFunction.txx"
#include "itkBSplineL2ResampleImageFilterBase.txx"
#include "itkBSplineResampleImageFilterBase.txx"
#include "itkBSplineResampleImageFunction.h"
#include "itkBSplineUpsampleImageFilter.txx"
#include "itkBilateralImageFilter.txx"
#include "itkBinaryDilateImageFilter.txx"
#include "itkBinaryErodeImageFilter.txx"
#include "itkBinaryFunctorImageFilter.txx"
#include "itkBinaryMagnitudeImageFilter.h"
#include "itkBinaryMedianImageFilter.txx"
#include "itkBinaryThresholdImageFilter.txx"
#include "itkBinomialBlurImageFilter.txx"
#include "itkBloxBoundaryPointImageToBloxBoundaryProfileImageFilter.txx"
#include "itkBloxBoundaryPointToCoreAtomImageFilter.txx"
#include "itkCannyEdgeDetectionImageFilter.txx"
#include "itkCastImageFilter.h"
#include "itkChangeInformationImageFilter.txx"
#include "itkComposeRGBImageFilter.h"
#include "itkConfidenceConnectedImageFilter.txx"
#include "itkConnectedThresholdImageFilter.txx"
#include "itkConstantPadImageFilter.txx"
#include "itkCosImageFilter.h"
#include "itkCropImageFilter.txx"
#include "itkCurvatureAnisotropicDiffusionImageFilter.h"
#include "itkCurvatureNDAnisotropicDiffusionFunction.txx"
#include "itkDanielssonDistanceMapImageFilter.txx"
#include "itkDerivativeImageFilter.txx"
#include "itkDifferenceOfGaussiansGradientImageFilter.txx"
#include "itkDilateObjectMorphologyImageFilter.txx"
#include "itkDirectedHausdorffDistanceImageFilter.txx"
#include "itkDiscreteGaussianImageFilter.txx"
#include "itkDivideImageFilter.h"
#include "itkEdgePotentialImageFilter.h"
#include "itkEigenAnalysis2DImageFilter.txx"
#include "itkErodeObjectMorphologyImageFilter.txx"
#include "itkExpImageFilter.h"
#include "itkExpNegativeImageFilter.h"
#include "itkExpandImageFilter.txx"
#include "itkExtractImageFilter.txx"
#include "itkExtractImageFilterRegionCopier.h"
#include "itkFlipImageFilter.txx"
#include "itkGaussianImageSource.txx"
#include "itkGradientAnisotropicDiffusionImageFilter.h"
#include "itkGradientImageFilter.txx"
#include "itkGradientImageToBloxBoundaryPointImageFilter.txx"
#include "itkGradientMagnitudeImageFilter.txx"
#include "itkGradientMagnitudeRecursiveGaussianImageFilter.txx"
#include "itkGradientNDAnisotropicDiffusionFunction.txx"
#include "itkGradientRecursiveGaussianImageFilter.txx"
#include "itkGradientToMagnitudeImageFilter.h"
#include "itkGrayscaleDilateImageFilter.txx"
#include "itkGrayscaleErodeImageFilter.txx"
#include "itkGrayscaleFillholeImageFilter.txx"
#include "itkGrayscaleFunctionDilateImageFilter.txx"
#include "itkGrayscaleFunctionErodeImageFilter.txx"
#include "itkGrayscaleGeodesicDilateImageFilter.txx"
#include "itkGrayscaleGeodesicErodeImageFilter.txx"
#include "itkHardConnectedComponentImageFilter.txx"
#include "itkHausdorffDistanceImageFilter.txx"
#include "itkHoughTransform2DLinesImageFilter.txx"
#include "itkImageToMeshFilter.txx"
#include "itkImageToParametricSpaceFilter.txx"
#include "itkImportImageFilter.txx"
#include "itkIntensityWindowingImageFilter.txx"
#include "itkInteriorExteriorMeshFilter.txx"
#include "itkInterpolateImageFilter.txx"
#include "itkInterpolateImagePointsFilter.txx"
#include "itkIsolatedConnectedImageFilter.txx"
#include "itkJoinImageFilter.h"
#include "itkLaplacianImageFilter.txx"
#include "itkLaplacianRecursiveGaussianImageFilter.txx"
#include "itkLog10ImageFilter.h"
#include "itkLogImageFilter.h"
#include "itkMaskImageFilter.h"
#include "itkMaximumImageFilter.h"
#include "itkMeanImageFilter.txx"
#include "itkMedianImageFilter.txx"
#include "itkMinimumImageFilter.h"
#include "itkMinimumMaximumImageCalculator.txx"
#include "itkMinimumMaximumImageFilter.txx"
#include "itkMirrorPadImageFilter.txx"
#include "itkMorphologyImageFilter.txx"
#include "itkMultiplyImageFilter.h"
#include "itkNaryAddImageFilter.h"
#include "itkNaryFunctorImageFilter.txx"
#include "itkNeighborhoodConnectedImageFilter.txx"
#include "itkNeighborhoodOperatorImageFilter.txx"
#include "itkNoiseImageFilter.txx"
#include "itkNonThreadedShrinkImageFilter.txx"
#include "itkNormalizeImageFilter.txx"
#include "itkObjectMorphologyImageFilter.txx"
#include "itkPadImageFilter.txx"
#include "itkParametricSpaceToImageSpaceMeshFilter.txx"
#include "itkPasteImageFilter.txx"
#include "itkPermuteAxesImageFilter.txx"
#include "itkPlaheImageFilter.txx"
#include "itkRandomImageSource.txx"
#include "itkRecursiveGaussianImageFilter.txx"
#include "itkRecursiveSeparableImageFilter.txx"
#include "itkReflectImageFilter.txx"
#include "itkReflectiveImageRegionConstIterator.txx"
#include "itkReflectiveImageRegionIterator.txx"
#include "itkRegionOfInterestImageFilter.txx"
#include "itkResampleImageFilter.txx"
#include "itkRescaleIntensityImageFilter.txx"
#include "itkScalarAnisotropicDiffusionFunction.txx"
#include "itkScalarToArrayCastImageFilter.txx"
#include "itkShiftScaleImageFilter.txx"
#include "itkShiftScaleInPlaceImageFilter.txx"
#include "itkShrinkImageFilter.txx"
#include "itkSigmoidImageFilter.h"
#include "itkSimilarityIndexImageFilter.txx"
#include "itkSinImageFilter.h"
#include "itkSmoothingRecursiveGaussianImageFilter.txx"
#include "itkSobelEdgeDetectionImageFilter.txx"
#include "itkSparseFieldLayer.txx"
#include "itkSparseFieldLevelSetImageFilter.txx"
#include "itkSpatialFunctionImageEvaluatorFilter.txx"
#include "itkSpatialObjectToImageFilter.txx"
#include "itkSqrtImageFilter.h"
#include "itkSquareImageFilter.h"
#include "itkSquaredDifferenceImageFilter.h"
#include "itkStatisticsImageFilter.txx"
#include "itkStreamingImageFilter.txx"
#include "itkSubtractImageFilter.h"
#include "itkTanImageFilter.h"
#include "itkTernaryAddImageFilter.h"
#include "itkTernaryFunctorImageFilter.txx"
#include "itkTernaryMagnitudeImageFilter.h"
#include "itkTernaryMagnitudeSquaredImageFilter.h"
#include "itkThresholdImageFilter.txx"
#include "itkTobogganImageFilter.txx"
#include "itkTransformMeshFilter.txx"
#include "itkTwoOutputExampleImageFilter.txx"
#include "itkUnaryFunctorImageFilter.txx"
#include "itkVTKImageExport.txx"
#include "itkVTKImageExportBase.h"
#include "itkVTKImageImport.txx"
#include "itkVectorAnisotropicDiffusionFunction.txx"
#include "itkVectorCastImageFilter.h"
#include "itkVectorCurvatureAnisotropicDiffusionImageFilter.h"
#include "itkVectorCurvatureNDAnisotropicDiffusionFunction.txx"
#include "itkVectorExpandImageFilter.txx"
#include "itkVectorGradientAnisotropicDiffusionImageFilter.h"
#include "itkVectorGradientMagnitudeImageFilter.txx"
#include "itkVectorGradientNDAnisotropicDiffusionFunction.txx"
#include "itkVectorIndexSelectionCastImageFilter.h"
#include "itkVectorNeighborhoodOperatorImageFilter.txx"
#include "itkWarpImageFilter.txx"
#include "itkWrapPadImageFilter.txx"
#include "itkZeroCrossingBasedEdgeDetectionImageFilter.txx"
#include "itkZeroCrossingImageFilter.txx"

int main ( int , char*  )
{
  
  return 0;
}

