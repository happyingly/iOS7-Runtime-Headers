/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, NSDictionary, AVOutputSettings;

@interface AVAssetWriterInputConfigurationState : NSObject  {
    NSString *_mediaType;
    AVOutputSettings *_outputSettings;
    struct opaqueCMFormatDescription { } *_sourceFormatHint;
    NSDictionary *_sourcePixelBufferAttributes;
    BOOL _attachedToPixelBufferAdaptor;
    NSArray *_metadataItems;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _transform;
    int _mediaTimeScale;
    BOOL _expectsMediaDataInRealTime;
    struct CGSize { 
        float width; 
        float height; 
    } _naturalSize;
    NSString *_languageCode;
    NSString *_extendedLanguageTag;
    BOOL _marksOutputTrackAsEnabled;
    BOOL _hasClientSpecifiedValueForPreferredVolume;
    float _preferredVolume;
    BOOL _hasClientSpecifiedValueForLayer;
    int _layer;
    short _alternateGroupID;
    NSDictionary *_trackReferences;
}

@property(copy) NSString * mediaType;
@property(copy) AVOutputSettings * outputSettings;
@property(retain) struct opaqueCMFormatDescription { }* sourceFormatHint;
@property(copy) NSDictionary * sourcePixelBufferAttributes;
@property BOOL attachedToPixelBufferAdaptor;
@property(copy) NSArray * metadataItems;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transform;
@property int mediaTimeScale;
@property BOOL expectsMediaDataInRealTime;
@property struct CGSize { float x1; float x2; } naturalSize;
@property(copy) NSString * languageCode;
@property(copy) NSString * extendedLanguageTag;
@property BOOL marksOutputTrackAsEnabled;
@property BOOL hasClientSpecifiedValueForPreferredVolume;
@property float preferredVolume;
@property BOOL hasClientSpecifiedValueForLayer;
@property int layer;
@property short alternateGroupID;
@property(copy) NSDictionary * trackReferences;


- (void)setTrackReferences:(id)arg1;
- (void)setAlternateGroupID:(short)arg1;
- (short)alternateGroupID;
- (void)setHasClientSpecifiedValueForLayer:(BOOL)arg1;
- (BOOL)hasClientSpecifiedValueForLayer;
- (void)setHasClientSpecifiedValueForPreferredVolume:(BOOL)arg1;
- (BOOL)hasClientSpecifiedValueForPreferredVolume;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (int)mediaTimeScale;
- (void)setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (BOOL)attachedToPixelBufferAdaptor;
- (void)setSourcePixelBufferAttributes:(id)arg1;
- (id)sourcePixelBufferAttributes;
- (void)setSourceFormatHint:(struct opaqueCMFormatDescription { }*)arg1;
- (BOOL)marksOutputTrackAsEnabled;
- (BOOL)expectsMediaDataInRealTime;
- (void)setMarksOutputTrackAsEnabled:(BOOL)arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (void)setMetadataItems:(id)arg1;
- (id)metadataItems;
- (void)setPreferredVolume:(float)arg1;
- (void)setExtendedLanguageTag:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)extendedLanguageTag;
- (void)setMediaType:(id)arg1;
- (id)trackReferences;
- (float)preferredVolume;
- (id)mediaType;
- (void)setLayer:(int)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (int)layer;
- (void)dealloc;
- (id)outputSettings;
- (void)setOutputSettings:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)languageCode;

@end
