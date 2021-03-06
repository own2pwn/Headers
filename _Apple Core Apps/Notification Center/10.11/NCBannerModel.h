//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCAppInfo, NCNotificationWindow, NCRemoteAlertModel, NCRemoteNotificationPlugIn, NSImage, NSString, NSUserNotification;

@interface NCBannerModel : NSObject
{
    NCNotificationWindow *_bannerWindow;
    unsigned long long _uniqueCreationNumber;
    _Bool _displayedFirstAtLockscreen;
    _Bool _pendingInitialDisplay;
    _Bool _registeredTalkingAlerts;
    Class _windowClass;
    NSString *_remotePlugInIdentifier;
    NCRemoteNotificationPlugIn *_remotePlugIn;
    id <NCBannerDelegate> _delegate;
    NCAppInfo *_app;
    NSUserNotification *_note;
    unsigned long long _behavior;
    double _displayTime;
    double _dismissTime;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool registeredTalkingAlerts; // @synthesize registeredTalkingAlerts=_registeredTalkingAlerts;
@property(nonatomic) _Bool pendingInitialDisplay; // @synthesize pendingInitialDisplay=_pendingInitialDisplay;
@property(nonatomic) _Bool displayedFirstAtLockscreen; // @synthesize displayedFirstAtLockscreen=_displayedFirstAtLockscreen;
@property(nonatomic) double dismissTime; // @synthesize dismissTime=_dismissTime;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
@property(retain, nonatomic) NSUserNotification *note; // @synthesize note=_note;
@property(retain, nonatomic) NCAppInfo *app; // @synthesize app=_app;
@property(nonatomic) __weak id <NCBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NCRemoteNotificationPlugIn *remotePlugIn; // @synthesize remotePlugIn=_remotePlugIn;
@property(copy, nonatomic) NSString *remotePlugInIdentifier; // @synthesize remotePlugInIdentifier=_remotePlugInIdentifier;
@property(readonly, nonatomic) Class windowClass; // @synthesize windowClass=_windowClass;
- (void).cxx_destruct;
- (void)swapWindowWith:(id)arg1;
@property(readonly, nonatomic) NCNotificationWindow *bannerWindow;
@property(readonly, nonatomic) NCNotificationWindow *bannerWindowCreateIfNecessary;
- (void)clearBannerWindow;
- (long long)compareForDisplay:(id)arg1;
- (id)summaryModel;
@property(readonly, nonatomic) NSString *summarizedBody;
@property(readonly, nonatomic) NSString *body;
@property(readonly, nonatomic) NSString *summarizedSubtitle;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *summarizedTitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSImage *contentImage;
@property(readonly, nonatomic) NSImage *identityImage;
@property(readonly, nonatomic) NCRemoteAlertModel *remoteAlert;
@property(readonly, nonatomic) _Bool isRemoteAlert;
@property(readonly, nonatomic) _Bool isProxyAlert;
@property(readonly, nonatomic) _Bool canInteractAtLockscreen;
@property(readonly, nonatomic) _Bool canColeasce;
@property(readonly, nonatomic) _Bool hasAlertBehavior;
@property(readonly, nonatomic) _Bool isSummaryModel;
@property(readonly, nonatomic) unsigned long long sortBehavior;
@property(readonly, nonatomic) unsigned long long defaultBehavior;
- (id)description;
- (id)initForApp:(id)arg1 delegate:(id)arg2 notification:(id)arg3;

@end

