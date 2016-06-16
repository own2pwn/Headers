//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@interface TListBaseCellView : NSTableCellView
{
    double _textSize;
    _Bool _isEmphasized;
    _Bool _isDisabled;
    _Bool _isResizing;
}

@property(nonatomic, getter=isResizing) _Bool resizing; // @synthesize resizing=_isResizing;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_isDisabled;
@property(nonatomic, getter=isEmphasized) _Bool emphasized; // @synthesize emphasized=_isEmphasized;
@property(nonatomic) double textSize; // @synthesize textSize=_textSize;
- (struct CGSize)idealSize;
@property(readonly, nonatomic) _Bool isSelected; // @dynamic isSelected;
- (id)textColorForCurrentState;
- (void)setTextColors;
- (void)viewDidMoveToSuperview;
- (void)setBackgroundStyle:(long long)arg1;

@end
