//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCPlaceholderAlert, NSObject<OS_xpc_object>;

@interface NCAlertProvider : NSObject
{
    NSObject<OS_xpc_object> *_peer;
    NCPlaceholderAlert *_placeholderAlert;
    id <NCAlertProviderDelegate> _delegate;
}

@property(readonly) NCPlaceholderAlert *placeholderAlert; // @synthesize placeholderAlert=_placeholderAlert;
@property(readonly) id <NCAlertProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeAlert;
- (void)_resizeEvent:(id)arg1;
- (void)_addEvent:(id)arg1;
- (void)_getInfo:(id)arg1;
- (void)_registerEventHandler:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)animationComplete;
- (void)dealloc;
- (id)initWihtPeer:(id)arg1 delegate:(id)arg2;

@end
