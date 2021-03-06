//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationWindow;

@interface NCBannerAnimation : NSObject
{
    _Bool _invalid;
    _Bool _delayCompletion;
    int _type;
    int _transitionType;
    id <NCBannerAnimationDelegate> _delegate;
    NCNotificationWindow *_window;
    double _duration;
    CDUnknownBlockType _animate_to_block;
    CDUnknownBlockType _completed_block;
    id _completionToken;
}

+ (void)setAnimationsDisabled:(BOOL)arg1;
+ (BOOL)animationsDisabled;
+ (void)runAnimations:(id)arg1 containerView:(id)arg2 withDuration:(double)arg3 animation:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
+ (double)defaultDuration;
+ (id)genericAnimationWithWindow:(id)arg1 delegate:(id)arg2;
+ (id)animationOutWithWindow:(id)arg1 delegate:(id)arg2 animation:(int)arg3;
+ (id)animationInWithWindow:(id)arg1 delegate:(id)arg2 animation:(int)arg3;
@property(readonly) _Bool delayCompletion; // @synthesize delayCompletion=_delayCompletion;
@property(readonly) _Bool invalid; // @synthesize invalid=_invalid;
@property(retain) id completionToken; // @synthesize completionToken=_completionToken;
@property(copy) CDUnknownBlockType completed_block; // @synthesize completed_block=_completed_block;
@property(copy) CDUnknownBlockType animate_to_block; // @synthesize animate_to_block=_animate_to_block;
@property(readonly) int transitionType; // @synthesize transitionType=_transitionType;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) int type; // @synthesize type=_type;
@property(readonly) __weak NCNotificationWindow *window; // @synthesize window=_window;
@property __weak id <NCBannerAnimationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)completed;
- (void)start;
- (void)setup;
- (void)invalidate;
- (id)initWithWindow:(id)arg1 type:(int)arg2 delegate:(id)arg3 duration:(double)arg4 transitionType:(int)arg5;

@end

