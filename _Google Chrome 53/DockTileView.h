//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface DockTileView : NSView
{
    int downloads_;
    BOOL indeterminate_;
    float progress_;
}

@property(nonatomic) float progress; // @synthesize progress=progress_;
@property(nonatomic) BOOL indeterminate; // @synthesize indeterminate=indeterminate_;
@property(nonatomic) int downloads; // @synthesize downloads=downloads_;
- (void)drawRect:(struct CGRect)arg1;

@end

