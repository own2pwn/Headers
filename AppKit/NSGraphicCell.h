//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSCell.h>

@interface NSGraphicCell : NSCell
{
}

+ (void)initialize;
- (id)richTextForView:(id)arg1;
- (struct CGSize)cellSize;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)setImageNamed:(id)arg1 forView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;

@end

