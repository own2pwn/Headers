//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TNodeTaskDelegateProtocol.h"

@protocol TGroupAsFolderDelegate <TNodeTaskDelegateProtocol>

@optional
- (void)groupAsFolderUndoCompleted:(struct TNodeTask *)arg1 forGroupFolder:(const struct TFENode *)arg2 nodes:(const struct TFENodeVector *)arg3 status:(int)arg4;
- (void)groupAsFolderUndoStarted:(struct TNodeTask *)arg1 forFolder:(const struct TFENode *)arg2;
- (void)groupAsFolderCompleted:(struct TNodeTask *)arg1 withFolder:(const struct TFENode *)arg2 status:(int)arg3;
- (void)groupAsFolder:(struct TNodeTask *)arg1 createdGroupFolder:(const struct TFENode *)arg2;
- (void)groupAsFolderStarted;
@end
