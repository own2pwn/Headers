//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitViewController.h"

@class NSSplitViewItem, NSView, TBrowserViewContainerController, TSidebarViewController, TSplitView;

@interface TSidebarSplitViewController : NSSplitViewController
{
    struct TNSRef<NSSplitViewItem *> _browserSplitViewItem;
    struct TNSRef<TBrowserViewContainerController *> _browserViewContainerController;
    _Bool _isExpandingOrCollapsingSidebar;
    struct TNSRef<NSSplitViewItem *> _sidebarSplitViewItem;
    struct TNSRef<TSidebarViewController *> _sidebarViewController;
    double _sidebarColumnWidthCache;
    _Bool _snapToOptimalSidebarWidth;
    double _minimumSidebarWidthCache;
    _Bool _bumpedIn;
    struct TNotificationCenterObserver _sidebarPreferredScrollerStyleObserver;
    _Bool _isSidebarCollapsed;
    _Bool _shouldPersistContainerSidebarWidth;
    _Bool _springLoaded;
    double _fakeToolbarHeight;
    double _topContentInset;
    double _bottomContentInset;
}

+ (id)keyPathsForValuesAffectingIsSidebarColumnCollapsed;
@property(nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(nonatomic) double fakeToolbarHeight; // @synthesize fakeToolbarHeight=_fakeToolbarHeight;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded; // @synthesize springLoaded=_springLoaded;
@property(nonatomic) _Bool shouldPersistContainerSidebarWidth; // @synthesize shouldPersistContainerSidebarWidth=_shouldPersistContainerSidebarWidth;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)adjustBrowserViewContentInsets;
- (void)adjustSidebarContentInsets;
- (void)adjustContentInsets;
- (struct CGImage *)newSidebarImageForFullScreenAnimationInitialCoverWindow:(struct CGRect *)arg1;
- (struct CGImage *)newSidebarImageForFullScreenAnimation:(struct CGRect *)arg1;
- (void)hideSidebarOverlayScrollers;
- (void)unlockOverlayScrollerState;
- (void)lockOverlayScrollersToHiddenState;
- (struct TFENode)selectedSidebarNode;
- (void)updateSidebarSelectionForTarget:(const struct TFENode *)arg1;
- (void)updateSidebarSelectionForCurrentTarget;
- (void)removeNodeFromSidebar:(const struct TFENode *)arg1;
- (void)startEditingNodeInSidebar:(const struct TFENode *)arg1;
- (void)saveSidebarColumnWidthToDisk:(double)arg1 didUserResizeSidebar:(_Bool)arg2;
- (void)setSidebarColumnWidthForScripting:(double)arg1;
- (struct CGSize)sidebarColumnOptimalSize;
- (double)sidebarColumnExpandedWidth;
- (double)sidebarColumnWidth;
- (struct CGRect)sidebarColumnFrameInWindow:(_Bool)arg1;
- (void)removeSidebarColumn;
- (void)addSidebarColumn:(id)arg1 initialWidth:(double)arg2;
- (void)setSidebarColumnCollapsed:(_Bool)arg1;
- (void)collapseSidebarColumn;
- (void)expandSidebarColumn;
@property(readonly, nonatomic) _Bool isSidebarColumnCollapsed; // @dynamic isSidebarColumnCollapsed;
@property(readonly) TSidebarViewController *sidebarViewController;
- (id)sidebarColumnView;
@property(readonly, nonatomic) NSSplitViewItem *sidebarSplitViewItem; // @dynamic sidebarSplitViewItem;
- (void)addBrowserColumn;
- (struct CGRect)browserColumnFrameInWindow;
@property(readonly) NSView *browserColumnView; // @dynamic browserColumnView;
@property(readonly) TBrowserViewContainerController *browserViewContainerController;
- (void)updateHoldingPriorities;
@property(retain) TSplitView *splitView; // @dynamic splitView;
- (void)aboutToTearDown;
- (void)viewDidLayout;
- (id)init;
- (id)initWithInitialSidebarWidth:(double)arg1 browserContainerController:(id)arg2;

@end
