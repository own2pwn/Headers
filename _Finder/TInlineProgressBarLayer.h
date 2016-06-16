//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLayer.h"

@interface TInlineProgressBarLayer : TLayer
{
    double _percentComplete;
    unsigned int _state;
    int _flatProgressVariant;
    _Bool _selected;
    _Bool _keepingAnimationAlive;
}

+ (BOOL)needsDisplayForKey:(id)arg1;
@property _Bool selected; // @synthesize selected=_selected;
@property int flatProgressVariant; // @synthesize flatProgressVariant=_flatProgressVariant;
@property unsigned int state; // @synthesize state=_state;
@property double percentComplete; // @synthesize percentComplete=_percentComplete;
- (void)keepAnimationAlive;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)setPercentCompleteAnimated:(double)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initVariant:(int)arg1;

@end
