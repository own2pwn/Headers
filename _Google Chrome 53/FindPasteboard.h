//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FindPasteboard : NSObject
{
    struct scoped_nsobject<NSString> findText_;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFindText:(id)arg1;
- (id)findText;
- (void)loadTextFromPasteboard:(id)arg1;
- (id)findPboard;
- (void)dealloc;
- (id)init;

@end

