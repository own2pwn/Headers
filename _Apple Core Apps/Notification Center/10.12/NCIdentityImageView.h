//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface NCIdentityImageView : NSImageView
{
    CALayer *_maskLayer;
    CALayer *_innerGlow;
    _Bool _layersSetup;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)awakeFromNib;

@end

