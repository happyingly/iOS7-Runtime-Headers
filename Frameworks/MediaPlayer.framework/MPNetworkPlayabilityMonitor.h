/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPNetworkPlayabilityMonitor : NSObject  {
    int _effectiveNetworkTypeForPlayback;
    int _networkType;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) int networkType;
@property(readonly) int effectiveNetworkTypeForPlayback;

+ (id)sharedNetworkPlayabilityMonitor;

- (void)_networkTypeDidChangeNotification:(id)arg1;
- (int)networkType;
- (int)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
- (int)effectiveNetworkTypeForPlayback;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
