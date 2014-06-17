/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSThread, NSError, NSString;

@interface CPLEngineStoreTransaction : NSObject  {
    NSThread *_currentThread;
    bool_forWrite;
    NSError *_error;
    NSString *_name;
}

@property(copy) NSError * error;
@property(copy) NSString * name;


- (bool)canRead;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)arg1;
- (bool)do:(id)arg1;
- (id)initForWrite:(bool)arg1;
- (bool)_forWrite;
- (id)name;
- (void)setName:(id)arg1;
- (bool)canWrite;
- (void)setError:(id)arg1;
- (id)error;
- (void).cxx_destruct;
- (id)description;

@end