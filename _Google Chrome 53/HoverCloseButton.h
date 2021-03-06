//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/HoverButton.h>

#import "NSAnimationDelegate.h"

@class GTMKeyValueAnimation, NSString;

@interface HoverCloseButton : HoverButton <NSAnimationDelegate>
{
    GTMKeyValueAnimation *fadeOutAnimation_;
    int previousState_;
}

+ (void)initialize;
- (void)setAccessibilityTitle:(id)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)commonInit;
- (void)setHoverState:(int)arg1;
- (id)imageForHoverState:(int)arg1;
- (unsigned int)iconColor;
- (id)tabView;
- (void)setFadeOutValue:(double)arg1;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)removeFromSuperview;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

