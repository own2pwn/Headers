//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVolumeRestoreHelper : NSObject
{
    _Bool _eraseInProgress;
    _Bool _eraseSuccessful;
}

+ (id)xattrStringValueForKey:(id)arg1 url:(id)arg2;
- (_Bool)doesSnapshotPathSupportBooting:(id)arg1;
- (_Bool)isSnapshotPathAVolume:(id)arg1;
- (_Bool)isAtLeastMountainLion:(id)arg1;
- (_Bool)isSystemVolume:(id)arg1;

@end

