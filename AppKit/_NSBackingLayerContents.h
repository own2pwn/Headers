//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer;

__attribute__((visibility("hidden")))
@interface _NSBackingLayerContents : NSObject
{
    CALayer *_backingLayer;
    CALayer *_contentLayer;
}

- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect)arg1;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect)arg1;
- (struct CGRect)NS_activeVisibleRect;
- (void *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)XXNS_tiledLayer:(id)arg1 drawTile:(id)arg2 inContext:(struct CGContext *)arg3;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)NS_canDrawLayer:(id)arg1;
- (void)display;
- (void)invalidateRect:(struct CGRect)arg1;
- (void)update;
@property CALayer *backingLayer;
- (Class)tileClass;
- (void)dealloc;
@property(readonly) CALayer *contentLayer;

@end

