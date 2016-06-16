//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPropertyValueController.h"

@class IPropertyValueApplicator;

@interface IPropertyValueApplicatorController : IPropertyValueController
{
    struct TNSRef<IPropertyValueApplicator *> _valueApplicator;
    struct TFENodeVector _nodes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canModifyNodes:(const struct TFENodeVector *)arg1;
- (void)nodesDidChange;
- (const struct TFENodeVector *)nodes;
- (void)nodesWillChange;
- (int)applyValueToNodes:(id)arg1;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
@property(retain) IPropertyValueApplicator *valueApplicator; // @dynamic valueApplicator;

@end
