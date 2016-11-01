/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroActivityViewController : PHActivityViewController <MiroActivityItemProviderDelegate> {
    unsigned long long  _backgroundTask;
}

@property (nonatomic) unsigned long long backgroundTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)backgroundTask;
- (void)cancel;
- (void)dismissProgressController;
- (void)exportFailed;
- (void)exportWillBegin;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 barButtonItem:(id)arg3 parentViewController:(id)arg4;
- (void)presentProgressController:(id)arg1;
- (void)setBackgroundTask:(unsigned long long)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;

@end