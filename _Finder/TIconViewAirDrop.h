//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIconView.h"

@class TIconViewAirDropController;

@interface TIconViewAirDrop : TIconView
{
    struct TFENode _mouseDownOnAirDropNode;
    struct TNSRef<TAirDropInfoViewController *> _airDropInfoViewController;
    struct TNSRef<TAirDropLayoutController *> _airDropLayout;
    struct TNSRef<TLayer *> _airDropCircleLayer;
    struct TNSRef<TLayer *> _airDropInfoLayer;
    struct TNSRef<TLayer *> _airDropPocketLayer;
    unsigned long long _airDropLastRenderedCellsPerRow;
    unsigned long long _defaultAnimationMask;
    double _airDropBrowserContainerViewHeightCache;
    _Bool _airDropAutoScrollAllowed;
    _Bool _adjustingAirDropDocumentSize;
    _Bool _airDropLastRenderedInCircleLayout;
    _Bool _airDropIsInArcMode;
    _Bool _airDropArcModeStabilized;
    _Bool _isUpdatingAirDropLayout;
    struct map<TFENode, TNSRef<TAirDropPerson *>, std::__1::less<TFENode>, std::__1::allocator<std::__1::pair<const TFENode, TNSRef<TAirDropPerson *>>>> _airDropPeople;
    struct CGSize _airDropSizeBeforeLiveResize;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _observers;
}

@property(nonatomic) _Bool airDropIsInArcMode; // @synthesize airDropIsInArcMode=_airDropIsInArcMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)drawVisibleCells:(struct CGRect)arg1;
- (void)adjustScroller;
- (_Bool)autoscrollWithLocalPoint:(struct CGPoint)arg1 andSensitiveMargin:(float)arg2;
- (void)caNeedsDisplay;
- (void)adjustDocumentSize;
- (void)reloadData;
- (BOOL)shouldAnimateAppearingAndDisappearingDatasourceItems;
- (void)windowDidEndLiveResize;
- (void)windowDidResize;
- (void)windowWillStartLiveResize;
- (struct CGRect)alwaysVisibleNodeIconFrameForScrolling;
- (void)updateCircleLayerforScroll;
- (void)browserDidScroll;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewWillDraw;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)displayIfNeededForLiveResize;
- (void)scheduleDisplayIfNeededForLiveResize;
- (void)drawAirDropArcs;
- (void)drawAirDropCircles;
- (void)updateAirDropPeople;
- (void)updateAirDropPocketLayers;
- (void)airDropPersonAnimationCompleted;
- (void)updateAirDropPersonForNode:(const struct TFENode *)arg1;
- (id)airDropPersonForNode:(const struct TFENode *)arg1;
- (void)tearDownAirDropPeople;
- (double)airDropInfoAreaHeight;
- (struct CGRect)airDropVisibleContentRect;
- (_Bool)airDropShowPocketLayer;
- (_Bool)airDropOverMeAreaWithPocket:(const struct CGPoint *)arg1;
- (struct CGPoint)airDropMeCenterPoint;
- (struct CGRect)airDropMeFrame;
- (id)airDropInfoView;
- (id)airDropLayout;
- (void)configureForAirDrop:(_Bool)arg1 infoViewController:(id)arg2;
- (_Bool)isConfiguredForAirDrop;
- (id)makeContext:(id)arg1;
- (void)scrollViewFrameDidChange:(id)arg1;
- (void)updateAirDropLayout;
- (void)airDropBrowserContainerViewFrameChanged:(id)arg1;
- (void)airDropStopObservingBrowserContainerView:(id)arg1;
- (void)airDropStartObservingBrowserContainerView:(id)arg1;
- (void)airDropScrollViewDidMoveToSuperview:(id)arg1;
- (void)airDropScrollViewWillMoveToSuperview:(id)arg1;
- (void)airDropSwitchToArcModeStabilized;
- (Class)iconViewClassForCellClass:(Class)arg1;

// Remaining properties
@property(retain, nonatomic) TIconViewAirDropController *controller; // @dynamic controller;

@end

