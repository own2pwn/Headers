//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface NSView (ChromeAdditions)
- (id)cr_viewBeingDrawnTo;
- (void)cr_drawUsingAncestor:(id)arg1 inRect:(struct CGRect)arg2;
- (void)cr_drawUsingAncestor:(id)arg1 inRect:(struct CGRect)arg2 clippedToAncestorBounds:(BOOL)arg3;
- (void)cr_recursivelySetNeedsDisplay:(BOOL)arg1;
- (void)cr_recursivelyInvokeBlock:(CDUnknownBlockType)arg1;
- (id)cr_keyboardFocusIndicatorColor;
- (void)cr_ensureSubview:(id)arg1 isPositioned:(long long)arg2 relativeTo:(id)arg3;
- (BOOL)cr_isAboveView:(id)arg1;
- (BOOL)cr_isBelowView:(id)arg1;
- (BOOL)cr_isMouseInView;
- (double)cr_lineWidth;
@end

