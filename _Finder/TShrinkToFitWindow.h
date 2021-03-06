//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class TShrinkToFitScrollView, TShrinkToFitTextView;

@interface TShrinkToFitWindow : NSPanel
{
    TShrinkToFitScrollView *_stfScrollView;
    TShrinkToFitTextView *_stfTextView;
}

- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (struct CGRect)calcGlobalFrame;
- (void)sizeToFit;
- (void)stfScrollViewScrollerStyleChanged:(id)arg1;
- (void)stfScrollViewFrameChanged:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)_resignKeyFocus;
- (BOOL)_canBecomeSecondaryKeyWindow;
- (BOOL)canBecomeKeyWindow;
- (void)dealloc;
- (id)initWithSTFTextView:(id)arg1;
- (double)_focusRingThickness;

@end

