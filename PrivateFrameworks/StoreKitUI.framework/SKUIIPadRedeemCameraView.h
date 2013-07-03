/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, UIButton, UIView, UIImage, <SKUIRedeemCameraViewDelegate>, UIScrollView, SKUIRedeemCameraLandingView, SKUIRedeemTextField;

@interface SKUIIPadRedeemCameraView : UIView <UITextFieldDelegate> {
    <SKUIRedeemCameraViewDelegate> *_delegate;
    SKUIRedeemTextField *_inputAccessoryTextField;
    SKUIRedeemCameraLandingView *_landingView;
    UIView *_redeemerView;
    UIScrollView *_scrollView;
    UIButton *_termsButton;
    SKUIRedeemTextField *_textField;
}

@property <SKUIRedeemCameraViewDelegate> * delegate;
@property BOOL enabled;
@property(retain) UIImage * image;
@property(copy) NSString * text;


- (void)_hideKeyboard;
- (void)_landingButtonAction:(id)arg1;
- (id)initWithClientContext:(id)arg1;
- (id)_newTermsButtonWithClientContext:(id)arg1;
- (id)_newTextFieldWithClientContext:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (void)keyboardDidChange:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (id)text;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)showKeyboard;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)start;

@end