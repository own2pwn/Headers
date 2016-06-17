//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NCMessageTracer : NSObject
{
    double _openTime;
    double _todayViewStartTime;
    double _notificationsViewStartTime;
    int _secondsInTodayView;
    int _secondsInNotificationView;
    _Bool _opened;
    unsigned long long _activeViewType;
}

+ (id)defaultMessageTracer;
@property(nonatomic) _Bool opened; // @synthesize opened=_opened;
@property(nonatomic) unsigned long long activeViewType; // @synthesize activeViewType=_activeViewType;
- (void)logActiveWidgets:(id)arg1;
- (void)notificationCenterSwitchedToView:(unsigned long long)arg1;
- (void)notificationCenterClosed;
- (void)notificationCenterOpened;
- (id)init;

@end
