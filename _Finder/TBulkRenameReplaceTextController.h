//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBulkRenameFormatterController.h"

@class NSTextField;

@interface TBulkRenameReplaceTextController : TBulkRenameFormatterController
{
    NSTextField *_findFld;
    NSTextField *_replaceFld;
    struct TNotificationCenterObserver _findTextDidChangeObserver;
    struct TNotificationCenterObserver _replaceTextDidChangeObserver;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)reformat:(id)arg1 row:(unsigned long long)arg2;
- (_Bool)resetCounterForEachFile;
- (_Bool)allowRename;
- (id)displayName;
- (int)formatterType;
- (void)aboutToTearDown;
- (void)viewLoaded;

@end
