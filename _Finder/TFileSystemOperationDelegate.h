//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TFileSystemOperationDelegateProtocol.h"

@class NSString;

@interface TFileSystemOperationDelegate : NSObject <TFileSystemOperationDelegateProtocol>
{
}

+ (id)newDelegate;
- (int)asyncNodeOperation:(id)arg1 completedNotification:(const struct OperationMonitor *)arg2;
- (int)asyncNodeOperation:(id)arg1 errorNotification:(const struct OperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
