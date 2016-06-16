//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/GTMCalculatedRange.h>

#import "GTMShading.h"

@interface GTMLinearRGBShading : GTMCalculatedRange <GTMShading>
{
    struct CGFunction *function_;
    struct CGColorSpace *colorSpace_;
    BOOL isCalibrated_;
    double colorValue_[4];
}

+ (id)shadingWithColors:(id *)arg1 fromSpaceNamed:(id)arg2 atPositions:(double *)arg3 count:(unsigned long long)arg4;
+ (id)shadingFromColor:(id)arg1 toColor:(id)arg2 fromSpaceNamed:(id)arg3;
- (struct CGColorSpace *)colorSpace;
- (struct CGFunction *)shadeFunction;
- (id)valueAtPosition:(double)arg1;
- (void)insertStop:(id)arg1 atPosition:(double)arg2;
- (void)dealloc;
- (id)initWithColorSpaceName:(id)arg1;

@end
