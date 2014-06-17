/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

@class NSArray, NSMutableArray;

@interface MCDetailsCell : UITableViewCell  {
    NSArray *_details;
    NSMutableArray *_labels;
}

@property(retain) NSArray * details;
@property(retain) NSMutableArray * labels;


- (void)_setupGroupViewInnerConstraints:(id)arg1;
- (void)_setupConstraints:(id)arg1;
- (void)_createViewWithDetails:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setDetails:(id)arg1;
- (id)details;
- (id)labels;
- (void).cxx_destruct;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end