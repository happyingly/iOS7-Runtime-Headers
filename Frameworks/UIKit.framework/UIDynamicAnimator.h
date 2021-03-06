/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <UIDynamicAnimatorDelegate>, PKExtendedPhysicsWorld, NSMutableArray, CADisplayLink, <_UIDynamicReferenceSystem>, UIView, NSMutableSet, CALayer, NSMutableDictionary, NSArray;

@interface UIDynamicAnimator : NSObject  {
    PKExtendedPhysicsWorld *_world;
    CADisplayLink *_displaylink;
    double _elapsedTime;
    double _realElapsedTime;
    double _lastUpdateTime;
    double _lastInterval;
    long long _ticks;
    CALayer *_debugLayer;
    NSMutableDictionary *_bodies;
    NSMutableArray *_topLevelBehaviors;
    NSMutableSet *_registeredBehaviors;
    NSMutableSet *_behaviorsToRemove;
    NSMutableSet *_behaviorsToAdd;
    NSMutableArray *_postSolverActions;
    NSMutableArray *_beginContacts;
    NSMutableArray *_endContacts;
    BOOL _isInWorldStepMethod;
    BOOL _needsLocalBehaviorReevaluation;
    unsigned int _referenceSystemType;
    unsigned int _integralization;
    struct { 
        unsigned int delegateImplementsDynamicAnimatorDidPause : 1; 
        unsigned int delegateImplementsDynamicAnimatorWillResume : 1; 
    } _stateFlags;
    float _accuracy;
    int _registeredCollisionGroups;
    int _registeredImplicitBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _referenceSystemBounds;
    <_UIDynamicReferenceSystem> *_referenceSystem;
    int _debugInterval;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _action;

    <UIDynamicAnimatorDelegate> *_delegate;
    BOOL _disableDisplayLink;
    float _speed;
}

@property(readonly) UIView * referenceView;
@property(readonly) NSArray * behaviors;
@property(getter=isRunning,readonly) BOOL running;
@property <UIDynamicAnimatorDelegate> * delegate;

+ (void)initialize;
+ (id)_allDynamicAnimators;
+ (void)_unregisterAnimator:(id)arg1;
+ (void)_registerAnimator:(id)arg1;
+ (void)_clearReferenceViewFromAnimators:(id)arg1;
+ (void)_referenceViewSizeChanged:(id)arg1;

- (void)didEndContact:(id)arg1;
- (void)didBeginContact:(id)arg1;
- (id)behaviors;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)delegate;
- (unsigned int)_referenceSystemType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_referenceSystemBounds;
- (void)setReferenceView:(id)arg1;
- (double)_realElapsedTime;
- (long long)_ticks;
- (double)_animatorInterval;
- (BOOL)_alwaysDisableDisplayLink;
- (void)_setAlwaysDisableDisplayLink:(BOOL)arg1;
- (int)_debugInterval;
- (void)_setDebugInterval:(int)arg1;
- (void)_setAction:(id)arg1;
- (float)_speed;
- (void)_setSpeed:(float)arg1;
- (void)updateItemFromCurrentState:(id)arg1;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (id)itemsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)_animatorIntegralization;
- (void)_setAnimatorIntegralization:(unsigned int)arg1;
- (void)_unregisterCollisionGroup;
- (int)_registerCollisionGroup;
- (void)removeAllBehaviors;
- (void)_unregisterImplicitBounds;
- (void)_registerImplicitBounds;
- (void)removeBehavior:(id)arg1;
- (void)addBehavior:(id)arg1;
- (float)_ptmRatio;
- (id)initWithReferenceView:(id)arg1;
- (void)_setReferenceSystem:(id)arg1;
- (BOOL)_animatorStep:(double)arg1;
- (void)_postSolverStep;
- (void)_preSolverStep;
- (void)_reportEndContacts;
- (void)_reportBeginContacts;
- (void)_reevaluateImplicitBounds;
- (void)_evaluateLocalBehaviors;
- (void)_stop;
- (BOOL)_isWorldActive;
- (void)_defaultMapper:(id)arg1 position:(struct CGPoint { float x1; float x2; })arg2 angle:(float)arg3 itemType:(unsigned int)arg4;
- (void)updateItemUsingCurrentState:(id)arg1;
- (void)_runBlockPostSolverIfNeeded:(id)arg1;
- (id)_keyForItem:(id)arg1;
- (void)_setupWorld;
- (void)_unregisterBehavior:(id)arg1;
- (void)_registerBehavior:(id)arg1;
- (void)_checkBehavior:(id)arg1;
- (void)_traverseBehaviorHierarchy:(id)arg1;
- (id)_referenceSystem;
- (double)elapsedTime;
- (void)_clearReferenceView;
- (id)referenceView;
- (id)initWithReferenceSystem:(id)arg1;
- (void)_displayLinkTick:(id)arg1;
- (void)_setRunning:(BOOL)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (BOOL)isRunning;
- (void)_shouldReevaluateLocalBehaviors;
- (id)_registerBodyForItem:(id)arg1 shape:(unsigned int)arg2;
- (void)_unregisterBodyForItem:(id)arg1 action:(id)arg2;
- (id)_registerBodyForItem:(id)arg1;
- (id)_world;
- (void)_tickle;
- (id)_bodyForItem:(id)arg1;
- (id)recursiveDescription;
- (void)_start;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;

@end
