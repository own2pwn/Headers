//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIconAndTextWithActionCell.h"

@class NSImage, NSView;

@interface TColumnCell : TIconAndTextWithActionCell
{
    struct TFENode _node;
    struct TNSRef<NSImage *> _thumbnail;
    struct TNSRef<NSImage *> _tagImage;
    struct TNSRef<NSImage *> _badgeImage;
    NSView *_view;
    _Bool _isEditing;
    _Bool _forceSpaceForTagImage;
    _Bool _forceSpaceForBadgeImage;
    unsigned int _progressState;
    unsigned int _progressAmount;
    function_2a606626 _tagImageFunc;
    function_2a606626 _badgeImageFunc;
}

@property(nonatomic) _Bool forceSpaceForBadgeImage; // @synthesize forceSpaceForBadgeImage=_forceSpaceForBadgeImage;
@property(nonatomic) _Bool forceSpaceForTagImage; // @synthesize forceSpaceForTagImage=_forceSpaceForTagImage;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) NSView *view; // @synthesize view=_view;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)controller;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)setIconSize:(struct CGSize)arg1;
- (void)setNode:(const struct TFENode *)arg1;
- (const struct TFENode *)node;
- (void)setShowEjectButton:(_Bool)arg1;
- (_Bool)showEjectButton;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawIconWithFrame:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)tagImageFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)badgeImageFrameForBounds:(struct CGRect)arg1;
- (struct CGRect)progressFrameForBounds:(struct CGRect)arg1;
- (_Bool)updateBadgeImage;
- (_Bool)setBadgeImageFunc:(function_2a606626)arg1;
- (_Bool)updateTagImage;
- (_Bool)setTagImageFunc:(function_2a606626)arg1;
- (_Bool)isDrawingDisabled;
- (_Bool)isSelected;
- (void)setDrawGrayTextWhenDisabled:(_Bool)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (_Bool)hasProgress;
@property(readonly, nonatomic) _Bool hasTagImage; // @dynamic hasTagImage;
@property(readonly, nonatomic) _Bool hasBadgeImage; // @dynamic hasBadgeImage;
- (void)setBadgeImage:(id)arg1;
- (id)badgeImage;
@property(retain, nonatomic) NSImage *thumbnail; // @dynamic thumbnail;
- (_Bool)setProgressState:(unsigned int)arg1 amount:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)awakeCommon;
- (void)initCommon;

@end

