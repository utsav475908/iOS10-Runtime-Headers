/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class <WebQuotaManager>, WebSecurityOriginPrivate;

@interface WebSecurityOrigin : NSObject  {
    WebSecurityOriginPrivate *_private;
    <WebQuotaManager> *_applicationCacheQuotaManager;
    <WebQuotaManager> *_databaseQuotaManager;
}


- (id)toString;
- (id)databaseIdentifier;
- (unsigned long long)quota;
- (unsigned long long)usage;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { int x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; unsigned short x7; boolx8; boolx9; boolx10; boolx11; int x12; boolx13; boolx14; }*)arg1;
- (struct SecurityOrigin { int x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_6_1_1; } x6; unsigned short x7; boolx8; boolx9; boolx10; boolx11; int x12; boolx13; boolx14; }*)_core;
- (unsigned short)port;
- (id)host;
- (id)initWithURL:(id)arg1;
- (id)stringValue;
- (BOOL)isEqual:(id)arg1;
- (id)domain;
- (void)finalize;
- (void)dealloc;
- (id)applicationCacheQuotaManager;
- (void)setQuota:(unsigned long long)arg1;
- (id)databaseQuotaManager;
- (id)protocol;

@end