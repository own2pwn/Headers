//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSToolbarItem.h>

@interface _NSToolbarGapItem : NSToolbarItem
{
    double resizeWeight;
    BOOL resizeWeightSharedWithDuplicateItems;
    NSToolbarItem *_proxiedToolbarItem;
}

- (id)proxiedToolbarItem;
- (BOOL)_resizeWeightSharedWithDuplicateItems;
- (double)_resizeWeight;
- (void)configureAsProxyForItem:(id)arg1 usingMetrics:(const struct __NSToolbarMetrics *)arg2;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)arg1;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)arg1;

@end

