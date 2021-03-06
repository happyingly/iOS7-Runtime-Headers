/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class UIImage, NSString, NSData, NSURL;

@interface SFAirDropPayload : NSObject  {
    BOOL _wasString;
    NSURL *_URL;
    NSData *_data;
    NSString *_type;
    UIImage *_previewImage;
    NSString *_payloadDescription;
    int _identifer;
}

@property BOOL wasString;
@property(copy) NSURL * URL;
@property(retain) NSData * data;
@property(copy) NSString * type;
@property(retain) UIImage * previewImage;
@property(copy) NSString * payloadDescription;
@property int identifer;

+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(int)arg4;
+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(int)arg5;

- (void)setWasString:(BOOL)arg1;
- (BOOL)wasString;
- (void)setIdentifer:(int)arg1;
- (void)setPayloadDescription:(id)arg1;
- (int)identifer;
- (id)payloadDescription;
- (void)setPreviewImage:(id)arg1;
- (id)previewImage;
- (void)setType:(id)arg1;
- (id)data;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)URL;
- (void)setData:(id)arg1;
- (id)type;
- (void)setURL:(id)arg1;

@end
