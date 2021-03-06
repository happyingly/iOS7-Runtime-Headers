/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSMutableDictionary : NSDictionary  {
}

+ (id)dictionaryWithSharedKeySet:(id)arg1;
+ (id)dictionaryWithCapacity:(unsigned int)arg1;
+ (id)nonRetainingKeyAndValueDictionary;
+ (id)nonRetainingDictionary;
+ (id)retainingKeyDictionary;
+ (id)MSASDictionaryWithCopyOfDictionary:(id)arg1;

- (void)setObjects:(id)arg1 forKeys:(id)arg2;
- (void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (void)setEntriesFromDictionary:(id)arg1;
- (void)replaceObjects:(id)arg1 forKeys:(id)arg2;
- (void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (void)removeKeysForObject:(id)arg1;
- (void)removeEntriesPassingTest:(id)arg1;
- (void)removeEntriesInDictionary:(id)arg1;
- (void)addObjects:(id)arg1 forKeys:(id)arg2;
- (void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (void)removeEntriesWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (void)_mutate;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)__setObject:(id)arg1 forKey:(id)arg2;
- (void)replaceObject:(id)arg1 forKey:(id)arg2;
- (void)__addObject:(id)arg1 forKey:(id)arg2;
- (void)invert;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2;
- (void)_web_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_web_setInt:(int)arg1 forKey:(id)arg2;
- (void)bks_setSafeObject:(id)arg1 forKey:(id)arg2;
- (void)sbs_setSafeObject:(id)arg1 forKey:(id)arg2;
- (void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedInt:(unsigned int)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedShort:(unsigned short)arg1 forKey:(id)arg2;
- (void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2;
- (void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2;
- (void)_webkit_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_webkit_setFloat:(float)arg1 forKey:(id)arg2;
- (void)_webkit_setInt:(int)arg1 forKey:(id)arg2;
- (void)addEntriesFromDictionaryWithRecursion:(id)arg1;
- (void)MCSetObjectIfNotNil:(id)arg1 forKey:(id)arg2;
- (void)MCDeepCopyMissingEntriesFromDictionary:(id)arg1;
- (void)MCDeepCopyEntriesFromDictionary:(id)arg1;
- (void)MCFixUpRestrictionsDictionaryForMDMReporting;
- (void)_gkAddEntriesFromFormEncodedString:(id)arg1;
- (id)MSASAddIsErrorRecovery;
- (id)MSASAddNotInterestingKey;
- (id)MSASAddEventIsDueToAssetCollectionDeletionAssetCollectionGUID:(id)arg1;
- (id)MSASAddEventIsDueToAlbumDeletionAlbumGUID:(id)arg1;
- (id)MSASAddIsLocalChange;
- (id)MSASAddIsAlbumResetSyncAlbumGUID:(id)arg1;
- (id)MSASAddIsGlobalResetSync;
- (id)MSASAddDictionary:(id)arg1;
- (void)CDVAddObjectsAndKeys:(id)arg1;
- (void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)setAsString:(id)arg1 forKey:(id)arg2;
- (void)mf_fixupRFC2231Values;
- (id)addToCacheAndReturnCssString:(id)arg1;
- (void)mf_addObject:(id)arg1 forKey:(id)arg2;
- (void)mf_setInteger:(int)arg1 forKey:(id)arg2;
- (void)mf_setBool:(BOOL)arg1 forKey:(id)arg2;
- (id)mf_objectForKey:(id)arg1 ofClass:(Class)arg2;

@end
