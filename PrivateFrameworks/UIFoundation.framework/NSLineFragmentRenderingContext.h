/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class CUICatalog, CUIStyleEffectConfiguration;

@interface NSLineFragmentRenderingContext : NSObject  {
    void *_runs;
    long _numRuns;
    unsigned short *_glyphs;
    struct CGSize { float x1; float x2; } *_advancements;
    float _leftSideDelta;
    float _lineWidth;
    float _leftControlWidth;
    float _rightControlWidth;
    float _elasticWidth;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _imageBounds;
    struct { 
        unsigned int _isRTL : 1; 
        unsigned int _vAdvance : 1; 
        unsigned int _flipped : 1; 
        unsigned int _usesSimpleTextEffects : 1; 
        unsigned int _reserved : 28; 
    } _flags;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
}

@property(retain) CUICatalog * cuiCatalog;
@property(retain) CUIStyleEffectConfiguration * cuiStyleEffects;
@property(getter=_usesSimpleTextEffects,setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (void)setCuiStyleEffects:(id)arg1;
- (void)setCuiCatalog:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageBounds;
- (BOOL)isRTL;
- (float)elasticWidth;
- (float)lineFragmentWidth;
- (void)getMaximumAscender:(float*)arg1 minimumDescender:(float*)arg2;
- (struct CGSize { float x1; float x2; })sizeWithBehavior:(int)arg1 usesFontLeading:(BOOL)arg2 baselineDelta:(float*)arg3;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)_setUsesSimpleTextEffects:(BOOL)arg1;
- (id)initWithRuns:(struct __CFArray { }*)arg1 glyphOrigin:(float)arg2 lineFragmentWidth:(float)arg3 elasticWidth:(float)arg4 usesScreenFonts:(BOOL)arg5 isRTL:(BOOL)arg6;
- (BOOL)_usesSimpleTextEffects;
- (id)cuiStyleEffects;
- (id)cuiCatalog;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;

@end
