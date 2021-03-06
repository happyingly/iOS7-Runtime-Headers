/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSArray, NSString, NSManagedObjectContext, NSFetchRequest, <NSFetchedResultsControllerDelegate>;

@interface NSFetchedResultsController : NSObject  {
    NSFetchRequest *_fetchRequest;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_sectionNameKeyPath;
    NSString *_sectionNameKey;
    NSString *_cacheName;
    void *_cache;
    struct _fetchResultsControllerFlags { 
        unsigned int _sendObjectChangeNotifications : 1; 
        unsigned int _sendSectionChangeNotifications : 1; 
        unsigned int _sendDidChangeContentNotifications : 1; 
        unsigned int _sendWillChangeContentNotifications : 1; 
        unsigned int _sendSectionIndexTitleForSectionName : 1; 
        unsigned int _changedResultsSinceLastSave : 1; 
        unsigned int _hasMutableFetchedResults : 1; 
        unsigned int _hasBatchedArrayResults : 1; 
        unsigned int _hasSections : 1; 
        unsigned int _usesNonpersistedProperties : 1; 
        unsigned int _includesSubentities : 1; 
        unsigned int _reservedFlags : 21; 
    } _flags;
    id _delegate;
    id _sortKeys;
    id _fetchedObjects;
    id _sections;
    id _sectionsByName;
    id _sectionIndexTitles;
    id _sectionIndexTitlesSections;
}

@property(readonly) NSFetchRequest * fetchRequest;
@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) NSString * sectionNameKeyPath;
@property(readonly) NSString * cacheName;
@property <NSFetchedResultsControllerDelegate> * delegate;
@property(readonly) NSArray * fetchedObjects;
@property(readonly) NSArray * sectionIndexTitles;
@property(readonly) NSArray * sections;

+ (unsigned int)_insertIndexForObject:(id)arg1 inArray:(id)arg2 lowIdx:(unsigned int)arg3 highIdx:(unsigned int)arg4 sortDescriptors:(id)arg5;
+ (void)deleteCacheWithName:(id)arg1;
+ (void)_set__PF__SkipSimulatorAsserts:(BOOL)arg1;
+ (void)_set__PF_LINKEDAFTERWILDCAT:(BOOL)arg1;
+ (void)_set__PF_LINKEDAFTERNORTHSTAR:(BOOL)arg1;
+ (id)_CoreDataSectionCachesPath;
+ (void)initialize;

- (void)_dumpSectionInfo;
- (BOOL)_didUseGroupBy;
- (BOOL)_didFailPostprocessing;
- (BOOL)_didUpdateOnlyStoreInfo;
- (BOOL)_didUseCachedSectionInfo;
- (void)_updateCachedStoreInfo;
- (void)_appendAffectedStoreInfoToData:(id)arg1 adjustedOffset:(long long*)arg2;
- (BOOL)_postprocessUpdatedObjects:(id)arg1;
- (void)_preprocessUpdatedObjects:(id)arg1 insertsInfo:(id)arg2 deletesInfo:(id)arg3 updatesInfo:(id)arg4 sectionsWithDeletes:(id)arg5 newSectionNames:(id)arg6 treatAsRefreshes:(BOOL)arg7;
- (void)_preprocessDeletedObjects:(id)arg1 deletesInfo:(id)arg2 sectionsWithDeletes:(id)arg3;
- (void)_preprocessInsertedObjects:(id)arg1 insertsInfo:(id)arg2 newSectionNames:(id)arg3;
- (id)_fetchedObjectsArrayOfObjectIDs;
- (BOOL)_hasFetchedObjects;
- (BOOL)_postprocessInsertedObjects:(id)arg1;
- (BOOL)_postprocessDeletedObjects:(id)arg1;
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned int)arg1;
- (unsigned int)_sectionNumberForIndex:(unsigned int)arg1;
- (id)_indexPathForIndex:(unsigned int)arg1;
- (void)_updateSectionOffsetsStartingAtSection:(id)arg1;
- (void)_insertObjectInFetchedObjects:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_createNewSectionForObject:(id)arg1;
- (unsigned int)_indexOfFetchedID:(id)arg1;
- (BOOL)_objectInResults:(id)arg1;
- (void)_makeMutableFetchedObjects;
- (id)_resolveSectionIndexTitleForSectionName:(id)arg1;
- (BOOL)_computeSectionInfoWithGroupBy:(id)arg1 error:(id*)arg2;
- (id)_sectionCachePath;
- (id)cacheName;
- (id)sectionNameKeyPath;
- (int)sectionForSectionIndexTitle:(id)arg1 atIndex:(int)arg2;
- (id)sectionIndexTitleForSectionName:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (BOOL)performFetch:(id*)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (id)sectionIndexTitles;
- (id)_sectionNameForObject:(id)arg1;
- (BOOL)_computeSectionInfo:(id)arg1 error:(id*)arg2;
- (BOOL)_restoreCachedSectionInfo;
- (void)_managedObjectContextDidChange:(id)arg1;
- (void)_managedObjectContextDidSave:(id)arg1;
- (BOOL)_keyPathContainsNonPersistedProperties:(id)arg1;
- (id)fetchedObjects;
- (id)sections;
- (id)fetchRequest;
- (id)managedObjectContext;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;

@end
