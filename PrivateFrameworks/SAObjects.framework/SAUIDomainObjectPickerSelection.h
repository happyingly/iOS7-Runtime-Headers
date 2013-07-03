/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SADomainObject, SAUIDomainObjectPicker;

@interface SAUIDomainObjectPickerSelection : SAStartRequest  {
}

@property(retain) SAUIDomainObjectPicker * domainObjectPicker;
@property(retain) SADomainObject * selectedItem;

+ (id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectPickerSelection;

- (void)setDomainObjectPicker:(id)arg1;
- (id)domainObjectPicker;
- (id)encodedClassName;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (id)groupIdentifier;

@end