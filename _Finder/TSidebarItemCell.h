//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSImage, NSString, TMouseOverButton;

@interface TSidebarItemCell : NSTableCellView
{
    struct TFENode _node;
    _Bool _selected;
    int _actionKind;
    _Bool _isEditing;
    _Bool _enabled;
    TMouseOverButton *_button;
    function_e7efebff _iconGetter;
}

+ (void)drawSidebarIcon:(id)arg1 inRect:(struct CGRect)arg2 inContext:(struct CGContext *)arg3 highlighted:(_Bool)arg4;
+ (struct TString)imageName:(const struct TString *)arg1 forSize:(struct CGSize)arg2;
+ (const struct TFENode *)nodeForItem:(id)arg1;
+ (struct CGRect)roughActionButtonRectForCell:(const struct CGRect *)arg1;
+ (unsigned long long)frameRateMicroseconds;
+ (BOOL)prefersTrackingUntilMouseUp;
+ (id)makeSidebarItemCellForView:(id)arg1;
@property(retain) TMouseOverButton *button; // @synthesize button=_button;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(readonly, nonatomic) int actionKind; // @synthesize actionKind=_actionKind;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)nextAnimationFrame;
- (void)updateLayer;
- (void)viewWillDraw;
- (void)layoutDetails;
- (struct CGRect)_textFieldFrame;
- (struct CGRect)_imageViewFrame;
@property(readonly, retain, nonatomic) NSImage *image;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (void)setStringValue:(const struct TString *)arg1;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (double)imageSize;
- (_Bool)isHighlighted;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)stopAnimatingIfNeeded;
- (void)startAnimatingIfNeeded;
- (_Bool)hasActionButton;
- (int)actionButtonMouseState;
- (double)optimalWidthForHeight:(double)arg1;
@property(readonly, retain, nonatomic) NSString *name;
- (_Bool)isZone;
- (id)description;
- (id)dataForIdentifier:(id)arg1;
- (void)dealloc;
- (void)finishMakingWithNode:(const struct TFENode *)arg1 actionKind:(int)arg2 iconGetter:(function_e7efebff)arg3;
- (void)updateAction:(int)arg1;
- (void)setAction:(int)arg1;
- (void)updateNameAndIcon;
- (void)finishAddingActionButtonIfNeeded:(function_ab83811b)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
