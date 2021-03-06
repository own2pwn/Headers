//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseBrowserViewController.h"

#import "NSMenuDelegate.h"
#import "TDesktopViewDelegateProtocol.h"

@class NSString, TDesktopBandSelectionController, TDesktopGridLayoutController, TDesktopIconSpatialDataController, TDesktopInlinePreviewController, TDesktopViewDataSource;

@interface TDesktopViewController : TBaseBrowserViewController <NSMenuDelegate, TDesktopViewDelegateProtocol>
{
    struct TFENode _nodeClickedOnMouseDown;
    _Bool _deselectOnMouseUp;
    _Bool _doubleClickOnMouseUp;
    _Bool _startEditingOnMouseUp;
    _Bool _isSnappingToGrid;
    struct TNSRef<NSEvent *> _mouseDownEventForDrag;
    struct TFENode _pendingNodeToEdit;
    TNSRef_34ef24c4 _pendingRenameOp;
    id <TDesktopViewControllerDelegateProtocol> _delegate;
    _Bool _isOnDemandSpringLoadingActivated;
    _Bool _deepClickDesktop;
    _Bool _didShowDesktop;
    struct TNSRef<TBrowserImmediateActionGestureRecognizerDelegate *> _immediateActionGestureRecognizerDelegate;
    struct TNSRef<NSImmediateActionGestureRecognizer *> _quickLookImmediateActionGestureRecognizer;
    struct TNSRef<NSImmediateActionGestureRecognizer *> _renameImmediateActionGestureRecognizer;
    _Bool _immediateActionGestureRecognizerDidRecognize;
    _Bool _shouldSkipRename;
}

@property id <TDesktopViewControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setUpImmediateActionGestureRecognizers;
- (void)cmdChangeDesktopBackground:(id)arg1;
- (void)cmdKeepArrangedByLabel:(id)arg1;
- (void)cmdKeepArrangedByKind:(id)arg1;
- (void)cmdKeepArrangedByPhysicalSize:(id)arg1;
- (void)cmdKeepArrangedByDateAdded:(id)arg1;
- (void)cmdKeepArrangedByLastOpenDate:(id)arg1;
- (void)cmdKeepArrangedByCreationDate:(id)arg1;
- (void)cmdKeepArrangedByModDate:(id)arg1;
- (void)cmdKeepArrangedByName:(id)arg1;
- (_Bool)validateArrange:(id)arg1;
- (_Bool)validateKeepArrangedBy:(id)arg1;
- (_Bool)validateDeselectAll:(id)arg1;
- (_Bool)validateSelectAll:(id)arg1;
- (struct TriStateBool)includeTargetForCommandSelector:(SEL)arg1;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)typeSelectCandidateNodes;
- (void)renameSelectedItem;
- (void)quickLookWithEvent:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (_Bool)handleMouseDragged:(id)arg1;
- (_Bool)handleMouseDown:(id)arg1 outClickedNode:(struct TFENode *)arg2 outDeselectOnBandSelect:(_Bool *)arg3;
- (_Bool)handleRightMouseDown:(id)arg1;
- (_Bool)determineSnapToGridStateForDrag;
- (void)calculatePropertiesWithDrop:(struct TDropOperation *)arg1 forNode:(const struct TFENode *)arg2 withPasteboardItem:(void *)arg3 pbItemIndex:(unsigned long long)arg4 inPropertyList:(struct TFENodePropertyList *)arg5 forcePlace:(_Bool)arg6 applyNow:(_Bool)arg7;
- (id)dropTargetViewForDraggingInfo:(id)arg1;
- (void)receivePromiseDragNode:(const struct TFENode *)arg1 spatialData:(const struct DataBrowserItemSpatialData *)arg2;
- (void)calculateSpatialData:(struct DataBrowserItemSpatialData *)arg1 draggingItem:(id)arg2 forcePlace:(_Bool)arg3;
- (void)getDropTargetNode:(struct TFENode *)arg1 fromDraggingInfo:(id)arg2 inDropTargetView:(id)arg3;
- (struct CGSize)dragFlockingFrameSizeForDropTargetView:(id)arg1;
- (struct CGRect)handleDragFlockingFrameForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (struct CGRect)dragFlockingFrameForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (id)dragFlockingImageComponentsForNode:(const struct TFENode *)arg1 dropTargetView:(id)arg2;
- (struct TFENode)nodeForDraggingItem:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menu:(id)arg1 prepareForLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)menuNeedsUpdate:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)springRefreshNode:(const struct TFENode *)arg1;
- (void)springNode:(const struct TFENode *)arg1 globalMouse:(const struct CGPoint *)arg2 spawnNewWindow:(_Bool)arg3;
- (void)concludeDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (BOOL)performDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (BOOL)prepareForDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (_Bool)wantsPeriodicDraggingUpdatesWithDropTargetView:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingUpdated:(id)arg1 dropTargetView:(id)arg2;
- (id)quickLookSharedPreviewViewForPreviewNode:(const struct TFENode *)arg1;
- (void)quicklookWindowDidClose:(id)arg1;
- (void)quicklookWindowDidOpen:(id)arg1;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (void)shrinkToFitTextViewAboutToCloseForNode:(const struct TFENode *)arg1;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1 forNode:(const struct TFENode *)arg2 renameOp:(id)arg3;
- (_Bool)shrinkToFitTextViewAboutToOpenForNode:(const struct TFENode *)arg1;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2 afterDelay:(_Bool)arg3;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (_Bool)startEditingNodeNowOrLater:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)quickLookPreviewInvoked:(const struct TFENode *)arg1;
- (void)inlineProgressCancelButtonPressed:(const struct TFENode *)arg1;
- (struct CGRect)inlinePreviewContentFrameForNode:(const struct TFENode *)arg1;
- (id)inlinePreviewPropertiesForNode:(const struct TFENode *)arg1;
- (void)offsetSpatialData:(struct DataBrowserItemSpatialData *)arg1;
- (void)addOffsetSpatialDataFromNodes:(const struct TFENodeVector *)arg1 toPropertyList:(vector_d50fdf79 *)arg2;
- (void)addSpatialDataForLocationInView:(const struct CGPoint *)arg1 toPropertyList:(struct TFENodePropertyList *)arg2;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (void)selectNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (void)deselectAllNodes;
- (void)selectAllNodes;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
@property(nonatomic, getter=isSnapToGrid) _Bool snapToGrid; // @dynamic snapToGrid;
@property(nonatomic, getter=isKeepArranged) _Bool keepArranged; // @dynamic keepArranged;
@property(nonatomic, getter=isTitleOnBottom) _Bool titleOnBottom; // @dynamic titleOnBottom;
@property(nonatomic) _Bool showItemInfo; // @dynamic showItemInfo;
@property(nonatomic) double gridSpacing; // @dynamic gridSpacing;
- (void)setTextSize:(double)arg1;
- (double)textSize;
- (void)setIconSize:(double)arg1;
- (double)iconSize;
- (void)prepareSnapToGridForNode:(const struct TFENode *)arg1;
- (void)flushNodeEvents;
- (unsigned long long)itemCount;
- (void)desktopViewFrameChanged:(id)arg1;
- (id)originatingWindowController;
- (void)windowDidBecomeMain:(id)arg1;
- (void)setViewSettings:(id)arg1;
- (id)viewSettings;
- (id)desktopView;
@property TDesktopInlinePreviewController *inlinePreviewController; // @dynamic inlinePreviewController;
@property TDesktopBandSelectionController *bandSelectionController; // @dynamic bandSelectionController;
@property TDesktopIconSpatialDataController *spatialDataController; // @dynamic spatialDataController;
@property TDesktopGridLayoutController *gridLayoutController; // @dynamic gridLayoutController;
@property TDesktopViewDataSource *dataSource; // @dynamic dataSource;
- (_Bool)isDesktopBrowser;
- (const struct TFENodeVector *)resolvedTargetPath;
- (const struct TFENode *)target;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

