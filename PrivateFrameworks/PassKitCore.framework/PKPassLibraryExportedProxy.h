/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class <PKPassLibraryExportedInterface>;

@interface PKPassLibraryExportedProxy : NSObject <PKPassLibraryExportedInterface> {
    <PKPassLibraryExportedInterface> *_delegate;
}

@property <PKPassLibraryExportedInterface> * delegate;


- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
