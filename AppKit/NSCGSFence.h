//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface NSCGSFence : NSObject <NSCoding, NSCopying>
{
    unsigned int _port;
}

+ (BOOL)supportsSecureCoding;
+ (id)fence;
@property(readonly) unsigned int port;
@property(readonly, getter=isValid) BOOL valid;
- (void)invalidate;
- (void)set;
- (void)finalize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (id)init;

@end

