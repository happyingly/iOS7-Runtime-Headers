/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class CNContact, ABPeoplePickerNavigationController;

@interface ABContactAddLinkedCardAction : ABContactAction <ABPeoplePickerNavigationControllerDelegate, ABPersonViewControllerDelegate> {
    CNContact *_chosenContact;
    ABPeoplePickerNavigationController *_peoplePicker;
    CNContact *_selectedContact;
}

@property(retain) CNContact * chosenContact;
@property(retain) ABPeoplePickerNavigationController * peoplePicker;
@property(retain) CNContact * selectedContact;


- (id)chosenContact;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerLinkButtonTapped;
- (void)setSelectedContact:(id)arg1;
- (id)selectedContact;
- (void)setChosenContact:(id)arg1;
- (void)performActionWithSender:(id)arg1;
- (void)dealloc;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)setPeoplePicker:(id)arg1;
- (id)peoplePicker;

@end
