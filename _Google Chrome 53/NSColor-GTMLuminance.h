//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSColor.h"

@interface NSColor (GTMLuminance)
- (id)gtm_legibleTextColor;
- (BOOL)gtm_isDarkColor;
- (id)gtm_colorAdjustedFor:(unsigned long long)arg1 faded:(BOOL)arg2;
- (id)gtm_colorAdjustedFor:(unsigned long long)arg1;
- (id)gtm_colorByAdjustingLuminance:(double)arg1;
- (id)gtm_colorByAdjustingLuminance:(double)arg1 saturation:(double)arg2;
- (double)gtm_luminance;
- (id)labColor;
@end

