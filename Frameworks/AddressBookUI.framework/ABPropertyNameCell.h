/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UITextField, ABPropertyGroupItem, UIResponder;

@interface ABPropertyNameCell : ABContactCell  {
    UITextField *_textField;
    UIResponder *_firstResponderItem;
}

@property(retain) ABPropertyGroupItem * propertyItem;
@property(readonly) UITextField * textField;
@property(readonly) UIResponder * firstResponderItem;

+ (BOOL)requiresConstraintBasedLayout;

- (void)textFieldChanged:(id)arg1;
- (id)firstResponderItem;
- (id)propertyItem;
- (void)setPropertyItem:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)textField;
- (void)updateConstraints;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end