/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, SSItemArtworkImage, NSMutableDictionary;

@interface SSItemContentRating : NSObject <SSXPCCoding, NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property(getter=isExplicitContent,readonly) BOOL explicitContent;
@property int rank;
@property(copy) NSString * ratingDescription;
@property(copy) NSString * ratingLabel;
@property int ratingSystem;
@property(getter=isRestricted,readonly) BOOL restricted;
@property BOOL shouldHideWhenRestricted;
@property(readonly) NSDictionary * contentRatingDictionary;
@property(readonly) SSItemArtworkImage * ratingSystemLogo;

+ (id)stringForRatingSystem:(int)arg1;
+ (int)ratingSystemFromString:(id)arg1;

- (BOOL)shouldHideWhenRestricted;
- (void)setRatingSystem:(int)arg1;
- (id)ratingDescription;
- (id)ratingLabel;
- (BOOL)_isRatingSystemForMusic:(int)arg1;
- (id)ratingSystemLogo;
- (void)setShouldHideWhenRestricted:(BOOL)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingDescription:(id)arg1;
- (void)_setValueCopy:(id)arg1 forProperty:(id)arg2;
- (BOOL)_isRatingSystemForTV:(int)arg1;
- (BOOL)_isRatingSystemForMovies:(int)arg1;
- (BOOL)_isRatingSystemForApps:(int)arg1;
- (int)rank;
- (int)ratingSystem;
- (id)contentRatingDictionary;
- (BOOL)isExplicitContent;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setRank:(int)arg1;
- (id)init;
- (BOOL)isRestricted;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
