//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/HoverButton.h>

@class AutofillTooltipController;

@interface AutofillTooltip : HoverButton
{
    AutofillTooltipController *tooltipController_;
}

@property(nonatomic) AutofillTooltipController *tooltipController; // @synthesize tooltipController=tooltipController_;
- (BOOL)acceptsFirstResponder;
- (void)setHoverState:(int)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

