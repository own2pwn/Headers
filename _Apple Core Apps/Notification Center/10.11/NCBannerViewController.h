//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCBaseBannerViewController.h"

@class NCBannerView, NCRelativeDateTransformer, NSDate, NSLayoutConstraint, NSObject<OS_dispatch_source>, NSString, NSTextField, NSView;

@interface NCBannerViewController : NCBaseBannerViewController
{
    NSString *_header;
    NSString *_subtitle;
    NSString *_body;
    double _originalBodyHeight;
    double _originalBodyWidth;
    double _originalMutliWidth;
    double _originalStatusWidth;
    double _originalSubtitleTopHeight;
    double _originalTitleToBody;
    double _bodyMarginWidth;
    NSDate *_subtitleLiveDate;
    NCRelativeDateTransformer *_dateTransformer;
    NSObject<OS_dispatch_source> *_date_update_source;
    NSLayoutConstraint *_subTitleTopConstraint;
    NSLayoutConstraint *_bodyHeightConstraint;
    NSLayoutConstraint *_titleToBodyConstraint;
    NSLayoutConstraint *_bodyLeftConstraint;
    NSLayoutConstraint *_bodyRightConstraint;
    NSLayoutConstraint *_topImageConstraint;
    NSLayoutConstraint *_debugConstraint;
    NSTextField *_subtitleTF;
    NSTextField *_bodyTF;
    NSView *_contentView;
    NSView *_alertView;
    NSView *_extensionView;
}

@property(retain, nonatomic) NSView *extensionView; // @synthesize extensionView=_extensionView;
@property(retain, nonatomic) NSView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) NSTextField *bodyTF; // @synthesize bodyTF=_bodyTF;
@property(nonatomic) NSTextField *subtitleTF; // @synthesize subtitleTF=_subtitleTF;
@property(nonatomic) NSLayoutConstraint *debugConstraint; // @synthesize debugConstraint=_debugConstraint;
@property(nonatomic) NSLayoutConstraint *topImageConstraint; // @synthesize topImageConstraint=_topImageConstraint;
@property(nonatomic) NSLayoutConstraint *bodyRightConstraint; // @synthesize bodyRightConstraint=_bodyRightConstraint;
@property(nonatomic) NSLayoutConstraint *bodyLeftConstraint; // @synthesize bodyLeftConstraint=_bodyLeftConstraint;
@property(nonatomic) NSLayoutConstraint *titleToBodyConstraint; // @synthesize titleToBodyConstraint=_titleToBodyConstraint;
@property(nonatomic) NSLayoutConstraint *bodyHeightConstraint; // @synthesize bodyHeightConstraint=_bodyHeightConstraint;
@property(nonatomic) NSLayoutConstraint *subTitleTopConstraint; // @synthesize subTitleTopConstraint=_subTitleTopConstraint;
- (void).cxx_destruct;
- (void)_scheduleDateUpdate;
- (void)_performDateUpdate;
- (void)invalidateDateTimer;
- (_Bool)updateLiveDate;
- (void)addTalkingAlertProperties:(id)arg1;
- (BOOL)updateBodyWidthConstraint;
- (void)updateConstraints;
- (void)updateViewsFromModel;
- (void)setLockscreenMode:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) NCBannerView *bannerView;
- (id)nibName;
- (void)dealloc;
- (id)init;

@end
