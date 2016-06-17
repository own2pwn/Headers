//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCAppInfo, NCModel, NCNotificationCenter, NSArray, NSString, NSUserNotification;

@protocol NCNotificationCenterDelegate <NSObject>
- (void)notificationCenter:(NCNotificationCenter *)arg1 summaryNotificationChangedForApplication:(NCAppInfo *)arg2 forToday:(_Bool)arg3;
- (void)notificationCenter:(NCNotificationCenter *)arg1 progressChangedTo:(double)arg2 notificationWithIdentifier:(NSString *)arg3 forApplication:(NCAppInfo *)arg4;
- (void)notificationCenter:(NCNotificationCenter *)arg1 clearBannersForApplication:(NCAppInfo *)arg2;
- (void)notificationCenter:(NCNotificationCenter *)arg1 progressRemoved:(NCModel *)arg2;
- (void)notificationCenter:(NCNotificationCenter *)arg1 progressAdded:(NCModel *)arg2;
- (void)notificationCenter:(NCNotificationCenter *)arg1 alertChanged:(NSUserNotification *)arg2 forApplication:(NCAppInfo *)arg3;
- (void)notificationCenter:(NCNotificationCenter *)arg1 restoreSnoozedAlert:(NSUserNotification *)arg2 forApplication:(NCAppInfo *)arg3;
- (void)notificationCenter:(NCNotificationCenter *)arg1 removeDisplayedNotification:(NSUserNotification *)arg2 forApplication:(NCAppInfo *)arg3;
- (void)notificationCenter:(NCNotificationCenter *)arg1 restoreAlerts:(NSArray *)arg2 forApplication:(NCAppInfo *)arg3;
- (void)notificationCenter:(NCNotificationCenter *)arg1 present:(NSUserNotification *)arg2 forApplication:(NCAppInfo *)arg3 withUnpresentedCount:(unsigned long long)arg4;
- (void)notificationCenter:(NCNotificationCenter *)arg1 applicationRemoved:(NCAppInfo *)arg2;
- (void)notificationCenter:(NCNotificationCenter *)arg1 applicationUpdated:(NCAppInfo *)arg2;
- (void)notificationCenter:(NCNotificationCenter *)arg1 applicationOrderChanged:(NSArray *)arg2;
- (void)notificationCenter:(NCNotificationCenter *)arg1 hasUnreadNotifications:(_Bool)arg2;
- (void)notificationCenterDataReloaded:(NCNotificationCenter *)arg1;
- (void)notificationCenterConnectionError:(NCNotificationCenter *)arg1;
@end
