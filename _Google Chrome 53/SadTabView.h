//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton;

@interface SadTabView : NSView
{
    struct scoped_nsobject<SadTabContainerView> container_;
}

+ (id)backgroundColor;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSButton *reloadButton;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)isFlipped;
- (id)makeBackingLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end
