/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying> {
    NSString *_personID;
    NSString *_token;
}

@property(readonly) BOOL hasToken;
@property(retain) NSString * token;
@property(readonly) BOOL hasPersonID;
@property(retain) NSString * personID;


- (id)personID;
- (BOOL)hasPersonID;
- (BOOL)hasToken;
- (void)setPersonID:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)token;
- (void)setToken:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
