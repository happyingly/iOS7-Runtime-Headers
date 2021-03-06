/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SANoteObject : SADomainObject  {
}

@property(copy) NSString * contents;
@property(copy) NSDate * createdDate;
@property(copy) NSDate * lastModifiedDate;
@property(copy) NSString * title;

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)object;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (void)setLastModifiedDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setCreatedDate:(id)arg1;
- (id)createdDate;
- (id)lastModifiedDate;
- (void)setContents:(id)arg1;
- (id)contents;
- (id)groupIdentifier;

@end
