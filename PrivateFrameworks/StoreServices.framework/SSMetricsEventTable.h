/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSQLiteDatabase;

@interface SSMetricsEventTable : NSObject  {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (void)performTransctionWithBlock:(id)arg1;
- (BOOL)_setupDatabase;
- (id)initWithDatabase:(id)arg1;
- (id)init;
- (void)dealloc;

@end
