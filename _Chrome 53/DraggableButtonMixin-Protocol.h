//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSEvent;

@protocol DraggableButtonMixin
- (void)beginDrag:(NSEvent *)arg1;

@optional
- (int)deltaIndicatesConclusionReachedWithXDelta:(float)arg1 yDelta:(float)arg2 xHysteresis:(float)arg3 yHysteresis:(float)arg4 indicates:(char *)arg5;
- (int)deltaIndicatesDragStartWithXDelta:(float)arg1 yDelta:(float)arg2 xHysteresis:(float)arg3 yHysteresis:(float)arg4 indicates:(char *)arg5;
- (int)endDrag;
- (int)secondaryMouseUpAction:(BOOL)arg1;
- (int)performMouseDownAction:(NSEvent *)arg1;
@end
