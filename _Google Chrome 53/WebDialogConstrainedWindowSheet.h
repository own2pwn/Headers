//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/CustomConstrainedWindowSheet.h>

@interface WebDialogConstrainedWindowSheet : CustomConstrainedWindowSheet
{
    struct CGSize current_size_;
    struct WebDialogDelegate *web_dialog_delegate_;
}

- (void)resizeWithNewSize:(struct CGSize)arg1;
- (void)updateSheetPosition;
- (id)initWithCustomWindow:(id)arg1 webDialogDelegate:(struct WebDialogDelegate *)arg2;

@end

