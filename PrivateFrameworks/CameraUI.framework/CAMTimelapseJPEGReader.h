/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTimelapseJPEGReader : NSObject

+ (id)_decodeOptionsWithMaxPixelSize:(int)arg1 applyTransform:(BOOL)arg2 useBGRA:(BOOL)arg3;
+ (BOOL)_hasExifRotation:(id)arg1;
+ (struct CGImage { }*)createCGImageFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(int)arg3 useBGRA:(BOOL)arg4;
+ (struct __CVBuffer { }*)createPixelBufferFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(int)arg3 useBGRA:(BOOL)arg4;
+ (struct __CVBuffer { }*)createPixelBufferFromData:(id)arg1 applyTransform:(BOOL)arg2 maxPixelSize:(int)arg3 useBGRA:(BOOL)arg4 cleanApertureSize:(struct CGSize { float x1; float x2; })arg5;
+ (id)newDataFromFilePath:(id)arg1;

@end
