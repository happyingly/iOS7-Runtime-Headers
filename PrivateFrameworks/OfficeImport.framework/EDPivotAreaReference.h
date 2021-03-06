/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotAreaReference : NSObject  {
    boolmByPosition;
    boolmRelative;
    boolmSelected;
    unsigned long mFieldId;
    unsigned long mCount;
}

+ (id)pivotAreaReference;

- (bool)relative;
- (void)setByPosition:(bool)arg1;
- (bool)byPosition;
- (void)setFieldId:(unsigned long)arg1;
- (void)setRelative:(bool)arg1;
- (unsigned long)fieldId;
- (id)init;
- (unsigned long)count;
- (bool)selected;
- (void)setSelected:(bool)arg1;
- (void)setCount:(unsigned long)arg1;

@end
