//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface TAnimationLayer : NSView
{
    _Bool _selected;
    int _actionKind;
    struct CGRect _clipRect;
}

@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1 action:(int)arg2;

@end

