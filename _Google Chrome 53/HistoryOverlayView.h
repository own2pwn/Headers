//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface HistoryOverlayView : NSView
{
    int mode_;
    double shieldAlpha_;
    struct scoped_nsobject<CAShapeLayer> shapeLayer_;
}

@property(nonatomic) double shieldAlpha; // @synthesize shieldAlpha=shieldAlpha_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)initWithMode:(int)arg1 image:(id)arg2;

@end

