//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitViewController.h"

@class TSplitView;

@interface TFlowSplitViewController : NSSplitViewController
{
    struct TNSRef<NSSplitViewItem *> _flowSplitViewItem;
    struct TNSRef<NSSplitViewItem *> _listSplitViewItem;
    double _flowViewSectionHeightCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)saveFlowViewSectionHeightToDisk:(double)arg1;
- (double)minimumHeight;
@property(retain) TSplitView *splitView;
- (id)initWithFlowView:(id)arg1 listViewScrollView:(id)arg2;
- (id)init;

@end
