//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSStoryboardSegue, NSString;

@protocol NSSeguePerforming <NSObject>

@optional
- (BOOL)shouldPerformSegueWithIdentifier:(NSString *)arg1 sender:(id)arg2;
- (void)performSegueWithIdentifier:(NSString *)arg1 sender:(id)arg2;
- (void)prepareForSegue:(NSStoryboardSegue *)arg1 sender:(id)arg2;
@end

