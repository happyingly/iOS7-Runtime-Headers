/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSUsageBundleApp, NSString;

@interface PSUsageBundleCategory : NSObject  {
    PSUsageBundleApp *_usageBundleApp;
    NSString *_identifier;
    NSString *_name;
}

@property PSUsageBundleApp * usageBundleApp;
@property(retain) NSString * identifier;
@property(retain) NSString * name;

+ (id)categoryNamed:(id)arg1 withIdentifier:(id)arg2 forUsageBundleApp:(id)arg3;

- (void)setUsageBundleApp:(id)arg1;
- (id)usageBundleApp;
- (id)name;
- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setName:(id)arg1;

@end
