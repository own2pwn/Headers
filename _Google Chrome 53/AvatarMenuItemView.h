//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class AvatarMenuItemController;

@interface AvatarMenuItemView : NSView
{
    AvatarMenuItemController *viewController_;
    struct ScopedCrTrackingArea trackingArea_;
}

@property(nonatomic) AvatarMenuItemController *viewController; // @synthesize viewController=viewController_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (BOOL)canBecomeKeyView;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)awakeFromNib;

@end

