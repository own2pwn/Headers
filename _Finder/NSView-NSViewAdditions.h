//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (NSViewAdditions)
- (void)dragWithPasteboard:(id)arg1 event:(id)arg2 initialTargetContainer:(const struct TFENode *)arg3 nodes:(const struct TFENodeVector *)arg4 itemBoundsMap:(const map_7cee3aba *)arg5 image:(id)arg6 offset:(const struct CGSize *)arg7 source:(id)arg8;
- (void)setFrameHeight:(double)arg1;
- (double)frameHeight;
- (void)setFrameWidth:(double)arg1;
- (double)frameWidth;
- (void)flipAutoresizingMask;
- (struct CGPoint)flipPoint:(const struct CGPoint *)arg1;
- (void)flipFrameOrigin;
- (void)flipSubviews;
- (struct CGPoint)convertPointFromScreen:(const struct CGPoint *)arg1 flipped:(_Bool)arg2;
- (struct CGPoint)convertPointToScreen:(const struct CGPoint *)arg1 flipped:(_Bool)arg2;
- (struct CGRect)convertRectFromScreenFE:(const struct CGRect *)arg1 flipped:(_Bool)arg2;
- (struct CGRect)convertRectToScreenFE:(const struct CGRect *)arg1 flipped:(_Bool)arg2;
- (struct CGSize)convertSizeFromScreen:(const struct CGSize *)arg1;
- (struct CGSize)convertSizeToScreen:(const struct CGSize *)arg1;
- (struct CGPoint)convertPointFromScreen:(const struct CGPoint *)arg1;
- (struct CGPoint)convertPointToScreen:(const struct CGPoint *)arg1;
- (struct CGRect)convertRectFromScreenFE:(const struct CGRect *)arg1;
- (struct CGRect)convertRectToScreenFE:(const struct CGRect *)arg1;
@end

