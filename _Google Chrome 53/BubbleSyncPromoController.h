//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextViewDelegate.h"

@class NSString;

@interface BubbleSyncPromoController : NSViewController <NSTextViewDelegate>
{
    struct Browser *browser_;
    scoped_nsobject_1b22b22f textView_;
    int promoStringId_;
    int linkStringId_;
    int accessPoint_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)loadView;
- (double)preferredHeightForWidth:(double)arg1;
@property(readonly, nonatomic) double borderWidth;
- (id)initWithBrowser:(struct Browser *)arg1 promoStringId:(int)arg2 linkStringId:(int)arg3 accessPoint:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

