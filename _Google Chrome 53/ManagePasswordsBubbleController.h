//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/BaseBubbleController.h>

#import "BasePasswordsContentViewDelegate.h"

@class NSString, NSViewController;

@interface ManagePasswordsBubbleController : BaseBubbleController <BasePasswordsContentViewDelegate>
{
    struct ManagePasswordsBubbleModel *model_;
    struct scoped_nsobject<BasePasswordsContentViewController> currentController_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct ManagePasswordsBubbleModel *model;
- (void)viewShouldDismiss;
- (void)performLayout;
- (void)updateState;
- (void)close;
- (void)showWindow:(id)arg1;
- (void)dealloc;
- (id)initWithParentWindow:(id)arg1 model:(struct ManagePasswordsBubbleModel *)arg2;
@property(readonly) NSViewController *currentController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

