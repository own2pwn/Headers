//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NCBannerModel.h"

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NCSummaryBannerModel : NCBannerModel
{
    NSString *_commonTitle;
    NSString *_cachedBody;
    NSMutableArray *_notifications;
    unsigned long long _anonymousNotifications;
}

+ (id)keyPathsForValuesAffectingSummarizedBody;
+ (id)keyPathsForValuesAffectingSummarizedTitle;
- (void).cxx_destruct;
- (void)addModel:(id)arg1;
- (void)_addNotificationWithoutDuplication:(id)arg1;
- (void)removeNotification:(id)arg1;
- (void)incrementNotificationCount:(unsigned long long)arg1;
- (void)addNotification:(id)arg1;
@property(readonly, nonatomic) NSArray *notifications;
- (id)summaryModel;
- (id)summarizedBody;
- (id)body;
- (id)summarizedSubtitle;
- (id)subtitle;
- (id)title;
- (id)note;
- (id)contentImage;
- (id)identityImage;
- (_Bool)isSummaryModel;
- (id)initForApp:(id)arg1 delegate:(id)arg2 notification:(id)arg3;

@end
