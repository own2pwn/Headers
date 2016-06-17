//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface GTMABMultiValue : NSObject <NSCopying, NSMutableCopying>
{
    struct __ABMultiValue *multiValue_;
}

- (id)labelEnumerator;
- (id)valueEnumerator;
- (unsigned long long *)mutations;
- (id)labelForIdentifier:(id)arg1;
- (id)valueForIdentifier:(id)arg1;
- (long long)propertyType;
- (unsigned long long)indexForIdentifier:(id)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)labelAtIndex:(unsigned long long)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (struct __ABMultiValue *)multiValueRef;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMultiValue:(struct __ABMultiValue *)arg1;
- (id)init;

@end
