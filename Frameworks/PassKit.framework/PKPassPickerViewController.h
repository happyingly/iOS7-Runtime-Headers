/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UINavigationBar, NSLayoutConstraint, UIPageControl, PKPassLibrary, <PKPassPickerViewControllerDelegate>, UIScrollView, NSArray;

@interface PKPassPickerViewController : UIViewController <UIScrollViewDelegate, WLCardViewDelegate> {
    PKPassLibrary *_library;
    UINavigationBar *_navigationBar;
    UIScrollView *_passScrollView;
    NSArray *_passViews;
    NSLayoutConstraint *_scrollViewYConstraint;
    UIPageControl *_pageControl;
    int _oldStatusBarStyle;
    NSArray *_passes;
    <PKPassPickerViewControllerDelegate> *_delegate;
}

@property(retain) NSArray * passes;
@property <PKPassPickerViewControllerDelegate> * delegate;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (float)_scrollViewYOffsetWithTallPass:(BOOL)arg1;
- (BOOL)_passBacksAreTall;
- (void)_handleHideNoDelegate;
- (void)_setupPassViews;
- (void)_setupScrollViewYConstraintForTallPass:(BOOL)arg1;
- (void)_pageControlChanged;
- (id)initWithPasses:(id)arg1;
- (void)setPasses:(id)arg1;
- (id)passes;
- (unsigned int)_displayIndex;
- (void)_updatePageControl;
- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (BOOL)passViewBackGrowsCentered:(id)arg1;
- (void)use;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)cancel;
- (BOOL)hidesBottomBarWhenPushed;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (int)modalPresentationStyle;
- (unsigned int)supportedInterfaceOrientations;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;

@end
