//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AnimatableImage;

@interface DownloadStartedAnimationMac : NSObject
{
    double imageWidth_;
    AnimatableImage *animation_;
}

+ (void)startAnimationWithWebContents:(struct WebContents *)arg1;
- (void)windowWillClose:(id)arg1;
- (void)parentWindowDidResize:(id)arg1;
- (void)dealloc;
- (id)initWithWebContents:(struct WebContents *)arg1;

@end
