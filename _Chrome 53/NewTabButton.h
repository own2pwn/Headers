//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

#import "ThemedWindowDrawing.h"

@interface NewTabButton : NSButton <ThemedWindowDrawing>
{
}

+ (void)drawNewTabButtonImage:(id)arg1;
+ (id)newTabButtonBezierPathWithLineWidth:(double)arg1;
+ (Class)cellClass;
- (id)imageWithFillColor:(id)arg1;
- (id)imageForState:(int)arg1 theme:(const struct ThemeProvider *)arg2;
- (void)setImages;
- (void)viewDidMoveToWindow;
- (void)windowDidChangeActive;
- (void)windowDidChangeTheme;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)pointIsOverButton:(struct CGPoint)arg1;

@end
