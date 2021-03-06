//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TMidnightTimer : NSObject
{
    struct TNSRef<NSTimer *> _midnightTimer;
    struct TNSRef<NSDate *> _midnightFireDate;
    struct TNSRef<NSDateComponents *> _dateComponents;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)checkTimersAfterSleeping:(id)arg1;
- (void)_checkTimerAndFireDate;
- (void)_setUpMidnightTimer;
- (void)_midnightPassed;
- (void)_systemTimeChanged:(id)arg1;
- (void)postNotificationIfDayChanged;
- (void)aboutToTearDown;
- (id)init;

@end

