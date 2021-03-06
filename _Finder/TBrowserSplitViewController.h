//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSplitViewController.h"

@class NSSplitViewItem, NSView, TBrowserViewController, TSplitView, TUpdateLayerView;

@interface TBrowserSplitViewController : NSSplitViewController
{
    struct TNSRef<NSSplitViewItem *> _browserSplitViewItem;
    struct TNSRef<NSView *> _browserView;
    struct TNSRef<TBrowserViewController *> _browserViewController;
    struct TNSRef<NSLayoutConstraint *> _browserViewBottomConstraint;
    struct TNSRef<TAirDropInfoViewController *> _airDropInfoViewController;
    struct TNSRef<NSLayoutConstraint *> _airDropInfoViewBottomConstraint;
    struct TNSRef<NSSplitViewItem *> _tagsSplitViewItem;
    struct TNSRef<TTagColumnTableViewController *> _tagColumnTableViewController;
    double _tagsColumnWidthCache;
    struct TNSRef<NSSplitViewItem *> _previewSplitViewItem;
    struct TNSRef<TColumnPreviewController *> _previewPaneController;
    double _previewColumnWidthCache;
    double _fakeToolbarHeight;
    double _topContentInset;
    double _bottomContentInset;
}

+ (id)keyPathsForValuesAffectingIsPreviewColumnCollapsed;
+ (id)keyPathsForValuesAffectingIsTagsColumnCollapsed;
@property(nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property(nonatomic) double topContentInset; // @synthesize topContentInset=_topContentInset;
@property(nonatomic) double fakeToolbarHeight; // @synthesize fakeToolbarHeight=_fakeToolbarHeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)savePreviewColumnWidthToDisk:(double)arg1;
- (void)setPreviewColumnTarget:(const struct TFENode *)arg1;
- (struct TFENode)previewColumnTarget;
- (void)removePreviewColumn;
- (void)addPreviewColumn;
- (void)setPreviewColumnCollapsed:(_Bool)arg1 target:(const struct TFENode *)arg2 animated:(_Bool)arg3;
- (void)collapsePreviewColumn:(_Bool)arg1;
- (void)expandPreviewColumn:(const struct TFENode *)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isPreviewColumnCollapsed; // @dynamic isPreviewColumnCollapsed;
- (struct CGRect)previewColumnFrameInWindow;
- (id)previewColumnView;
@property(readonly, nonatomic) NSSplitViewItem *previewSplitViewItem; // @dynamic previewSplitViewItem;
- (_Bool)tagsColumnHasFocus;
- (void)startEditingNodeInTagsColumn:(const struct TFENode *)arg1;
- (void)saveTagsColumnWidthToDisk:(double)arg1;
- (void)setTagsColumnSelection:(const struct TFENode *)arg1;
- (void)removeTagsColumn;
- (void)addTagsColumn:(id)arg1;
- (void)setTagsColumnCollapsed:(_Bool)arg1 delegate:(id)arg2;
- (void)collapseTagsColumn;
- (void)expandTagsColumn:(id)arg1;
- (struct CGRect)tagsColumnFrameInWindow;
@property(readonly, nonatomic) _Bool isTagsColumnCollapsed; // @dynamic isTagsColumnCollapsed;
- (id)tagsColumnView;
@property(readonly, nonatomic) NSSplitViewItem *tagsSplitViewItem; // @dynamic tagsSplitViewItem;
- (void)configureForAirDrop:(_Bool)arg1;
- (void)updateBrowserViewBottomConstraintForAirDrop:(_Bool)arg1;
- (double)bottomContentInsetForAirDrop;
@property(retain, nonatomic) TBrowserViewController *browserViewController;
- (void)adjustContentInsets;
- (void)viewDidLayout;
- (void)updateViewConstraints;
- (void)addBrowserViewToBrowserColumnView;
@property(retain, nonatomic) NSView *browserView; // @dynamic browserView;
@property(readonly, retain, nonatomic) TUpdateLayerView *browserColumnView; // @dynamic browserColumnView;
@property(retain) TSplitView *splitView; // @dynamic splitView;
- (void)aboutToTearDown;
- (void)viewDidLoad;
- (id)init;

@end

