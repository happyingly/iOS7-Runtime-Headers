/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

@class FTMessageDelivery, IDSPushHandler, NSDate, NSMutableArray;

@interface IDSAppleIDSRegistrationCenter : NSObject <IMSystemMonitorListener> {
    NSMutableArray *_queuedRegistrations;
    NSMutableArray *_queuedAuthentications;
    NSMutableArray *_currentAuthentications;
    NSMutableArray *_currentRegistrations;
    NSMutableArray *_handlers;
    BOOL _pendingDequeue;
    BOOL _pendingDeregistration;
    NSDate *_dateLastRegistered;
    NSDate *_accountingHour;
    unsigned int _registrations;
    FTMessageDelivery *_httpMessageDelivery;
    IDSPushHandler *_pushHandler;
}

+ (id)sharedInstance;

- (id)dateLastRegistered;
- (BOOL)sendDeregistration:(id)arg1;
- (BOOL)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(id)arg3;
- (BOOL)getDependentRegistrations:(id)arg1 completionBlock:(id)arg2;
- (BOOL)sendRequest:(id)arg1;
- (void)buildValidationCredentialsIfNeeded;
- (void)_sendAbsintheValidationCertRequestIfNeeded;
- (void)__abisntheCleanupTimerHit;
- (void)__flushValidationQueue;
- (void)__failValidationQueue;
- (void)__queueValidationMessage:(id)arg1;
- (void)_sendDeregistration:(id)arg1;
- (void)__reallySendRegistration;
- (BOOL)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_processGetHandlesMessage:(id)arg1 deliveredWithError:(id)arg2 resultCode:(int)arg3 resultDictionary:(id)arg4 allowPasswordPrompt:(BOOL)arg5;
- (void)_notifyEmailQueryFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;
- (BOOL)_hasRegistration:(id)arg1 inQueue:(id)arg2;
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;
- (void)_notifyProvisionFailure:(id)arg1 error:(int)arg2 fatal:(BOOL)arg3 info:(id)arg4;
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;
- (void)__reallySendDeregistration;
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(BOOL)arg6 deliveredWithError:(id)arg7 resultCode:(int)arg8 resultDictionary:(id)arg9;
- (id)activeRegistrations;
- (BOOL)_hasOngoingAuthentications;
- (void)_notifyRegistrationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyRegistrationSuccess:(id)arg1;
- (void)_noteRegistration;
- (BOOL)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1;
- (void)_setAbisntheCleanupTimer;
- (void)_clearAbisntheCleanupTimer;
- (void)_sendRegistrationAsDeregister:(BOOL)arg1;
- (void)_sendAuthenticateRegistration:(id)arg1;
- (void)_dequeuePendingRequestsIfNecessary;
- (BOOL)_checkOverRegistrations;
- (void)__cleanupValidationInfo;
- (BOOL)isRegistering:(id)arg1;
- (BOOL)sendRegistration:(id)arg1;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (BOOL)authenticateRegistration:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;
- (void)dealloc;

@end
