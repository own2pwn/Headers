//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, NSView;

@protocol URLDropTargetController
- (void)hideDropURLsIndicatorInView:(NSView *)arg1;
- (void)indicateDropURLsInView:(NSView *)arg1 at:(struct CGPoint)arg2;
- (void)dropText:(NSString *)arg1 inView:(NSView *)arg2 at:(struct CGPoint)arg3;
- (void)dropURLs:(NSArray *)arg1 inView:(NSView *)arg2 at:(struct CGPoint)arg3;
- (BOOL)isUnsupportedDropData:(id <NSDraggingInfo>)arg1;
@end

