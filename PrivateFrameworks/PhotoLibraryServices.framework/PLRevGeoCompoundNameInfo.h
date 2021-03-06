/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSArray;

@interface PLRevGeoCompoundNameInfo : NSObject  {
    BOOL _isContinuation;
    BOOL _suffixWhenPrefixOnly;
    NSString *_namePrefix;
    NSArray *_sortedNames;
    NSString *_nameSuffix;
}

@property(copy) NSString * namePrefix;
@property(copy) NSArray * sortedNames;
@property(copy) NSString * nameSuffix;
@property BOOL isContinuation;
@property BOOL suffixWhenPrefixOnly;
@property(readonly) NSArray * localizedSortedNames;
@property(readonly) NSString * localizedTitleForNameInfo;

+ (id)_localizedNameForName:(id)arg1;

- (BOOL)suffixWhenPrefixOnly;
- (BOOL)isContinuation;
- (id)sortedNames;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;
- (void)setSuffixWhenPrefixOnly:(BOOL)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setIsContinuation:(BOOL)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setSortedNames:(id)arg1;
- (id)dictionaryForInfo;
- (id)nameSuffix;
- (id)namePrefix;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
