/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIPrinterSetupPINScrollView : UIScrollView  {
    UIView *_contentView;
    float _visibleHeight;
}

@property(retain) UIView * contentView;
@property float visibleHeight;


- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (void)dealloc;
- (void)setVisibleHeight:(float)arg1;
- (float)visibleHeight;
- (void)keyboardDidChangeFrame:(id)arg1;
- (BOOL)_scrollsToMakeFirstResponderVisible;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;

@end
