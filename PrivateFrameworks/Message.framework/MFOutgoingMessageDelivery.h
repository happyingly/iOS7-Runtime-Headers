/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSDictionary, MFMessage, MFPlainTextDocument, MailAccount, MFMailDelivery, MFMutableMessageHeaders, NSString, <MFDeliveryDelegate>, DeliveryAccount, NSArray;

@interface MFOutgoingMessageDelivery : NSObject  {
    MFMessage *_message;
    MFMutableMessageHeaders *_headers;
    NSArray *_mixedContent;
    BOOL _textPartsAreHTML;
    NSString *_htmlBody;
    MFPlainTextDocument *_plainTextAlternative;
    NSArray *_otherHTMLAndAttachments;
    NSArray *_charsets;
    <MFDeliveryDelegate> *_delegate;
    MailAccount *_archiveAccount;
    DeliveryAccount *_deliveryAccount;
    NSDictionary *_compositionSpecification;
    MFMailDelivery *_currentDeliveryObject;
}

@property(retain) NSDictionary * compositionSpecification;

+ (id)newWithMessage:(id)arg1;
+ (id)newWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
+ (id)newWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;

- (id)_deliveryAccountForInitializers;
- (id)_deliverSynchronouslyWithCurrentSettings:(BOOL)arg1;
- (id)_currentDeliveryObject;
- (void)setCompositionSpecification:(id)arg1;
- (int)deliveryStatus;
- (void)setArchiveAccount:(id)arg1;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)originalHeaders;
- (id)deliverSynchronously;
- (id)compositionSpecification;
- (id)initWithMessage:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)account;
- (id)message;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

@end
