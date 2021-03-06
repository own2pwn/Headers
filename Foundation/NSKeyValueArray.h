//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

#import "NSKeyValueProxyCaching.h"

@class NSKeyValueNonmutatingArrayMethodSet, NSObject, NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueArray : NSArray <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
    NSKeyValueNonmutatingArrayMethodSet *_methods;
}

+ (id)_proxyShare;
+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
- (id)objectsAtIndexes:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)count;
- (void)dealloc;
- (void)_proxyNonGCFinalize;
- (CDStruct_a70f6672)_proxyLocator;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

@end

