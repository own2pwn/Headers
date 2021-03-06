//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/HyperlinkButtonCell.h>

@interface DetailToggleHyperlinkButtonCell : HyperlinkButtonCell
{
    unsigned long long permissionsDetailIndex_;
    int permissionsDetailType_;
    SEL linkClickedAction_;
}

+ (BOOL)prefersTrackingUntilMouseUp;
@property(nonatomic) SEL linkClickedAction; // @synthesize linkClickedAction=linkClickedAction_;
@property(nonatomic) int permissionsDetailType; // @synthesize permissionsDetailType=permissionsDetailType_;
@property(nonatomic) unsigned long long permissionsDetailIndex; // @synthesize permissionsDetailIndex=permissionsDetailIndex_;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)handleLinkClicked;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;

@end

