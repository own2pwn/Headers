//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TCoalescingNodeObserverProtocol.h"

@class NSString;

@interface TMeetingRoomProgressControllerRegistry : NSObject <TCoalescingNodeObserverProtocol>
{
    struct TNSRef<NSMutableArray *> _controllers;
    struct TCoalescingNodeObserverCocoaBridge *_nodeObserver;
    _Bool _isUserInAirDrop;
    struct TNotificationCenterObserver _userEnteredOrExitedAirDropObserver;
    struct TNotificationCenterObserver _airDropAvailableStateChangedObserver;
}

+ (unsigned long long)count;
+ (void)removeAllControllers;
+ (void)removeController:(id)arg1;
+ (_Bool)isPopoverShown;
+ (id)findControllerForNode:(const struct TFENode *)arg1;
+ (id)controllerForNode:(const struct TFENode *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findControllerForNodeLocked:(const struct TFENode *)arg1;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesAdded:(const struct TFENodeVector *)arg2 toObservedNode:(const struct TFENode *)arg3;
- (void)airDropAvailabilityChanged:(id)arg1;
- (void)userEnteredOrExitedMeetingRoom:(id)arg1;
- (void)setIsUserInAirDrop:(_Bool)arg1;
- (void)updateControllers;
- (void)callUpdateControllersAfterDelay;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
