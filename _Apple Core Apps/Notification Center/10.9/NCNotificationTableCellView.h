//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCTableCellView.h"

#import "NCNotificationTableCellHeight.h"

@class CALayer, NCListViewController, NSLayoutConstraint;

@interface NCNotificationTableCellView : NCTableCellView <NCNotificationTableCellHeight>
{
    NCListViewController *_listViewController;
    NSLayoutConstraint *_widthConstraint;
    CALayer *_dividerLine;
    BOOL _setup;
    BOOL _forProgress;
    float _height;
}

@property(readonly) BOOL forProgress; // @synthesize forProgress=_forProgress;
- (void).cxx_destruct;
- (void)updateDate;
@property(readonly) float height; // @synthesize height=_height;
- (void)setObjectValue:(id)arg1;
- (void)_tableWidthChanged:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (BOOL)wantsUpdateLayer;
- (void)_commonSetup;
- (void)setupForNotifications;
- (void)setupForProgress;
- (void)dealloc;

@end

