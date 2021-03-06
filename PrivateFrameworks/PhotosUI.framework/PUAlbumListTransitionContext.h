/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class NSIndexPath, <PLAssetContainer>, UICollectionViewTransitionLayout, PUPhotoDecoration;

@interface PUAlbumListTransitionContext : NSObject  {
    BOOL _usesContentOffsetAutoAdjust;
    <PLAssetContainer> *_collection;
    NSIndexPath *_keyItemIndexPath;
    PUPhotoDecoration *_photoDecoration;
    UICollectionViewTransitionLayout *_transitionLayout;
}

@property(retain) <PLAssetContainer> * collection;
@property(retain) NSIndexPath * keyItemIndexPath;
@property(retain) PUPhotoDecoration * photoDecoration;
@property BOOL usesContentOffsetAutoAdjust;
@property(retain) UICollectionViewTransitionLayout * transitionLayout;


- (void)setKeyItemIndexPath:(id)arg1;
- (void)setTransitionLayout:(id)arg1;
- (void)setUsesContentOffsetAutoAdjust:(BOOL)arg1;
- (id)photoDecoration;
- (BOOL)usesContentOffsetAutoAdjust;
- (id)keyItemIndexPath;
- (void)setPhotoDecoration:(id)arg1;
- (id)transitionLayout;
- (void)setCollection:(id)arg1;
- (void).cxx_destruct;
- (id)collection;

@end
