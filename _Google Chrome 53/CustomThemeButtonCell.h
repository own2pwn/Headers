//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@interface CustomThemeButtonCell : NSButtonCell
{
    BOOL isThemedWindow_;
    BOOL hasError_;
}

- (void)setHasError:(BOOL)arg1 withTitle:(id)arg2;
- (void)setIsThemedWindow:(BOOL)arg1;
- (void)drawFocusRingMaskWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSize;
- (id)initWithThemedWindow:(BOOL)arg1;

@end

