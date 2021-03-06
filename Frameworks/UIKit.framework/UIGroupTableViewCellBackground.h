/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIView;

@interface UIGroupTableViewCellBackground : UIView  {
    int _sectionLocation;
    int _newSectionLocation;
    int _animationCount;
    int _selectionStyle;
    int _separatorStyle;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UIColor *_selectionTintColor;
    float _sectionBorderWidth;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _separatorInset;
    struct { 
        unsigned int selected : 1; 
    } _groupBackgroundFlags;
}

@property int sectionLocation;
@property int selectionStyle;
@property int separatorStyle;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } separatorInset;
@property(retain) UIColor * selectionTintColor;
@property(getter=isSelected) BOOL selected;
@property float sectionBorderWidth;

+ (void)initialize;
+ (void)_flushCacheOnNotification:(id)arg1;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayLayer:(id)arg1;
- (id)backgroundColor;
- (void)dealloc;
- (void)setSelectionTintColor:(id)arg1 layoutSubviews:(BOOL)arg2;
- (void)_setSectionLocationAnimationDidStop;
- (void)_decrementAnimationCount;
- (void)_incrementAnimationCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectForContentHeight:(float)arg1;
- (id)_cachedImageForKey:(id)arg1;
- (void)_updateSeparatorViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsCenter:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentsRect:(BOOL)arg1;
- (float)_pixelDisplayedImageHeight;
- (id)_roundedRectBezierPathInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSectionLocation:(int)arg2 forBorder:(BOOL)arg3 cornerRadiusAdjustment:(float)arg4;
- (float)sectionBorderWidth;
- (id)_bottomShadowColor;
- (id)_topShadowColor;
- (void)setSectionLocation:(int)arg1;
- (void)setSectionBorderWidth:(float)arg1;
- (id)_topShadowViewWithColor:(id)arg1;
- (id)_contentMaskLayer;
- (int)sectionLocation;
- (id)selectionTintColor;
- (int)selectionStyle;
- (void)setSelectionStyle:(int)arg1;
- (void)setSelectionTintColor:(id)arg1;
- (id)_fillColor;
- (void)_layoutSubviews:(BOOL)arg1;
- (id)_sectionBorderColor;
- (id)_separatorColor;
- (int)separatorStyle;
- (void)setSeparatorInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (BOOL)isSelected;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })separatorInset;
- (void)setSeparatorStyle:(int)arg1;
- (id)_backgroundColor;
- (void)layoutSubviews;

@end
