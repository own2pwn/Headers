//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NCBannerModel.h"

@class NCPlaceholderAlert, NSObject;
@protocol NCAlertProviderDelegate, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NCAlertProvider : NCBannerModel
{
    NSObject<OS_xpc_object> *_peer;
    NCPlaceholderAlert *_placeholderAlert;
    id <NCAlertProviderDelegate> _alertDelegate;
}

@property(readonly, nonatomic) NCPlaceholderAlert *placeholderAlert; // @synthesize placeholderAlert=_placeholderAlert;
@property(nonatomic) __weak id <NCAlertProviderDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
- (void).cxx_destruct;
- (void)removeAlert;
- (void)_resizeEvent:(id)arg1;
- (void)_addEvent:(id)arg1;
- (void)_getInfo:(id)arg1;
- (void)_registerEventHandler:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)_windowLevelChanged:(id)arg1;
- (void)animationComplete;
- (id)bannerWindowCreateIfNecessary;
- (id)bannerWindow;
- (unsigned long long)sortBehavior;
- (unsigned long long)defaultBehavior;
- (_Bool)isProxyAlert;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 delegate:(id)arg2 bannerDelegate:(id)arg3;

@end

