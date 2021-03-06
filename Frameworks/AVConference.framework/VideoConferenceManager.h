/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class VideoConference, GKNATObserver, ICEResultWaitQueue, NSMutableArray;

@interface VideoConferenceManager : NSObject <VideoConferenceDelegate> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } stateLock;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } sipLock;
    NSMutableArray *vcList;
    VideoConference *activeConference;
    VideoConference *conferenceWithMic;
    ICEResultWaitQueue *resultQueue;
    struct tagHANDLE { int x1; } *hSIP;
    int sipRefCount;
    GKNATObserver *natObserver;
    BOOL isVTPInitialized;
}

@property VideoConference * activeConference;
@property VideoConference * conferenceWithMic;
@property(readonly) ICEResultWaitQueue * resultQueue;
@property(readonly) NSMutableArray * vcList;

+ (void)addNSError:(id)arg1 toConferenceXPCArgumentDictionary:(id)arg2;
+ (id)defaultVideoConferenceManager;

- (void)registerBlocksForConference;
- (id)vcList;
- (id)activeConference;
- (void)broadcastCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2;
- (void)pauseVideoConferences:(BOOL)arg1;
- (id)conferenceForIncomingConnectionResult:(struct tagCONNRESULT { unsigned int x1; int x2; int x3; unsigned int x4; int x5; int x6; unsigned short x7; unsigned short x8; struct tagIPPORT { int x_9_1_1; BOOL x_9_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_9_1_3; unsigned short x_9_1_4; } x9; struct tagIPPORT { int x_10_1_1; BOOL x_10_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_10_1_3; unsigned short x_10_1_4; } x10; struct tagIPPORT { int x_11_1_1; BOOL x_11_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_11_1_3; unsigned short x_11_1_4; } x11; struct tagIPPORT { int x_12_1_1; BOOL x_12_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_12_1_3; unsigned short x_12_1_4; } x12; struct tagIPPORT { int x_13_1_1; BOOL x_13_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_13_1_3; unsigned short x_13_1_4; } x13; struct tagIPPORT { int x_14_1_1; BOOL x_14_1_2[16]; union { unsigned int x_3_2_1; unsigned char x_3_2_2[16]; } x_14_1_3; unsigned short x_14_1_4; } x14; unsigned int x15; int x16; int x17; int x18; int x19; unsigned int x20; unsigned short x21; int x22; struct tagCONNRESULT {} *x23; }*)arg1;
- (id)conferenceForParticipantID:(id)arg1;
- (BOOL)hasVideoConference:(id)arg1;
- (id)conferenceForCallID:(unsigned long)arg1;
- (BOOL)isSIPHandleValid:(struct tagHANDLE { int x1; }*)arg1;
- (void)cleanupVTP;
- (void)createSIP;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 fromCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 sendIPChangeRequest:(id)arg2 withCallID:(unsigned long)arg3;
- (void)setConferenceWithMic:(id)arg1;
- (id)conferenceWithMic;
- (void)removeVideoConference:(id)arg1;
- (void)setActiveConference:(id)arg1;
- (void)addVideoConference:(id)arg1;
- (id)resultQueue;
- (void)stopSIP;
- (struct tagHANDLE { int x1; }*)SIPHandle;
- (void)startSIP;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned long)arg2;
- (void)videoConference:(id)arg1 withCallID:(unsigned long)arg2 networkHint:(BOOL)arg3;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned long)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned long)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned long)arg2;
- (void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned long)arg3;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned long)arg3 error:(id)arg4;
- (id)init;

@end
