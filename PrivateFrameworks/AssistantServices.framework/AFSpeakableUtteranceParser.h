/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSLocale, NSMutableDictionary;

@interface AFSpeakableUtteranceParser : NSObject  {
    NSMutableDictionary *_providers;
    id _functionHandler;
    NSLocale *_locale;
}

@property BOOL handleTTSCodes;
@property BOOL handlesFunctions;

+ (id)parseUserGeneratedMessage:(id)arg1;
+ (BOOL)_shouldAutomaticallyProvideFunctions;

- (id)parseStringRemovingControlCharacters:(id)arg1 error:(id*)arg2;
- (void)setHandleTTSCodes:(BOOL)arg1;
- (id)_handleControlCodeAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { int x_5_1_1; int x_5_1_2; } x5; int x6; int x7; })arg2 totalLength:(unsigned int)arg3 consumedLength:(unsigned int*)arg4 hadEmpties:(BOOL*)arg5;
- (id)_handleProviderAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { int x_5_1_1; int x_5_1_2; } x5; int x6; int x7; })arg2 totalLength:(unsigned int)arg3 consumedLength:(unsigned int*)arg4;
- (id)_handleOptionalAtIndex:(unsigned int)arg1 withBuffer:(struct { unsigned short x1[64]; struct __CFString {} *x2; unsigned short *x3; char *x4; struct { int x_5_1_1; int x_5_1_2; } x5; int x6; int x7; })arg2 totalLength:(unsigned int)arg3 consumedLength:(unsigned int*)arg4;
- (id)parseStringWithFormat:(id)arg1 includeControlCharacters:(BOOL)arg2 error:(id*)arg3 hadEmpties:(BOOL*)arg4;
- (id)parseStringWithFormat:(id)arg1 error:(id*)arg2;
- (BOOL)handlesFunctions;
- (BOOL)handleTTSCodes;
- (void)registerProvider:(id)arg1 forNamespace:(id)arg2;
- (void)setHandlesFunctions:(BOOL)arg1;
- (id)initWithLocale:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
