//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCRoundedWindowContentDelegate.h"
#import "NSCopying.h"

@class NCBannerAnimation, NCBannerModel, NCRoundedWindowContentView, NSArray, NSLayoutConstraint, NSMutableSet, NSString, NSView;

@interface NCNotificationWindow : NSObject <NCRoundedWindowContentDelegate, NSCopying>
{
    NSArray *_topLevelNibObjects;
    NSMutableSet *_constraints;
    NSLayoutConstraint *_horizontalLayoutConstraint;
    BOOL applicationUpdated;
    BOOL _closing;
    BOOL _needsLayout;
    char *_swipeAnimationCanceled;
    BOOL _trackingSwipes;
    BOOL _displayClippedContent;
    _Bool _lockscreenMode;
    BOOL _animating;
    BOOL _hiddenDueToOverflow;
    NSView *_view;
    NCRoundedWindowContentView *_backgroundView;
    NSLayoutConstraint *_heightMaxConstraint;
    id <NCNotificationWindowDelegate> _delegate;
    NCBannerModel *_model;
    unsigned long long _behavior;
    NSLayoutConstraint *_verticalLayoutConstraint;
    NCBannerAnimation *_activeAnimation;
    NCBannerAnimation *_pendingAnimation;
}

+ (unsigned long long)notificationWidth;
+ (void)setFinalAlphaValue:(double)arg1;
+ (double)finalAlphaValue;
@property(nonatomic) __weak NCBannerAnimation *pendingAnimation; // @synthesize pendingAnimation=_pendingAnimation;
@property(nonatomic) __weak NCBannerAnimation *activeAnimation; // @synthesize activeAnimation=_activeAnimation;
@property(retain, nonatomic) NSLayoutConstraint *verticalLayoutConstraint; // @synthesize verticalLayoutConstraint=_verticalLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *horizontalLayoutConstraint; // @synthesize horizontalLayoutConstraint=_horizontalLayoutConstraint;
@property(readonly, nonatomic) NSMutableSet *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(nonatomic) BOOL hiddenDueToOverflow; // @synthesize hiddenDueToOverflow=_hiddenDueToOverflow;
@property(readonly, nonatomic) NCBannerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <NCNotificationWindowDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool lockscreenMode; // @synthesize lockscreenMode=_lockscreenMode;
@property(nonatomic) BOOL displayClippedContent; // @synthesize displayClippedContent=_displayClippedContent;
@property(retain, nonatomic) NSLayoutConstraint *heightMaxConstraint; // @synthesize heightMaxConstraint=_heightMaxConstraint;
@property(retain, nonatomic) NCRoundedWindowContentView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NSView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)contentView:(id)arg1 velocity:(double)arg2 draggedCompleted:(BOOL)arg3;
- (void)contentView:(id)arg1 dragged:(id)arg2;
- (BOOL)contentView:(id)arg1 dragStarted:(id)arg2;
- (BOOL)contentView:(id)arg1 scrolled:(id)arg2;
- (void)checkForAutoDismissWithMouseLocation:(struct CGPoint)arg1;
- (void)updateContentModel:(id)arg1;
- (void)modelDidUpdate;
- (void)cancelTalkingAlert;
- (void)registerTalkingAlertIfNecessary;
- (void)windowAnimateOutComplete;
- (void)windowAnimateOutStart;
- (void)windowAnimateInComplete;
- (void)dumpLayerTree;
- (void)removeFromView;
@property(readonly, nonatomic) double finalWindowAlpha;
- (BOOL)loadView;
- (void)internalLayout;
@property(readonly, nonatomic) NSView *firstKeyView;
@property(readonly, nonatomic) _Bool canBecomeKey;
@property(readonly, nonatomic) _Bool showingExtension;
@property(readonly, nonatomic) NSString *accessibilitySubroleForBanner;
@property(readonly, nonatomic) BOOL onScreen;
- (unsigned long long)behaviorType;
@property(readonly, nonatomic) NSString *nibName;
@property(readonly, nonatomic) BOOL contentsClipped;
@property(readonly, nonatomic) BOOL hasContentView;
- (BOOL)loadsViewFromNib;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithModel:(id)arg1 withBehavior:(unsigned long long)arg2 lockscreenMode:(_Bool)arg3;
- (id)init;
- (unsigned long long)minNotificationHeight;
- (unsigned long long)maxNotificationHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
