/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification  {
    NSString *name;
    id object;
    NSDictionary *userInfo;
    BOOL dyingObject;
}

+ (id)newTempNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

- (id)object;
- (id)name;
- (id)userInfo;
- (void)dealloc;
- (void)recycle;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;

@end