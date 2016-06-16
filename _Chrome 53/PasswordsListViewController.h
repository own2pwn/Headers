//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "PasswordItemDelegate.h"

@class NSArray, NSString;

@interface PasswordsListViewController : NSViewController <PasswordItemDelegate>
{
    struct ManagePasswordsBubbleModel *model_;
    struct scoped_nsobject<NSArray> itemViews_;
    double firstColumnMaxWidth_;
    double secondColumnMaxWidth_;
}

@property(readonly, nonatomic) double secondColumnMaxWidth; // @synthesize secondColumnMaxWidth=secondColumnMaxWidth_;
@property(readonly, nonatomic) double firstColumnMaxWidth; // @synthesize firstColumnMaxWidth=firstColumnMaxWidth_;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct ManagePasswordsBubbleModel *model;
- (void)loadView;
- (id)initWithModel:(struct ManagePasswordsBubbleModel *)arg1 forms:(const vector_3b4afad3 *)arg2;
@property(readonly) NSArray *itemViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
