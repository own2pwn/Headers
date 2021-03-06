//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/BaseView.h>

@class NSView;

@interface DevToolsContainerView : BaseView
{
    struct DevToolsContentsResizingStrategy strategy_;
    NSView *devToolsView_;
    NSView *contentsView_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustSubviews;
- (BOOL)hasDevToolsView;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)setDevToolsView:(id)arg1 withStrategy:(const struct DevToolsContentsResizingStrategy *)arg2;

@end

