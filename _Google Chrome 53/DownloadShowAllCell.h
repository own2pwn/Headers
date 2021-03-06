//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/GradientButtonCell.h>

#import "NSAnimationDelegate.h"

@class NSString;

@interface DownloadShowAllCell : GradientButtonCell <NSAnimationDelegate>
{
    struct unique_ptr<ui::ThemeProvider, std::__1::default_delete<ui::ThemeProvider>> themeProvider_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)cellSize;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)textAttributes;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)titleColor;
- (BOOL)pressedWithDefaultTheme;
- (const struct ThemeProvider *)backgroundThemeWrappingProvider:(const struct ThemeProvider *)arg1;
- (void)setShowsBorderOnlyWhileMouseInside:(BOOL)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setInitialState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

