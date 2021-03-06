/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPStateController : CDPController

- (void)finishOfflineLocalSecretChangeWithCompletion:(id /* block */)arg1;
- (void)getStingrayDisableEligibilityWithCompletion:(id /* block */)arg1;
- (void)getStringrayStatusWithCompletion:(id /* block */)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)handleURLActionWithInfo:(id)arg1;
- (void)handleURLActionWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)preflightStingrayDisableWithCompletion:(id /* block */)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(id /* block */)arg1;
- (void)setStingrayState:(bool)arg1 completion:(id /* block */)arg2;
- (bool)shouldPerformRepair:(id*)arg1;

@end
