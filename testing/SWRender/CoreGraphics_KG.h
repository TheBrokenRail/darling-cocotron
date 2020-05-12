#import <Onyx2D/O2BitmapContext.h>
#import <Onyx2D/O2Color.h>
#import <Onyx2D/O2ColorSpace.h>
#import <Onyx2D/O2Context.h>
#import <Onyx2D/O2DataProvider.h>
#import <Onyx2D/O2Font.h>
#import <Onyx2D/O2Function.h>
#import <Onyx2D/O2Image.h>
#import <Onyx2D/O2ImageDestination.h>
#import <Onyx2D/O2ImageSource.h>
#import <Onyx2D/O2MutablePath.h>
#import <Onyx2D/O2PDFDocument.h>
#import <Onyx2D/O2PDFPage.h>
#import <Onyx2D/O2Path.h>
#import <Onyx2D/O2Shading.h>

#define ONYX2D

#define CGFloat O2Float
#define CGRect O2Rect
#define CGPoint O2Point
#define CGSize O2Size
#define CGRectMake O2RectMake
#define CGPointMake O2PointMake
#define CGSizeMake O2SizeMake
#define CGRectGetMinX O2RectGetMinX
#define CGRectGetMaxX O2RectGetMaxX
#define CGRectGetMinY O2RectGetMinY
#define CGRectGetMaxY O2RectGetMaxY

#define CGAffineTransform O2AffineTransform
#define CGAffineTransformIdentity O2AffineTransformIdentity
#define CGAffineTransformScale O2AffineTransformScale
#define CGAffineTransformRotate O2AffineTransformRotate
#define CGAffineTransformMakeRotation O2AffineTransformMakeRotation
#define CGAffineTransformMakeTranslation O2AffineTransformMakeTranslation
#define CGAffineTransformTranslate O2AffineTransformTranslate
#define CGAffineTransformConcat O2AffineTransformConcat
#undef CGPointApplyAffineTransform
#define CGPointApplyAffineTransform O2PointApplyAffineTransform
#define CGFunctionCallbacks O2FunctionCallbacks

#define CGContextRef O2ContextRef
#define CGColorRef O2ColorRef
#define CGColorSpaceRef O2ColorSpaceRef
#define CGPathRef O2PathRef
#define CGMutablePathRef O2MutablePathRef
#define CGDataProviderRef O2DataProviderRef
#define CGImageRef O2ImageRef
#define CGImageSourceRef O2ImageSourceRef
#define CGPDFDocumentRef O2PDFDocument *
#define CGPDFPageRef O2PDFPage *
#define CGFunctionRef O2FunctionRef
#define CGShadingRef O2ShadingRef
#define CGFontRef O2FontRef

#define CGContextRetain O2ContextRetain
#define CGContextRelease O2ContextRelease
#define CGContextSetAllowsAntialiasing O2ContextSetAllowsAntialiasing
#define CGContextBeginTransparencyLayer O2ContextBeginTransparencyLayer
#define CGContextEndTransparencyLayer O2ContextEndTransparencyLayer
#define CGContextIsPathEmpty O2ContextIsPathEmpty
#define CGContextGetPathCurrentPoint O2ContextGetPathCurrentPoint
#define CGContextGetPathBoundingBox O2ContextGetPathBoundingBox
#define CGContextPathContainsPoint O2ContextPathContainsPoint
#define CGContextBeginPath O2ContextBeginPath
#define CGContextClosePath O2ContextClosePath
#define CGContextMoveToPoint O2ContextMoveToPoint
#define CGContextAddLineToPoint O2ContextAddLineToPoint
#define CGContextAddCurveToPoint O2ContextAddCurveToPoint
#define CGContextAddQuadCurveToPoint O2ContextAddQuadCurveToPoint
#define CGContextAddLines O2ContextAddLines
#define CGContextAddRect O2ContextAddRect
#define CGContextAddRects O2ContextAddRects
#define CGContextAddArc O2ContextAddArc
#define CGContextAddArcToPoint O2ContextAddArcToPoint
#define CGContextAddEllipseInRect O2ContextAddEllipseInRect
#define CGContextAddPath O2ContextAddPath
#define CGContextReplacePathWithStrokedPath                                    \
    O2ContextReplacePathWithStrokedPath
#define CGContextSaveGState O2ContextSaveGState
#define CGContextRestoreGState O2ContextRestoreGState
#define CGContextGetUserSpaceToDeviceSpaceTransform                            \
    O2ContextGetUserSpaceToDeviceSpaceTransform
#define CGContextGetCTM O2ContextGetCTM
#define CGContextGetClipBoundingBox O2ContextGetClipBoundingBox
#define CGContextGetTextMatrix O2ContextGetTextMatrix
#define CGContextGetInterpolationQuality O2ContextGetInterpolationQuality
#define CGContextGetTextPosition O2ContextGetTextPosition
#define CGContextConvertPointToDeviceSpace O2ContextConvertPointToDeviceSpace
#define CGContextConvertPointToUserSpace O2ContextConvertPointToUserSpace
#define CGContextConvertSizeToDeviceSpace O2ContextConvertSizeToDeviceSpace
#define CGContextConvertSizeToUserSpace O2ContextConvertSizeToUserSpace
#define CGContextConvertRectToDeviceSpace O2ContextConvertRectToDeviceSpace
#define CGContextConvertRectToUserSpace O2ContextConvertRectToUserSpace
#define CGContextSetCTM O2ContextSetCTM
#define CGContextConcatCTM O2ContextConcatCTM
#define CGContextTranslateCTM O2ContextTranslateCTM
#define CGContextScaleCTM O2ContextScaleCTM
#define CGContextRotateCTM O2ContextRotateCTM
#define CGContextClip O2ContextClip
#define CGContextEOClip O2ContextEOClip
#define CGContextClipToMask O2ContextClipToMask
#define CGContextClipToRect O2ContextClipToRect
#define CGContextClipToRects O2ContextClipToRects
#define CGContextSetStrokeColorSpace O2ContextSetStrokeColorSpace
#define CGContextSetFillColorSpace O2ContextSetFillColorSpace
#define CGContextSetStrokeColor O2ContextSetStrokeColor
#define CGContextSetStrokeColorWithColor O2ContextSetStrokeColorWithColor
#define CGContextSetGrayStrokeColor O2ContextSetGrayStrokeColor
#define CGContextSetRGBStrokeColor O2ContextSetRGBStrokeColor
#define CGContextSetCMYKStrokeColor O2ContextSetCMYKStrokeColor
#define CGContextSetFillColor O2ContextSetFillColor
#define CGContextSetFillColorWithColor O2ContextSetFillColorWithColor
#define CGContextSetGrayFillColor O2ContextSetGrayFillColor
#define CGContextSetRGBFillColor O2ContextSetRGBFillColor
#define CGContextSetCMYKFillColor O2ContextSetCMYKFillColor
#define CGContextSetAlpha O2ContextSetAlpha
#define CGContextSetPatternPhase O2ContextSetPatternPhase
#define CGContextSetStrokePattern O2ContextSetStrokePattern
#define CGContextSetFillPattern O2ContextSetFillPattern
#define CGContextSetTextMatrix O2ContextSetTextMatrix
#define CGContextSetTextPosition O2ContextSetTextPosition
#define CGContextSetCharacterSpacing O2ContextSetCharacterSpacing
#define CGContextSetTextDrawingMode O2ContextSetTextDrawingMode
#define CGContextSetFont O2ContextSetFont
#define CGContextSetFontSize O2ContextSetFontSize
#define CGContextSelectFont O2ContextSelectFont
#define CGContextSetShouldSmoothFonts O2ContextSetShouldSmoothFonts
#define CGContextSetLineWidth O2ContextSetLineWidth
#define CGContextSetLineCap O2ContextSetLineCap
#define CGContextSetLineJoin O2ContextSetLineJoin
#define CGContextSetMiterLimit O2ContextSetMiterLimit
#define CGContextSetLineDash O2ContextSetLineDash
#define CGContextSetRenderingIntent O2ContextSetRenderingIntent
#define CGContextSetBlendMode O2ContextSetBlendMode
#define CGContextSetFlatness O2ContextSetFlatness
#define CGContextSetInterpolationQuality O2ContextSetInterpolationQuality
#define CGContextSetShadowWithColor O2ContextSetShadowWithColor
#define CGContextSetShadow O2ContextSetShadow
#define CGContextSetShouldAntialias O2ContextSetShouldAntialias
#define CGContextStrokeLineSegments O2ContextStrokeLineSegments
#define CGContextStrokeRect O2ContextStrokeRect
#define CGContextStrokeRectWithWidth O2ContextStrokeRectWithWidth
#define CGContextStrokeEllipseInRect O2ContextStrokeEllipseInRect
#define CGContextFillRect O2ContextFillRect
#define CGContextFillRects O2ContextFillRects
#define CGContextFillEllipseInRect O2ContextFillEllipseInRect
#define CGContextDrawPath O2ContextDrawPath
#define CGContextStrokePath O2ContextStrokePath
#define CGContextFillPath O2ContextFillPath
#define CGContextEOFillPath O2ContextEOFillPath
#define CGContextClearRect O2ContextClearRect
#define CGContextShowGlyphs O2ContextShowGlyphs
#define CGContextShowGlyphsAtPoint O2ContextShowGlyphsAtPoint
#define CGContextShowGlyphsWithAdvances O2ContextShowGlyphsWithAdvances
#define CGContextShowText O2ContextShowText
#define CGContextShowTextAtPoint O2ContextShowTextAtPoint
#define CGContextDrawShading O2ContextDrawShading
#define CGContextDrawImage O2ContextDrawImage
#define CGContextDrawLayerAtPoint O2ContextDrawLayerAtPoint
#define CGContextDrawLayerInRect O2ContextDrawLayerInRect
#define CGContextDrawPDFPage O2ContextDrawPDFPage
#define CGContextFlush O2ContextFlush
#define CGContextSynchronize O2ContextSynchronize
#define CGContextBeginPage O2ContextBeginPage
#define CGContextEndPage O2ContextEndPage

// bitmap context

#define CGBitmapContextCreate O2BitmapContextCreate
#define CGBitmapContextGetData CGBitmapContextGetData
#define CGBitmapContextGetWidth CGBitmapContextGetWidth
#define CGBitmapContextGetHeight CGBitmapContextGetHeight
#define CGBitmapContextGetBitsPerComponent CGBitmapContextGetBitsPerComponent
#define CGBitmapContextGetBytesPerRow CGBitmapContextGetBytesPerRow
#define CGBitmapContextGetColorSpace CGBitmapContextGetColorSpace
#define CGBitmapContextGetBitmapInfo CGBitmapContextGetBitmapInfo
#define CGBitmapContextGetBitsPerPixel CGBitmapContextGetBitsPerPixel
#define CGBitmapContextGetAlphaInfo CGBitmapContextGetAlphaInfo
#define CGBitmapContextCreateImage CGBitmapContextCreateImage

// CGPath
#define CGPathRelease O2PathRelease
#define CGPathRetain O2PathRetain
#define CGPathEqualToPath O2PathEqualToPath
#define CGPathGetBoundingBox O2PathGetBoundingBox
#define CGPathGetCurrentPoint O2PathGetCurrentPoint
#define CGPathIsEmpty O2PathIsEmpty
#define CGPathIsRect O2PathIsRect
#define CGPathApply O2PathApply
#define CGPathCreateMutableCopy O2PathCreateMutableCopy
#define CGPathCreateCopy O2PathCreateCopy
#define CGPathContainsPoint O2PathContainsPoint
#define CGPathCreateMutable O2PathCreateMutable
#define CGPathMoveToPoint O2PathMoveToPoint
#define CGPathAddLineToPoint O2PathAddLineToPoint
#define CGPathAddCurveToPoint O2PathAddCurveToPoint
#define CGPathAddQuadCurveToPoint O2PathAddQuadCurveToPoint
#define CGPathCloseSubpath O2PathCloseSubpath
#define CGPathAddLines O2PathAddLines
#define CGPathAddRect O2PathAddRect
#define CGPathAddRects O2PathAddRects
#define CGPathAddArc O2PathAddArc
#define CGPathAddArcToPoint O2PathAddArcToPoint
#define CGPathAddEllipseInRect O2PathAddEllipseInRect
#define CGPathAddPath O2PathAddPath

// CGColor

#define CGColorRetain O2ColorRetain
#define CGColorRelease O2ColorRelease
#define CGColorCreate O2ColorCreate
#define CGColorCreateGenericGray O2ColorCreateGenericGray
#define CGColorCreateGenericRGB O2ColorCreateGenericRGB
#define CGColorCreateGenericCMYK O2ColorCreateGenericCMYK
#define CGColorCreateWithPattern O2ColorCreateWithPattern
#define CGColorCreateCopy O2ColorCreateCopy
#define CGColorCreateCopyWithAlpha O2ColorCreateCopyWithAlpha
#define CGColorEqualToColor O2ColorEqualToColor
#define CGColorGetColorSpace O2ColorGetColorSpace
#define CGColorGetNumberOfComponents O2ColorGetNumberOfComponents
#define CGColorGetComponents O2ColorGetComponents
#define CGColorGetAlpha O2ColorGetAlpha
#define CGColorGetPattern O2ColorGetPattern

// CGPattern
#define CGPatternRef O2PatternRef
#define kCGPatternTilingNoDistortion kO2PatternTilingNoDistortion
#define CGPatternCallbacks O2PatternCallbacks

#define CGPatternCreate O2PatternCreate
#define CGPatternRetain O2PatternRetain
#define CGPatternRelease O2PatternRelease

// CGColorSpace

#define CGColorSpaceCreateDeviceRGB O2ColorSpaceCreateDeviceRGB
#define CGColorSpaceCreateDeviceGray O2ColorSpaceCreateDeviceGray
#define CGColorSpaceCreateDeviceCMYK O2ColorSpaceCreateDeviceCMYK
#define CGColorSpaceCreatePattern O2ColorSpaceCreatePattern
#define CGColorSpaceRelease O2ColorSpaceRelease

// CGImage

#define CGImageRetain O2ImageRetain
#define CGImageRelease O2ImageRelease
#define CGImageCreate O2ImageCreate
#define CGImageMaskCreate O2ImageMaskCreate
#define CGImageCreateCopy O2ImageCreateCopy
#define CGImageCreateCopyWithColorSpace O2ImageCreateCopyWithColorSpace
#define CGImageCreateWithImageInRect O2ImageCreateWithImageInRect
#define CGImageCreateWithJPEGDataProvider O2ImageCreateWithJPEGDataProvider
#define CGImageCreateWithPNGDataProvider O2ImageCreateWithPNGDataProvider
#define CGImageCreateWithMask O2ImageCreateWithMask
#define CGImageCreateWithMaskingColors O2ImageCreateWithMaskingColors

#define CGImageGetWidth O2ImageGetWidth
#define CGImageGetHeight O2ImageGetHeight
#define CGImageGetBitsPerComponent O2ImageGetBitsPerComponent
#define CGImageGetBitsPerPixel O2ImageGetBitsPerPixel
#define CGImageGetBytesPerRow O2ImageGetBytesPerRow
#define CGImageGetColorSpace O2ImageGetColorSpace
#define CGImageGetBitmapInfo O2ImageGetBitmapInfo
#define CGImageGetDataProvider O2ImageGetDataProvider
#define CGImageGetDecode O2ImageGetDecode
#define CGImageGetShouldInterpolate O2ImageGetShouldInterpolate
#define CGImageGetRenderingIntent O2ImageGetRenderingIntent
#define CGImageIsMask O2ImageIsMask
#define CGImageGetAlphaInfo O2ImageGetAlphaInfo

// data provider

#define CGDataProviderCreateWithData O2DataProviderCreateWithData
#define CGDataProviderCreateWithCFData O2DataProviderCreateWithCFData
#define CGDataProviderCreateWithURL O2DataProviderCreateWithURL

#define CGImageDestinationRef O2ImageDestinationRef
#define CGImageDestinationCreateWithData O2ImageDestinationCreateWithData
#define CGImageDestinationAddImage O2ImageDestinationAddImage
#define CGImageDestinationFinalize O2ImageDestinationFinalize

// image source

#define CGImageSourceCreateWithData(data, opts)                                \
    [O2ImageSource newImageSourceWithData: data options: opts]

#define CGImageSourceCreateImageAtIndex(self, index, opts)                     \
    [self createImageAtIndex: index options: opts]

// pdf document

#define CGPDFDocumentRetain(self) [self retain]

#define CGPDFDocumentRelease(self) [self release]

#define CGPDFDocumentCreateWithProvider(provider)                              \
    [[O2PDFDocument alloc] initWithDataProvider: provider]

#define CGPDFDocumentGetNumberOfPages(self) [self pageCount]

#define CGPDFDocumentGetPage(self, pageNumber) [self pageAtNumber: pageNumber]

// pdf page

#define CGPDFPageRetain(self) [self retain]

#define CGPDFPageRelease(self) [self release]

// shadings
#define CGFunctionCreate O2FunctionCreate

#define CGShadingCreateAxial O2ShadingCreateAxial
#define CGShadingCreateRadial O2ShadingCreateRadial

#define CGShadingRelease O2ShadingRelease
#define CGFunctionRelease O2FunctionRelease

#define CGFontCreateWithDataProvider O2FontCreateWithDataProvider
#define CGFontGetGlyphWithGlyphName O2FontGetGlyphWithGlyphName

#define CGDataProviderCreateWithFilename O2DataProviderCreateWithFilename
#define CGDataProviderRetain O2DataProviderRetain
#define CGDataProviderRelease O2DataProviderRelease
