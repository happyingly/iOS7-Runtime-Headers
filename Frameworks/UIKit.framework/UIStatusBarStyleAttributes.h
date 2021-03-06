/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarForegroundStyleAttributes, UIStatusBarStyleRequest;

@interface UIStatusBarStyleAttributes : NSObject  {
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}


- (int)style;
- (id)init;
- (void)dealloc;
- (BOOL)supportsRasterization;
- (double)glowAnimationDuration;
- (BOOL)shouldUseVisualAltitude;
- (BOOL)isTransparent;
- (int)idiom;
- (float)heightForMetrics:(int)arg1;
- (BOOL)shouldShowInternalItemType:(int)arg1 withScreenCapabilities:(id)arg2;
- (id)backgroundColorWithTintColor:(id)arg1;
- (BOOL)areTopCornersRounded;
- (id)backgroundImageName;
- (int)cornerStyle;
- (id)initWithRequest:(id)arg1;
- (float)foregroundAlpha;
- (id)newForegroundStyleWithHeight:(float)arg1;
- (int)legibilityStyle;
- (id)foregroundStyle;
- (BOOL)isDoubleHeight;
- (float)heightForOrientation:(int)arg1;
- (BOOL)isTranslucent;

@end
