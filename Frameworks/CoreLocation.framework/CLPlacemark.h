/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, NSArray, CLPlacemarkInternal, CLRegion, NSDictionary, NSString;

@interface CLPlacemark : NSObject <NSCopying, NSSecureCoding> {
    CLPlacemarkInternal *_internal;
}

@property(readonly) CLLocation * location;
@property(readonly) CLRegion * region;
@property(readonly) NSDictionary * addressDictionary;
@property(readonly) NSString * name;
@property(readonly) NSString * thoroughfare;
@property(readonly) NSString * subThoroughfare;
@property(readonly) NSString * locality;
@property(readonly) NSString * subLocality;
@property(readonly) NSString * administrativeArea;
@property(readonly) NSString * subAdministrativeArea;
@property(readonly) NSString * postalCode;
@property(readonly) NSString * ISOcountryCode;
@property(readonly) NSString * country;
@property(readonly) NSString * inlandWater;
@property(readonly) NSString * ocean;
@property(readonly) NSArray * areasOfInterest;

+ (id)placemarkWithPlace:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)postalCode;
- (id)region;
- (id)addressDictionary;
- (id)inlandWater;
- (id)ocean;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)fullThoroughfare;
- (id)subLocality;
- (id)locality;
- (id)subAdministrativeArea;
- (id)administrativeArea;
- (id)formattedAddressLines;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)areasOfInterest;
- (id)location;
- (id)country;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
