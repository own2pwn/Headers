//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBezierPath.h"

@interface NSBezierPath (GTMBezierPathShadingAdditions)
- (void)gtm_fillRadiallyFrom:(struct CGPoint)arg1 fromRadius:(double)arg2 to:(struct CGPoint)arg3 toRadius:(double)arg4 extendingStart:(BOOL)arg5 extendingEnd:(BOOL)arg6 shading:(id)arg7;
- (void)gtm_fillAxiallyFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 extendingStart:(BOOL)arg3 extendingEnd:(BOOL)arg4 shading:(id)arg5;
- (void)gtm_strokeRadiallyFrom:(struct CGPoint)arg1 fromRadius:(double)arg2 to:(struct CGPoint)arg3 toRadius:(double)arg4 extendingStart:(BOOL)arg5 extendingEnd:(BOOL)arg6 shading:(id)arg7;
- (void)gtm_strokeAxiallyFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 extendingStart:(BOOL)arg3 extendingEnd:(BOOL)arg4 shading:(id)arg5;
@end
