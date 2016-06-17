//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NCRemoteViewHostViewController, NSData, NSDictionary;

@protocol NCRemoteViewHostViewControllerDelegate <NSObject>
- (void)remoteViewController:(NCRemoteViewHostViewController *)arg1 contentSizeChanged:(struct CGSize)arg2;
- (void)remoteViewController:(NCRemoteViewHostViewController *)arg1 liveStatusChanged:(_Bool)arg2;

@optional
- (void)remoteViewController:(NCRemoteViewHostViewController *)arg1 saveSnapshotData:(NSData *)arg2 withScale:(double)arg3;
- (void)remoteViewController:(NCRemoteViewHostViewController *)arg1 loadSnapshotAtScale:(double)arg2 data:(void (^)(NSData *))arg3;
- (BOOL)remoteViewControllerSupportsSnapshot:(NCRemoteViewHostViewController *)arg1;
- (void)remoteViewController:(NCRemoteViewHostViewController *)arg1 readyWithConfiguration:(NSDictionary *)arg2;
@end
