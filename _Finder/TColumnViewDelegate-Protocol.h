//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBrowserDelegate.h"

@class TColumnView;

@protocol TColumnViewDelegate <NSBrowserDelegate>
- (void)columnView:(TColumnView *)arg1 willStopUsingNode:(const struct TFENode *)arg2 forColumn:(long long)arg3;
- (void)columnView:(TColumnView *)arg1 willStartUsingNode:(const struct TFENode *)arg2 forColumn:(long long)arg3;
@end
