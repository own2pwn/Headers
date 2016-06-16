//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBrowserTableView.h"

#import "TShrinkToFitDelegateProtocol.h"

@class TColumnMoreCell, TTableViewShrinkToFitController;

@interface TBrowserTableView : NSBrowserTableView <TShrinkToFitDelegateProtocol>
{
    struct TFENodeOrderedSet _nodeToRowSet;
    _Bool _itemHitOnMouseDown;
    _Bool _mouseDownInMoreButton;
    TTableViewShrinkToFitController *_stfController;
    TColumnMoreCell *_moreCell;
    struct TNotificationCenterObserver _clipViewBoundsChangedObserver;
    _Bool _showingAnyColorTags;
    unordered_set_b5868ef5 _nodesWithBadgeImages;
    struct TNSRef<TBrowserImmediateActionGestureRecognizerDelegate *> _immediateActionGestureRecognizerDelegate;
    struct TNSRef<NSImmediateActionGestureRecognizer *> _quickLookImmediateActionGestureRecognizer;
    struct TNSRef<NSImmediateActionGestureRecognizer *> _renameImmediateActionGestureRecognizer;
    long long _disabledTrackingRow;
}

@property long long disabledTrackingRow; // @synthesize disabledTrackingRow=_disabledTrackingRow;
@property(nonatomic) _Bool showingAnyColorTags; // @synthesize showingAnyColorTags=_showingAnyColorTags;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setUpImmediateActionGestureRecognizers;
- (_Bool)_onlyAcceptRowDropOnContent;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)inputContext;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (struct CGRect)rectOfRow:(long long)arg1;
- (id)stfEditorController;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (int)editingSelectionType;
- (void)updateSTFEditorLocation;
- (void)stopEditing:(_Bool)arg1;
- (_Bool)startEditingWithNode:(const struct TFENode *)arg1 renameOp:(id)arg2;
- (void)renameSelectedItem;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (void)didRemoveRowView:(id)arg1 forRow:(long long)arg2;
- (void)moveNode:(const struct TFENode *)arg1 atIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)removeNodes:(const struct TFENodeVector *)arg1 atIndexes:(id)arg2 withAnimation:(unsigned long long)arg3;
- (void)setInitialNodes:(const struct TFENodeVector *)arg1;
- (void)insertSortedNodes:(const struct TFENodeVector *)arg1 atIndexes:(id)arg2 withAnimation:(unsigned long long)arg3;
- (id)selectedItems;
- (void)synchSelectionCache;
- (unsigned long long)rowForNode:(const struct TFENode *)arg1;
- (const struct TFENode *)nodeAtRow:(unsigned long long)arg1;
- (id)itemAtRow:(unsigned long long)arg1;
- (void)reloadData;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (id)iconImageForNode:(const struct TFENode *)arg1;
- (double)optimalHeight;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)scrollSelectedRowToVisible;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (_Bool)_wantsLiveResizeToUseCachedImage;
- (id)menuForEvent:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (unsigned long long)hitTestForEvent:(id)arg1 row:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (void)mouseDown:(id)arg1;
- (_Bool)_typeSelectInterpretKeyEvent:(id)arg1;
- (_Bool)commonMouseDownAndEarlyReturn:(id)arg1 controller:(id)arg2;
- (void)mouseUp:(id)arg1;
- (void)setForceSpaceForBadgeImagesOnCellViews:(_Bool)arg1;
- (void)removeNodesWithoutBadgeImages:(const struct TFENodeVector *)arg1;
- (void)updateNode:(const struct TFENode *)arg1 withBadgeImage:(_Bool)arg2;
@property(readonly, nonatomic) _Bool showingAnyBadgeImages; // @dynamic showingAnyBadgeImages;
- (_Bool)handleUnicodeTextInput:(id)arg1 atTime:(double)arg2;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)finalize;
- (void)dealloc;
- (id)viewController;
- (id)columnViewController;
- (BOOL)_supportsTrackingAreasForCells;
- (id)initWithFrame:(struct CGRect)arg1;

@end
