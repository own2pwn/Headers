//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface _NSBinderPluginRegistry : NSObject
{
    NSMapTable *_registry;
    NSMapTable *_cachedRegistry;
}

+ (id)sharedRegistry;
- (Class)pluginClassForObject:(id)arg1 andBinderClass:(Class)arg2 requiredPluginProtocol:(id)arg3;
- (void)registerPluginClass:(Class)arg1 forObjectClass:(Class)arg2 andBinderClass:(Class)arg3;
- (void)dealloc;
- (id)init;

@end

