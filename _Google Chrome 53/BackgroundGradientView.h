//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "ThemedWindowDrawing.h"

@interface BackgroundGradientView : NSView <ThemedWindowDrawing>
{
    BOOL showsDivider_;
}

@property(nonatomic) BOOL showsDivider; // @synthesize showsDivider=showsDivider_;
- (void)windowDidChangeActive;
- (void)windowDidChangeTheme;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)viewDidMoveToWindow;
- (id)backgroundImageColor;
- (id)strokeColor;
- (void)drawBackground:(struct CGRect)arg1;
- (struct CGPoint)patternPhase;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

