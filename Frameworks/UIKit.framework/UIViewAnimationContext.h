/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIViewAnimationContext : NSObject  {
    NSArray *_viewAnimations;
    int _animationCount;
    id _completionHandler;
}

@property(retain) NSArray * viewAnimations;
@property int animationCount;
@property(readonly) id completionHandler;


- (void)dealloc;
- (id)completionHandler;
- (id)viewAnimations;
- (void)setAnimationCount:(int)arg1;
- (int)animationCount;
- (void)setViewAnimations:(id)arg1;
- (id)initWithCompletionHandler:(id)arg1;

@end
