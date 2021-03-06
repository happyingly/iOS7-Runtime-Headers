/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAMailAccount;

@interface DADeliveryAccount : DeliveryAccount  {
    DAMailAccount *_DAMailAccount;
}


- (id)initWithDAMailAccount:(id)arg1;
- (id)mailAccountIfAvailable;
- (Class)deliveryClass;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (void)dealloc;

@end
