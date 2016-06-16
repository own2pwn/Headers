//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TIconView;

@interface TAccessibilityUIElement : NSObject
{
    unsigned long long _index;
    struct TNSRef<NSString *> _title;
    struct TNSRef<TIconView *> _parent;
    struct _NSRange _range;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (struct CGRect)axFrame;
- (id)axHelp;
- (id)axTitle;
- (id)axRole;
- (id)title;
@property(retain) TIconView *parent;
- (unsigned long long)index;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1 groupInfo:(id)arg2 parent:(id)arg3;

@end
