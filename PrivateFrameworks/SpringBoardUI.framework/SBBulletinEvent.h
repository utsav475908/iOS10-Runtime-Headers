/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface SBBulletinEvent : NSObject  {
    NSString *_bulletinID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

}

+ (id)eventForBulletin:(id)arg1 block:(id)arg2;

- (id)bulletinID;
- (id)initWithBulletin:(id)arg1 block:(id)arg2;
- (void)execute;
- (void)dealloc;

@end