//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TScrollView.h"

@interface TIconViewScrollView : TScrollView
{
    double _verticalScrollerGap;
    long long _scrollerStyleOverride;
}

- (void)scrollClipView:(id)arg1 toPoint:(struct CGPoint)arg2;
- (void)setScrollerStyle:(long long)arg1;
- (void)setScrollerStyleOverride:(long long)arg1;
- (void)tile;
- (_Bool)setVerticalScrollerGap:(double)arg1;
- (void)initCommon;

@end
