/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUIFlowcaseViewDelegate>, NSIndexSet, NSTimer, CADisplayLink, UIView, CALayer, NSArray;

@interface SKUIFlowcaseView : UIControl  {
    <SKUIFlowcaseViewDelegate> *_delegate;
    int _distanceIndex;
    CADisplayLink *_displayLink;
    float _distances[10];
    BOOL _landscape;
    CALayer *_maskLayer1;
    CALayer *_maskLayer2;
    float _position;
    NSArray *_positions;
    BOOL _sendScrollDidEnd;
    int _selection;
    CALayer *_selectionLayer;
    UIView *_shadowView1;
    UIView *_shadowView2;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPoint;
    double _startTime;
    NSTimer *_timer;
    NSArray *_views;
}

@property <SKUIFlowcaseViewDelegate> * delegate;
@property BOOL landscape;
@property float position;
@property(retain) NSArray * views;
@property(readonly) NSIndexSet * indexSetForVisibleViews;

+ (id)_arrayForStartPosition:(float)arg1 endPosition:(float)arg2;
+ (float)_endPositionForStartPosition:(float)arg1 velocity:(float)arg2 landscape:(BOOL)arg3;
+ (id)_gradientMaskWithLandscape:(BOOL)arg1 inverted:(BOOL)arg2;

- (BOOL)landscape;
- (id)views;
- (void)setViews:(id)arg1;
- (void)_timerAction:(id)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForPosition:(float)arg1;
- (float)_positionForPosition:(float)arg1;
- (void)_decelerateWithVelocity:(float)arg1;
- (int)_indexOfViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_timerStop;
- (void)_timerStart;
- (void)_reloadForPosition;
- (void)_showSelectionAtIndex:(int)arg1 immediately:(BOOL)arg2;
- (void)setLandscape:(BOOL)arg1;
- (id)indexSetForVisibleViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPosition:(float)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (id)delegate;
- (void)clearSelection;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)_update;
- (float)position;
- (void)stop;
- (void)start;

@end
