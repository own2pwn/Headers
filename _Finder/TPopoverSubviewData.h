//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TPopoverSubviewData : NSObject
{
    struct TNSRef<TView *> _subview;
    struct TNSRef<TLayoutBinder *> _layoutBinder;
    struct TNSRef<TGradientSeparator *> _separator;
    struct TNSRef<TLayoutBinder *> _separatorLayoutBinder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeSeparator;
- (void)addSeparator;
- (id)layoutBinder;
- (id)subview;
- (void)dealloc;
- (id)initWithSubview:(id)arg1;

@end

