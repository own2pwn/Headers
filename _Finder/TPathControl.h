//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPathControl.h"

@interface TPathControl : NSPathControl
{
}

+ (Class)cellClass;
- (id)menuForEvent:(id)arg1;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
@property id <TPathControlDelegate> delegate; // @dynamic delegate;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;

@end
