//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BrowserWindowController;

@interface BrowserWindowFullscreenTransition : NSObject
{
    BOOL isEnteringFullscreen_;
    struct scoped_nsobject<FramedBrowserWindow> primaryWindow_;
    BrowserWindowController *controller_;
    struct scoped_nsobject<CALayer> snapshotLayer_;
    struct scoped_nsobject<NSWindow> snapshotWindow_;
    struct scoped_nsobject<NSView> tabStripBackgroundView_;
    struct scoped_nsobject<NSColor> primaryWindowInitialBackgroundColor_;
    BOOL primaryWindowInitialOpaque_;
    struct CGPoint initialRootAnchorPoint_;
    struct CGPoint initialContentViewOrigin_;
    BOOL changingPrimaryWindowSize_;
    struct CGRect initialFrame_;
    struct CGRect finalFrame_;
    struct scoped_nsobject<FullscreenTabStripBackgroundView> fullscreenTabStripBackgroundView_;
    struct unique_ptr<(anonymous namespace)::FrameAndStyleLock, std::__1::default_delete<(anonymous namespace)::FrameAndStyleLock>> lock_;
    BOOL completedTransition_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint)pointRelativeToCurrentScreen:(struct CGPoint)arg1;
- (id)rootLayerOfWindow:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)changePrimaryWindowToFinalFrame;
- (void)animatePrimaryWindowWithDuration:(double)arg1;
- (void)animateSnapshotWindowWithDuration:(double)arg1;
- (void)preparePrimaryWindowForAnimation;
- (void)makeAndPrepareSnapshotWindow;
- (void)takeSnapshot;
- (void)browserWillBeDestroyed;
- (struct CGSize)desiredWindowLayoutSize;
- (BOOL)shouldWindowBeUnconstrained;
- (void)startCustomFullScreenAnimationWithDuration:(double)arg1;
- (BOOL)isTransitionCompleted;
- (id)customWindowsForFullScreenTransition;
- (id)initExitWithController:(id)arg1;
- (id)initEnterWithController:(id)arg1;

@end
