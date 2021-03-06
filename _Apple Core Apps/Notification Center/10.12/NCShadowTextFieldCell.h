//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSShadow;

__attribute__((visibility("hidden")))
@interface NCShadowTextFieldCell : NSTextFieldCell
{
    BOOL _drawsShadow;
    NSShadow *_shadow;
}

@property(readonly, nonatomic) NSShadow *shadow; // @synthesize shadow=_shadow;
@property(nonatomic) BOOL drawsShadow; // @synthesize drawsShadow=_drawsShadow;
- (void).cxx_destruct;
- (void)layoutLayerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (unsigned long long)fontDilationStyle;
- (id)_textAttributes;
- (void)awakeFromNib;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

