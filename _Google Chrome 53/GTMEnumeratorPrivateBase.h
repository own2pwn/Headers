//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@interface GTMEnumeratorPrivateBase : NSEnumerator
{
    NSEnumerator *base_;
    SEL operation_;
    id target_;
    id object_;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithBase:(id)arg1 sel:(SEL)arg2 target:(id)arg3 object:(id)arg4;

@end

