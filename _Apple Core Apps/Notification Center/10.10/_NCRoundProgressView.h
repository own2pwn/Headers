//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSObject<OS_dispatch_source>;

@interface _NCRoundProgressView : NSView
{
    double _progressTime;
    double _progressStart;
    double _progressEnd;
    double _progressCurrent;
    NSObject<OS_dispatch_source> *_animation_timer;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end
