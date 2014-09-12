/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SACalendarSource, NSString;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(retain) SACalendarSource * aceCalendarSource;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1;
+ (id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)defaultSourceGetCompleted;

- (id)aceCalendarSource;
- (void)setAceCalendarSource:(id)arg1;
- (id)initWithAceCalendarSource:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

@end