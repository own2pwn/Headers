//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBrowserViewController.h"

#import "TInfoExtractorDelegate.h"

@class NSColor, NSImage;

@interface TIconViewController : TBrowserViewController <TInfoExtractorDelegate>
{
    double _gridSpacing;
    struct CGPoint _gridOffset;
    _Bool _labelOnBottom;
    _Bool _showItemInfo;
    int _arrangeBy;
    int _backgroundType;
    struct CGSize _idealViewSizeForZoom;
    struct unique_ptr<TIconViewLayout, std::__1::default_delete<TIconViewLayout>> _iconLayout;
    _Bool _spatialDataIsDirty;
    _Bool _layoutIsDirty;
    _Bool _applySnapToGrid;
    _Bool _animateOnNextReload;
    struct TNSRef<NSColor *> _backgroundColor;
    struct TNSRef<NSImage *> _backgroundImage;
    long long _maxIconDepth;
    struct TFENodeVector _nodesInDropAnimation;
    _Bool _drawingDisabled;
    struct CGRect _dropTargetFrame;
    _Bool _okayToReloadData;
    unordered_map_3cc67d30 _draggedNodeToDroppedNodeMap;
    _Bool _performDragOperationResult;
    struct TNSRef<NSMutableIndexSet *> _indexesBeingDropped;
    struct TNSRef<TIconViewCellOffscreenRenderer *> _cellRenderer;
    struct unique_ptr<TInfoExtractorController, std::__1::default_delete<TInfoExtractorController>> _infoController;
    struct unordered_map<TFENode, TNSRef<NSMutableDictionary *>, std::__1::hash<TFENode>, std::__1::equal_to<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<NSMutableDictionary *>>>> _groupInfo;
    struct TNotificationCenterObserver _iconSizeDidStabilizeObserver;
    struct TNotificationCenterObserver _gridSpacingDidStabilizeObserver;
    struct TNotificationCenterObserver _scrollViewFrameChangedObserver;
    struct TNotificationCenterObserver _qlPreviewWindowDidOpenObserver;
    struct TNotificationCenterObserver _qlPreviewWindowDidCloseObserver;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _viewSettingsBinders;
    _Bool _isOnDemandSpringLoadingActivated;
    _Bool _detentHit;
    struct TFENodeOrderedSet _childrenOfTarget;
    struct TNSRef<NSView *> _tornDownView;
}

+ (id)tagImageForNode:(const struct TFENode *)arg1 selected:(_Bool)arg2 dimmed:(_Bool)arg3;
@property(nonatomic) _Bool okayToReloadData; // @synthesize okayToReloadData=_okayToReloadData;
@property(nonatomic) int backgroundType; // @synthesize backgroundType=_backgroundType;
@property(nonatomic) int arrangeBy; // @synthesize arrangeBy=_arrangeBy;
@property(nonatomic) _Bool showItemInfo; // @synthesize showItemInfo=_showItemInfo;
@property(nonatomic) _Bool labelOnBottom; // @synthesize labelOnBottom=_labelOnBottom;
@property(nonatomic) struct CGPoint gridOffset; // @synthesize gridOffset=_gridOffset;
@property(nonatomic) double gridSpacing; // @synthesize gridSpacing=_gridSpacing;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)imageBrowser:(id)arg1 accessibilityItemAtIndex:(unsigned long long)arg2 parentItem:(id)arg3;
- (id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (id)imageBrowser:(id)arg1 groupAtIndex:(unsigned long long)arg2;
- (id)groupTagImageForNode:(const struct TFENode *)arg1;
- (long long)groupStyleHack;
- (unsigned long long)numberOfGroupsInImageBrowser:(id)arg1;
- (unsigned long long)numberOfItemsInImageBrowser:(id)arg1;
- (void)unregisterContainerWithNodeKeyCache:(const struct TFENode *)arg1;
- (void)registerContainerWithNodeKeyCache:(const struct TFENode *)arg1;
- (struct CGRect)infoTextMaxFrameForNode:(const struct TFENode *)arg1;
- (void)invalidateInfoTextForKeyNodes:(const struct TFENodeVector *)arg1;
@property(readonly, nonatomic) struct TInfoExtractorController *infoController; // @dynamic infoController;
- (void)cleanUpDraggingState;
- (_Bool)shouldAnimateDrop;
- (_Bool)finishDropAction;
- (struct TFENode)nodeForDroppedNode:(const struct TFENode *)arg1;
- (_Bool)getDroppedNodesToTargetsMap:(unordered_map_3cc67d30 *)arg1;
- (void)concludeDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1 dropTargetView:(id)arg2;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)updateDraggingItemsForDrop:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingEnded:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1 dropTargetView:(id)arg2;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1 dropTargetView:(id)arg2;
- (struct TFENode)draggingUpdatedCommon:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1 dropTargetView:(id)arg2;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)imageBrowser:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)getGlobalDragItemBounds:(map_7cee3aba *)arg1 forNodes:(const struct TFENodeVector *)arg2;
- (void)imageBrowser:(id)arg1 dragImage:(id)arg2 at:(struct CGPoint)arg3 offset:(struct CGSize)arg4 event:(id)arg5 pasteboard:(id)arg6 source:(id)arg7 slideBack:(_Bool)arg8;
- (_Bool)receiveDrop:(struct TDropOperation *)arg1 draggingInfo:(id)arg2;
- (_Bool)receivePrivateDrag:(struct TDropOperation *)arg1 draggingInfo:(id)arg2;
- (_Bool)determineSnapToGridState:(struct TDropOperation *)arg1;
- (void)adjustForOutOfBoundsItems;
- (void)addItemToSnapFeedbackList:(const struct TFENode *)arg1;
- (void)springRefreshNode:(const struct TFENode *)arg1;
- (void)refreshItem:(const struct TFENode *)arg1;
- (void)refreshItem:(const struct TFENode *)arg1 loose:(_Bool)arg2 iconOnly:(_Bool)arg3;
- (void)calculatePropertiesWithDrop:(struct TDropOperation *)arg1 forNode:(const struct TFENode *)arg2 withPasteboardItem:(void *)arg3 pbItemIndex:(unsigned long long)arg4 inPropertyList:(struct TFENodePropertyList *)arg5 forcePlace:(_Bool)arg6 applyNow:(_Bool)arg7;
- (id)dropTargetViewForDraggingInfo:(id)arg1;
- (void)receivePromiseDragNode:(const struct TFENode *)arg1 spatialData:(const struct DataBrowserItemSpatialData *)arg2;
- (void)calculateSpatialData:(struct DataBrowserItemSpatialData *)arg1 draggingItem:(id)arg2 forcePlace:(_Bool)arg3;
- (id)dragFlockLabelImageForNode:(const struct TFENode *)arg1 outFrame:(struct CGRect *)arg2 inView:(id)arg3;
- (id)dragFlockSelectionImageForNode:(const struct TFENode *)arg1 inFrame:(struct CGRect *)arg2;
- (id)cellImageForNode:(const struct TFENode *)arg1 ofComponents:(int)arg2 iconRelative:(_Bool)arg3 selected:(_Bool)arg4 minimalImage:(_Bool)arg5 inFrame:(struct CGRect *)arg6;
- (id)imageOfCell:(id)arg1 forNode:(const struct TFENode *)arg2 ofComponents:(int)arg3 iconRelative:(_Bool)arg4 selected:(_Bool)arg5 minimalImage:(_Bool)arg6 outFrame:(struct CGRect *)arg7;
- (BOOL)imageBrowserShouldValidateEditingOnFocusChange:(id)arg1;
- (BOOL)imageBrowser:(id)arg1 titleOfCellAtIndex:(unsigned long long)arg2 shouldBeginEditing:(id)arg3;
- (int)editingSelectionType;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (BOOL)imageBrowser:(id)arg1 getFreeFormLayoutAtIndexes:(id)arg2 position:(struct CGPoint *)arg3 scaleFactor:(double *)arg4 zValue:(double *)arg5;
- (void)imageBrowser:(id)arg1 didMoveItemsAtIndexes:(id)arg2;
- (BOOL)imageBrowser:(id)arg1 moveItemsAtIndexes:(id)arg2 toIndex:(unsigned long long)arg3;
- (BOOL)imageBrowser:(id)arg1 willMoveItemsAtIndexes:(id)arg2;
- (void)addSpatialDataForLocationInView:(const struct CGPoint *)arg1 toPropertyList:(struct TFENodePropertyList *)arg2;
- (void)menu:(id)arg1 prepareForLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (id)selectionIndexesForProposedSelection:(id)arg1;
- (void)imageBrowserSelectionDidChange:(id)arg1;
- (void)unbindViewSettings;
- (void)privateBindSettings;
- (void)imageBrowser:(id)arg1 itemAtIndexMovedOnTop:(unsigned long long)arg2;
- (BOOL)imageBrowser:(id)arg1 itemIsButton:(id)arg2;
- (id)imageBrowser:(id)arg1 subtitleOfImageBrowserItem:(id)arg2;
- (void)imageBrowser:(id)arg1 didValidateVisibleCellsAtIndexes:(id)arg2;
- (void)removeIndexesBeingDropped:(id)arg1;
- (_Bool)shouldDrawNode:(const struct TFENode *)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)drawingDisabled;
- (id)indexesBeingDropped;
- (void)cacheIndexesBeingDropped;
- (void)cacheIndexesBeingDroppedForNodes:(const struct TFENodeVector *)arg1;
- (void)clearIndexesBeingDropped;
- (struct TFENodeVector)nodesBeingDropped;
- (void)ensureCGSurfaceUpdateOnDraw:(_Bool)arg1;
- (id)quickLookSharedPreviewViewForPreviewNode:(const struct TFENode *)arg1;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (void)revealNodes:(const struct TFENodeVector *)arg1 select:(_Bool)arg2;
- (void)deselectAllNodes;
- (void)itemsRemoved:(const struct TFENodeVector *)arg1 fromContainer:(const struct TFENode *)arg2;
- (_Bool)itemsAdded:(const struct TFENodeVector *)arg1 toContainer:(const struct TFENode *)arg2 withSpatialData:(const vector_3577cbd0 *)arg3;
- (void)raiseZPositionForNodes:(const struct TFENodeVector *)arg1;
- (_Bool)shouldLoadSpatialData;
- (int)updateNeededForNode:(const struct TFENode *)arg1 property:(unsigned long long)arg2;
- (void)updateInternalCacheForNode:(const struct TFENode *)arg1 properties:(const unordered_set_ca935477 *)arg2;
- (void)updateTitleForNode:(const struct TFENode *)arg1 properties:(const unordered_set_ca935477 *)arg2;
- (void)updateInlineProgressForNode:(const struct TFENode *)arg1 properties:(const unordered_set_ca935477 *)arg2;
- (void)reloadData;
- (_Bool)shouldAnimateReloadData;
- (void)deferredReloadData;
- (void)expandOrCollapseNewGroups:(const unordered_set_b5868ef5 *)arg1 firstPopulation:(_Bool)arg2;
- (void)updateGroupInfo;
- (void)updateChildrenOfTarget;
- (void)dataSourceChanged:(const vector_f56638af *)arg1;
- (struct CGImage *)newRestoreImageForNode:(const struct TFENode *)arg1 outRect:(struct CGRect *)arg2;
- (void)getVisibleNodes:(struct TFENodeVector *)arg1;
- (void)prepareSnapToGridForUpcomingItems;
- (struct CGRect)gridFrameClosestToPoint:(struct CGPoint)arg1;
- (struct CGSize)currentGridSize;
- (struct CGRect)currentSingleIconBounds;
- (struct CGRect)anchoredIconBounds;
- (struct CGRect)anchoredBoundsForIconCellPart:(int)arg1;
- (struct CGRect)anchoredBoundsForIconCellPart:(int)arg1 withViewSettings:(id)arg2;
- (id)currentViewSettings;
- (void)configurationChangedPreservingLayout:(_Bool)arg1;
- (void)viewOptionSliderDidStabilizeForNode:(const struct TFENode *)arg1;
- (void)offsetSpatialData:(struct DataBrowserItemSpatialData *)arg1;
- (void)addOffsetSpatialDataFromNodes:(const struct TFENodeVector *)arg1 toPropertyList:(vector_d50fdf79 *)arg2;
- (void)writeSpatialDataIfDirty;
- (void)writeSpatialData;
- (void)setSpatialDataIsDirty;
- (void)translateIconPositions:(struct CGSize)arg1;
- (_Bool)recalcLayout;
- (void)dirtyLayout;
- (void)arrangeBy:(int)arg1;
- (void)setFreeFormLayoutMode:(_Bool)arg1;
- (void)updateGridAlignment;
- (void)updateFreeFormLayout;
- (void)updateFreeFormLayoutAnimated:(_Bool)arg1;
- (void)saveScrollPosition;
- (void)restoreBrowserViewState:(id)arg1;
- (id)browserViewState;
- (_Bool)inKeepArrangedMode;
@property(retain, nonatomic) NSImage *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) NSColor *backgroundColor; // @dynamic backgroundColor;
- (void)setupFreeformArrangement;
- (void)cmdSortByTags:(id)arg1;
- (void)cmdSortByName:(id)arg1;
- (void)cmdSortByDate:(id)arg1;
- (_Bool)validateSortByTags:(id)arg1;
- (_Bool)validateSortByName:(id)arg1;
- (_Bool)validateSortByDate:(id)arg1;
- (void)cmdKeepArrangedByLabel:(id)arg1;
- (void)cmdKeepArrangedByKind:(id)arg1;
- (void)cmdKeepArrangedByPhysicalSize:(id)arg1;
- (void)cmdKeepArrangedByDateAdded:(id)arg1;
- (void)cmdKeepArrangedByLastOpenDate:(id)arg1;
- (void)cmdKeepArrangedByCreationDate:(id)arg1;
- (void)cmdKeepArrangedByModDate:(id)arg1;
- (void)cmdKeepArrangedByName:(id)arg1;
- (void)cmdKeepArrangedBy:(id)arg1;
- (void)cmdCleanUpSelection:(id)arg1;
- (_Bool)validateCleanUpSelection:(id)arg1;
- (void)cmdCleanUp:(id)arg1;
- (_Bool)validateCleanUp:(id)arg1;
- (_Bool)validateArrange:(id)arg1;
- (void)cmdCleanUpByLabel:(id)arg1;
- (void)cmdCleanUpByKind:(id)arg1;
- (void)cmdCleanUpByPhysicalSize:(id)arg1;
- (void)cmdCleanUpByDateAdded:(id)arg1;
- (void)cmdCleanUpByLastOpenDate:(id)arg1;
- (void)cmdCleanUpByCreationDate:(id)arg1;
- (void)cmdCleanUpByModDate:(id)arg1;
- (void)cmdCleanUpByName:(id)arg1;
- (void)cleanUpBy:(int)arg1;
- (_Bool)validateCleanUpBy:(id)arg1;
- (void)cmdCleanUpBy:(id)arg1;
- (void)setShowIconPreview:(_Bool)arg1;
- (void)updateFreeFormPositions;
- (void)setIconSize:(double)arg1;
- (void)setTextSize:(double)arg1;
- (void)setInitialConfigInProgress:(_Bool)arg1;
- (struct CGSize)cellSizeForIconSize:(double)arg1;
- (struct TFENode)settingsNode;
- (void)setViewSettingsLabelOnBottom:(_Bool)arg1;
- (void)setViewSettingsIconSize:(double)arg1;
- (void)setViewSettingsArrangeBy:(int)arg1;
- (struct CGSize)viewScrollersSize;
- (struct CGSize)idealViewSize;
- (struct CGRect)iconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)popoverFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)frameForNode:(const struct TFENode *)arg1;
- (void)scrollViewFrameChanged;
- (void)setAlwaysVisibleNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsSelected:(const struct TFENode *)arg1;
- (void)selectAllNodes;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (id)indexSetForNodes:(const struct TFENodeVector *)arg1;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (void)scrollWheel:(id)arg1;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
- (struct TFENode)nextNodeInViewAfter:(const struct TFENodeVector *)arg1;
- (unsigned long long)selectedNodesCount;
- (unsigned long long)itemCount;
- (struct TFENode)nodeAtPoint:(const struct CGPoint *)arg1 includeTarget:(_Bool)arg2;
- (unsigned long long)indexForNode:(const struct TFENode *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (const struct TFENodeVector *)targetNodes;
- (void)setBrowserViewContentInsets:(struct NSEdgeInsets)arg1;
- (_Bool)isGroupingByDate;
- (id)imageBrowserView;
- (id)iconView;
- (void)setDataSource:(id)arg1;
- (unsigned int)viewStyle;
- (void)loadView;
- (_Bool)shouldCacheBrowserBaseView;
- (Class)iconViewClass;
- (void)aboutToTearDown;
- (id)nibName;
- (void)setSubtitleTextAttributes;
- (void)viewLoaded;
- (void)initCommon;
- (id)initWithTargetPath:(const struct TFENodeVector *)arg1 containerController:(id)arg2;
- (void)adjustIconViewAnimationMask;
- (_Bool)shouldUseIKFinderMode;
- (int)imageBrowserFlavor;

@end

