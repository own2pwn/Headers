//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDesktopGridLayout : NSObject
{
    int _layoutStyle;
    int _layoutOrientation;
    _Bool _justifiedLayout;
    _Bool _pinEdges;
    struct CGRect _frame;
    struct CGSize _gridSize;
    double _topMargin;
    double _bottomMargin;
    double _leftMargin;
    double _rightMargin;
    struct CGSize _cellSize;
    struct CGSize _cellSpacing;
    struct CGRect _anchoredGridCellFrame;
    struct CGSize _gridDimensions;
    unsigned long long _numberOfGridSpots;
    struct TIconLayoutBitmap _bitmap;
}

@property(nonatomic) struct CGSize cellSpacing; // @synthesize cellSpacing=_cellSpacing;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) _Bool pinEdges; // @synthesize pinEdges=_pinEdges;
@property(nonatomic) _Bool justifiedLayout; // @synthesize justifiedLayout=_justifiedLayout;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)nextOpenLocation:(struct CGPoint *)arg1;
- (void)clearAllItemLocations;
- (void)occupyGridSpotsForRect:(const struct CGRect *)arg1;
- (_Bool)setItemLocation:(const struct CGPoint *)arg1;
- (_Bool)itemAtLocation:(const struct CGPoint *)arg1;
- (struct CGPoint)gridLocationInDirection:(int)arg1 fromAnchor:(const struct CGPoint *)arg2;
- (struct CGPoint)nearestGridLocation:(struct CGPoint)arg1;
- (struct CGPoint)anchorForIndex:(unsigned long long)arg1;
- (struct CGPoint)anchorAtGridLocation:(struct CGPoint)arg1;
- (unsigned long long)numberOfGridSpots;
- (struct CGSize)gridDimensions;
@property(nonatomic) struct CGSize gridSize;
- (void)updateGrid;
- (struct CGSize)calculateCellSpacing;
@property(nonatomic) struct CGRect anchoredGridCellFrame;
- (_Bool)getCellFrame:(struct CGRect *)arg1 atGridLocation:(struct CGPoint)arg2;
- (double)heightForRows:(unsigned long long)arg1;
- (unsigned long long)calculateNumberOfGridSpots;
- (struct CGSize)calculateGridDimensions;
- (void)updateBitmap;
@property(readonly, nonatomic) struct CGRect layoutFrame;
- (id)init;

@end

