//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCTodayItemViewController;

@protocol NCTodayItemViewControllerDelegate <NSObject>
- (void)todayItemViewControllerAccessibilityPressedEdit:(NCTodayItemViewController *)arg1;
- (void)todayItemViewControllerIsNotLive:(NCTodayItemViewController *)arg1;
- (void)todayItemViewControllerIsLive:(NCTodayItemViewController *)arg1;
- (void)todayItemViewController:(NCTodayItemViewController *)arg1 sizeChangedForceUpdate:(_Bool)arg2;
- (void)todayItemViewController:(NCTodayItemViewController *)arg1 hasContentChanged:(_Bool)arg2;
- (void)todayItemViewController:(NCTodayItemViewController *)arg1 widgetModeChanged:(long long)arg2;
@end

