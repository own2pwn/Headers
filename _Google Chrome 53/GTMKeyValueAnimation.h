//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAnimation.h"

@class NSString;

@interface GTMKeyValueAnimation : NSAnimation
{
    id target_;
    NSString *keyPath_;
}

- (id)keyPath;
- (id)target;
- (void)setCurrentProgress:(float)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2;

@end

