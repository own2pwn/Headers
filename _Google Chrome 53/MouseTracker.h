//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

@interface MouseTracker : NSObject
{
    struct ScopedCrTrackingArea trackingArea_;
    NSView *nsView_;
    Callback_036fa0f5 mouseInteractionObserver_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)registerMouseInteractionObserver:(const Callback_036fa0f5 *)arg1;
- (void)stopTracking;
- (id)initWithView:(id)arg1;

@end

