/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonPickersDelegate, NSDictionary, ABMultiCellContentView, UIResponder, ABPersonTableViewActionsDelegate, NSMutableArray, ABPersonCellLayoutManager, ABNamePropertyGroup, ABPersonTableFooterView, ABPersonTableHeaderView, ABPersonTableView, <ABStyleProvider>, NSString, NSMutableDictionary, UILabel, <ABPersonTableViewDataSourceDelegate>, ABActionsController, ABPersonTableViewSharingDelegate, ABLabelViewWithVariablePositioning, ABPersonImageView, UIFont, NSArray, ABPersonTableViewMultiCellDelegate, ABUIPerson, UITableViewCell, NSIndexPath, ABPersonTableViewImageDataDelegate, UIView, ABPersonTableViewLinkingDelegate;

@interface ABPersonTableViewDataSource : NSObject <UITableViewDelegate, UITableViewDataSourcePrivate, ABPrimaryValueDelegate, ABPersonCellLayoutManagerDelegate> {
    ABActionsController *_actionsController;
    struct __CFArray { } *_optionalProperties;
    struct __CFArray { } *_additionalProperties;
    struct __CFDictionary { } *_multiCellContentViewsByCustomCell;
    ABPersonTableViewMultiCellDelegate *_multiCellContentViewDelegate;
    ABPersonTableViewImageDataDelegate *_imageDataDelegate;
    ABPersonTableViewActionsDelegate *_actionsDelegate;
    ABPersonTableViewLinkingDelegate *_linkingDelegate;
    ABPersonPickersDelegate *_pickersDelegate;
    ABPersonTableViewSharingDelegate *_sharingDelegate;
    BOOL _attemptDelayedBecomeFirstResponder;
    BOOL _isPinningLocked;
    NSMutableDictionary *_propertyGroupsStore;
    NSMutableDictionary *_unusedPropertyGroupsStore;
    NSMutableArray *_editablePropertyGroups;
    NSMutableArray *_propertyGroups;
    ABUIPerson *_preinsertedPerson;
    struct __CFSet { } *_addNewValuePropertiesStore;
    struct __CFSet { } *_addNewValueProperties;
    ABNamePropertyGroup *_namePropertyGroup;
    UILabel *_noValueLabel;
    ABPersonTableHeaderView *_headerView;
    ABPersonTableFooterView *_footerView;
    UIView *_customPersonTableHeaderView;
    UIView *_customPersonTableFooterView;
    UIView *_notesHeaderView;
    ABLabelViewWithVariablePositioning *_linkingHeaderView;
    int _primaryProperty;
    UITableViewCell *_partiallySelectedCell;
    ABPersonCellLayoutManager *_cellLayoutManager;
    UIView *_tableHeaderViewContainer;
    NSDictionary *_cachedKeyboardInfo;
    BOOL _isEditing;
    BOOL _isUnlinkingPerson;
    BOOL _badgeEmailPropertiesForMailVIP;
    float _lastReturnedHeaderHeight;
    BOOL _allowsActions;
    BOOL _allowsEditing;
    BOOL _allowsAddToFavorites;
    BOOL _allowsSendingTextMessage;
    BOOL _allowsSharing;
    BOOL _allowsConferencing;
    BOOL _allowsDeletion;
    BOOL _allowsSounds;
    BOOL _allowsVibrations;
    BOOL _shouldShowContactSourcesStringAsMessage;
    BOOL _highlightedValueIsImportant;
    BOOL _isSettingFirstResponder;
    BOOL _isEndingEditingTransactions;
    BOOL _viewControllerWillSlideOut;
    BOOL _selectedPropertyForCellWithoutLabelDivider;
    BOOL _ignoreVibrationsDidChangeNotification;
    NSArray *_people;
    void *_addressBook;
    <ABPersonTableViewDataSourceDelegate> *_delegate;
    ABPersonTableView *_tableView;
    struct __CFArray { } *_displayedProperties;
    int _highlightedValueProperty;
    int _highlightedValueIdentifier;
    int _insertionProperty;
    id _insertionValue;
    id _insertionLabel;
    <ABStyleProvider> *_styleProvider;
    NSIndexPath *_lastActiveMultiCellIndexPath;
    ABMultiCellContentView *_lastActiveMultiCellContentView;
    ABMultiCellContentView *_multiCellContentViewForWillEndEditing;
    ABMultiCellContentView *_pinningMultiCellContentViewAlternate;
    NSIndexPath *_pinningMultiCellIndexPath;
    NSIndexPath *_pinningMultiCellRelativeIndexPath;
    UIResponder *_pinningResponder;
    int _customKeyboardOutDirection;
    NSMutableArray *_additionalLabels;
}

@property <ABPersonTableViewDataSourceDelegate> * delegate;
@property(retain) ABPersonTableView * tableView;
@property void* addressBook;
@property(retain) NSArray * people;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) BOOL canSave;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasImageChanges;
@property(readonly) BOOL hasNameChanges;
@property BOOL allowsDeletion;
@property BOOL allowsEditing;
@property BOOL allowsAddToFavorites;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSharing;
@property BOOL allowsConferencing;
@property BOOL allowsActions;
@property BOOL allowsSounds;
@property BOOL allowsVibrations;
@property BOOL shouldShowContactSourcesStringAsMessage;
@property struct __CFArray { }* displayedProperties;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property(retain) UIFont * messageFont;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIView * customMessageView;
@property int highlightedValueProperty;
@property int highlightedValueIdentifier;
@property BOOL highlightedValueIsImportant;
@property(readonly) int insertionProperty;
@property(readonly) id insertionValue;
@property(readonly) id insertionLabel;
@property(readonly) ABPersonImageView * personImageView;
@property(retain) ABPersonTableHeaderView * tableHeaderView;
@property(retain) UIView * personHeaderView;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property(retain) UIView * customPersonTableHeaderView;
@property(retain) UIView * customPersonTableFooterView;
@property(readonly) ABPersonTableFooterView * tableFooterView;
@property(getter=isEditing) BOOL editing;
@property int customKeyboardOutDirection;
@property BOOL viewControllerWillSlideOut;
@property(readonly) int primaryProperty;
@property(readonly) NSString * attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property(retain) NSIndexPath * lastActiveMultiCellIndexPath;
@property(retain) ABMultiCellContentView * lastActiveMultiCellContentView;
@property(retain) ABMultiCellContentView * multiCellContentViewForWillEndEditing;
@property(readonly) ABPersonTableViewMultiCellDelegate * multiCellContentViewDelegate;
@property(readonly) ABPersonTableViewImageDataDelegate * imageDataDelegate;
@property(readonly) ABPersonTableViewActionsDelegate * actionsDelegate;
@property(readonly) ABPersonTableViewLinkingDelegate * linkingDelegate;
@property(readonly) ABPersonPickersDelegate * pickersDelegate;
@property(readonly) ABPersonTableViewSharingDelegate * sharingDelegate;
@property(retain) NSMutableArray * additionalLabels;
@property(retain) ABMultiCellContentView * pinningMultiCellContentViewAlternate;
@property(retain) NSIndexPath * pinningMultiCellIndexPath;
@property(retain) NSIndexPath * pinningMultiCellRelativeIndexPath;
@property(retain) UIResponder * pinningResponder;
@property(readonly) BOOL isPinning;
@property BOOL isSettingFirstResponder;
@property(readonly) BOOL isEndingEditingTransactions;
@property BOOL selectedPropertyForCellWithoutLabelDivider;
@property BOOL ignoreVibrationsDidChangeNotification;
@property BOOL badgeEmailPropertiesForMailVIP;
@property(retain) UITableViewCell * partiallySelectedCell;


- (void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1;
- (BOOL)badgeEmailPropertiesForMailVIP;
- (BOOL)ignoreVibrationsDidChangeNotification;
- (BOOL)selectedPropertyForCellWithoutLabelDivider;
- (void)setCustomKeyboardOutDirection:(int)arg1;
- (int)customKeyboardOutDirection;
- (void)setViewControllerWillSlideOut:(BOOL)arg1;
- (BOOL)isEndingEditingTransactions;
- (void)setIsSettingFirstResponder:(BOOL)arg1;
- (BOOL)isSettingFirstResponder;
- (id)pinningResponder;
- (id)pinningMultiCellRelativeIndexPath;
- (id)pinningMultiCellContentViewAlternate;
- (id)multiCellContentViewForWillEndEditing;
- (id)lastActiveMultiCellContentView;
- (id)insertionLabel;
- (BOOL)highlightedValueIsImportant;
- (BOOL)allowsVibrations;
- (BOOL)allowsSounds;
- (int)editingSectionForNonEditingSection:(int)arg1;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;
- (id)displayedPropertyGroupForProperty:(int)arg1 context:(void*)arg2 whenEditing:(BOOL)arg3;
- (void)updateCellEditingStyleAtIndexPath:(id)arg1;
- (void)addToContactsButtonClicked:(id)arg1;
- (void)addFieldCellWillSelect:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)prepareView;
- (void)headerFooterAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setCustomPersonTableFooterView:(id)arg1;
- (id)customPersonTableFooterView;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (void)setCustomPersonTableHeaderView:(id)arg1;
- (id)customPersonTableHeaderView;
- (void)reloadFavoritesData;
- (void)reloadPropertyGroups;
- (void)reloadDeleteButton;
- (void)reloadPreferredPersonForName;
- (void)reloadNameData;
- (void)setShouldShowContactSourcesStringAsMessage:(BOOL)arg1;
- (void)updateForConferencingAvailabilityChange;
- (void)updateLinkingUI:(id)arg1;
- (id)prepareForLinkingUIUpdate;
- (BOOL)isUnlinkingPersonWithAnimation;
- (id)controllerMainView;
- (id)sharingDelegate;
- (void)setLinkingDelegate:(id)arg1;
- (id)_linkingHeaderView;
- (id)_notesHeaderView;
- (void)showLinkedCardAtRow:(int)arg1;
- (void)addFieldCellSelected:(id)arg1;
- (void)swapAddNewValueCellForProperty:(int)arg1 atIndexPath:(id)arg2;
- (void)valueAtIndex:(int)arg1 selectedForPropertyGroup:(id)arg2 withMemberCell:(id)arg3 forEditing:(BOOL)arg4;
- (BOOL)_isReadonlyAtIndexPath:(id)arg1;
- (void)endPinning;
- (void)_updateCellsForDataProvider:(id)arg1 afterDeleteAtIndex:(int)arg2 isInsertionIndex:(BOOL)arg3 inTableView:(id)arg4;
- (id)sectionAnimationsDictionaryForSwipeToDeleteAtIndexPath:(id)arg1;
- (int)numberOfRowsInSection:(int)arg1 whenEditing:(BOOL)arg2;
- (void)tableView:(id)arg1 cell:(id*)arg2 orTag:(int*)arg3 forRowAtIndexPath:(id)arg4 allowDequeing:(BOOL)arg5;
- (void)_updateTableForVibrationChanges;
- (void)adjustTableViewForKeyboardInfo:(id)arg1 animated:(BOOL)arg2;
- (BOOL)viewControllerWillSlideOut;
- (id)linkedCardCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (void)presentRelatedNamesPicker:(id)arg1;
- (id)ieTableViewCellForPropertyGroup:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(int*)arg6;
- (int)rowIndexInPropertyGroup:(id*)arg1 orActions:(id*)arg2 forRow:(int)arg3 inSection:(int)arg4 whenEditing:(BOOL)arg5;
- (id)tableViewCellForActions:(id)arg1 tableView:(id)arg2 row:(int)arg3 editing:(BOOL)arg4 allowDequeing:(BOOL)arg5 tag:(int*)arg6;
- (id)actionCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2 isConference:(BOOL)arg3 hasCustomContent:(BOOL)arg4;
- (id)_multiCellContentViewForCustomPropertyCell:(id)arg1;
- (void)_setMultiCellContentView:(id)arg1 forCustomPropertyCell:(id)arg2;
- (id)newAccessoryViewWhenEditing:(BOOL)arg1 forDataProvider:(id)arg2 info:(id)arg3;
- (id)cellLayoutManager;
- (void)_getDataProvider:(id*)arg1 andInfo:(id*)arg2 forIndexPath:(id)arg3;
- (id)addValueCellForTableView:(id)arg1 withReuseIdentifier:(id)arg2;
- (void)setInsertionProperty:(int)arg1 value:(id)arg2 label:(id)arg3;
- (BOOL)hasOnlyRingtoneChanges;
- (void)selectCustomPartWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 occupiedCorners:(unsigned int)arg2 forCell:(id)arg3;
- (void)selectValuePartForCell:(id)arg1;
- (void)selectLabelPartForCell:(id)arg1;
- (void)setPartiallySelectedCell:(id)arg1;
- (void)setPinningMultiCellContentViewAlternate:(id)arg1;
- (void)setPinningMultiCellRelativeIndexPath:(id)arg1;
- (void)setPinningResponder:(id)arg1;
- (void)setPinningMultiCellIndexPath:(id)arg1;
- (void)invalidatePropertyGroupsForEditing:(BOOL)arg1;
- (id)newPropertyGroupsForEditing:(BOOL)arg1;
- (id)newPropertyGroupsForEditing:(BOOL)arg1 withDisplayedProperties:(struct __CFArray { }*)arg2;
- (BOOL)isPropertyOptional:(int)arg1;
- (void*)_copyDefaultPolicy:(void*)arg1;
- (struct __CFArray { }*)newAdditionalProperties;
- (void)beginPinning;
- (void)tableViewAddFieldUpdateAnimationsDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)setLastActiveMultiCellIndexPath:(id)arg1;
- (id)propertyGroupForProperty:(int)arg1 context:(void*)arg2 createIfEmpty:(BOOL)arg3;
- (id)_indexPathForHeaderViewRow:(unsigned int)arg1;
- (int)numberOfSectionsWhenEditing:(BOOL)arg1;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1 becomeFirstResponder:(BOOL)arg2;
- (struct __CFArray { }*)additionalProperties;
- (void)selectWholePartForCell:(id)arg1;
- (void)_endTableViewUpdatesWithoutScroll;
- (void)_unregisterForKeyboardNotifications;
- (void)setShouldUseAddNewValueCell:(BOOL)arg1 forProperty:(int)arg2;
- (BOOL)shouldUseAddNewValueCellForProperty:(int)arg1;
- (BOOL)usesAddNewValueCellForProperty:(int)arg1;
- (void)setHighlightedValueIsImportant:(BOOL)arg1;
- (void)_updateBackgroundForCell:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)canSelectLabelForPropertyGroup:(id)arg1 info:(id)arg2;
- (void)updateHeadersAndFootersForEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_getFirstRows:(id*)arg1 andOtherRows:(id*)arg2 fromIndexPaths:(id)arg3;
- (id)sectionAnimationsDictionaryForEditing:(BOOL)arg1;
- (void)_resetAddNewValueCells;
- (void)updateSectionHeaderAndFooterHeightsForEditing:(BOOL)arg1;
- (int)sectionIndexForProperty:(int)arg1 propertyGroupContext:(void*)arg2 withPropertyGroups:(id)arg3 whenEditing:(BOOL)arg4;
- (int)_sectionIndexForPropertyGroup:(id)arg1 orProperty:(int)arg2 propertyGroupContext:(void*)arg3 withPropertyGroups:(id)arg4 whenEditing:(BOOL)arg5;
- (void)updateTableFooterViewAnimated:(BOOL)arg1;
- (void)updateTableHeaderViewAnimated:(BOOL)arg1 andSkipTableViewHeaderHeightNotification:(BOOL)arg2;
- (void)notifyHeaderViewHeightDidChange;
- (id)newHeaderView;
- (id)multiCellContentViewDelegate;
- (id)noValueLabel;
- (id)sectionAnimationsDictionaryForOriginalPropertyGroups:(id)arg1 newPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (void)scrollToLastActiveEntryFieldAnimated:(BOOL)arg1;
- (void)reloadNoValueLabelAnimated:(BOOL)arg1;
- (void)resetPropertyGroupStores;
- (void)invalidateAdditionalProperties;
- (void)setMultiCellContentViewForWillEndEditing:(id)arg1;
- (id)titleForNoValueWithProperty:(int)arg1;
- (BOOL)hasNameChanges;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)_updateDeleteButtonIfNeededForFooterView:(id)arg1;
- (id)_footerView;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1 andRefreshUI:(BOOL)arg2;
- (void)invalidateAllPropertyGroups;
- (void)updateContactSourcesStringIfNeeded;
- (void)setAllowsConferencing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSharing:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsSendingTextMessage:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)setAllowsAddToFavorites:(BOOL)arg1 andReload:(BOOL)arg2;
- (void)reloadConferencing;
- (void)notifyDataWasReloaded;
- (int)indexOfLinkingUISectionWhenEditing:(BOOL)arg1;
- (void)deleteButtonClicked:(id)arg1;
- (id)_contactSourcesString;
- (BOOL)shouldShowContactSourcesStringAsMessage;
- (void)_getPropertyGroup:(id*)arg1 index:(int*)arg2 editableFlag:(BOOL*)arg3 atIndexPath:(id)arg4;
- (void)_unregisterForVibrationsChangedNotifications;
- (void)_registerForVibrationsChangedNotifications;
- (void)_conferenceHistoryChanged:(id)arg1;
- (void)_registerForKeyboardNotifications;
- (void)updateTableHeaderViewAnimated:(BOOL)arg1;
- (id)realHeaderView;
- (id)tableHeaderViewContainer;
- (void)setHighlightedValueIdentifier:(int)arg1;
- (int)highlightedValueIdentifier;
- (void)setHighlightedValueProperty:(int)arg1;
- (int)highlightedValueProperty;
- (id)actionsController;
- (int)sectionIndexForPropertyGroup:(id)arg1 withPropertyGroups:(id)arg2 whenEditing:(BOOL)arg3;
- (id)propertyGroupsForEditing:(BOOL)arg1;
- (void)indexOfFirstPropertyGroupSection:(int*)arg1 lastPropertyGroupSection:(int*)arg2 addFieldSection:(int*)arg3 linkingUISection:(int*)arg4 primaryPropertyActionsSection:(int*)arg5 topGroupingActionSection:(int*)arg6 bottomGroupingActionSection:(int*)arg7 cardActionsSection:(int*)arg8 cardActionsSectionCount:(int*)arg9 totalSectionCount:(int*)arg10 whenEditing:(BOOL)arg11;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsFaceTimeFavorite;
- (BOOL)allowsVoiceFavorite;
- (BOOL)isPropertyDisplayed:(int)arg1;
- (void)reloadDataIncludingHeaderView:(BOOL)arg1 invalidatePropertyData:(BOOL)arg2;
- (void)_enumerateContextPointersForProperty:(int)arg1 usingBlock:(id)arg2;
- (void)propertyGroup:(id*)arg1 orActions:(id*)arg2 forSection:(int)arg3 whenEditing:(BOOL)arg4;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (BOOL)isAttributionEnabled;
- (id)attribution;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)pickersDelegate;
- (BOOL)isPinning;
- (id)lastActiveMultiCellIndexPath;
- (void)updateByAddingFieldForProperty:(int)arg1 whenEditing:(BOOL)arg2;
- (void)setLastActiveMultiCellContentView:(id)arg1;
- (int)tableViewRowAnimationForUpdateAction:(unsigned int)arg1 isFirstRow:(BOOL)arg2;
- (void)cancelPinning;
- (id)pinningMultiCellIndexPath;
- (void)setInsertionValue:(id)arg1;
- (void)_performVibrationRelatedChangesReloadingFromModel:(BOOL)arg1 updatingDataUsingBlock:(id)arg2;
- (id)propertyGroupForProperty:(int)arg1 context:(void*)arg2;
- (id)_indexPathForPropertyGroup:(id)arg1 index:(int)arg2 editableFlag:(BOOL)arg3;
- (void)setIgnoreVibrationsDidChangeNotification:(BOOL)arg1;
- (void)setSelectedPropertyForCellWithoutLabelDivider:(BOOL)arg1;
- (void)unselectAllCellParts;
- (id)additionalLabels;
- (void)setInsertionLabel:(id)arg1;
- (id)customMessageView;
- (id)messageDetailFont;
- (id)messageFont;
- (id)messageDetail;
- (id)namePropertyGroup;
- (void)setCustomMessageView:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (BOOL)hasImageChanges;
- (void)reloadImageData;
- (BOOL)personCellLayoutManager:(id)arg1 isCellInFullEditMode:(id)arg2;
- (BOOL)isInFullEditingMode;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (id)linkingDelegate;
- (void)endEditingTransactions;
- (id)namePropertyGroup:(id)arg1 primaryValueForProperty:(int)arg2;
- (int)insertionProperty;
- (id)insertionValue;
- (id)partiallySelectedCell;
- (void)setAdditionalLabels:(id)arg1;
- (id)imageDataDelegate;
- (id)personImageView;
- (void)setPersonHeaderView:(id)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (BOOL)allowsConferencing;
- (BOOL)allowsDeletion;
- (int)primaryProperty;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsSharing;
- (BOOL)allowsActions;
- (id)personHeaderView;
- (void)setAlternateName:(id)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (id)actionsDelegate;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (id)people;
- (BOOL)canSave;
- (void)updateRecord;
- (void)setPeople:(id)arg1;
- (struct __CFArray { }*)displayedProperties;
- (void)setDisplayedProperties:(struct __CFArray { }*)arg1;
- (BOOL)isEditing;
- (BOOL)hasChanges;
- (id)alternateName;
- (void*)addressBook;
- (void)setAddressBook:(void*)arg1;
- (id)message;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)tableView;
- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)setMessage:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setTableHeaderView:(id)arg1;
- (id)tableFooterView;
- (id)tableHeaderView;
- (id)viewForFooterInTableView:(id)arg1;
- (id)viewForHeaderInTableView:(id)arg1;
- (float)heightForFooterInTableView:(id)arg1;
- (float)heightForHeaderInTableView:(id)arg1;
- (float)marginForTableView:(id)arg1;
- (BOOL)tableView:(id)arg1 wantsHeaderForSection:(int)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTableView:(id)arg1;
- (void)sizeToFit;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;

@end
