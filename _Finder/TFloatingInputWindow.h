//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@interface TFloatingInputWindow : NSPanel
{
    struct TNSRef<TFloatingInputView *> _floatingInputView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (id)inputContext;
- (id)text;
- (void)setText:(id)arg1;
- (_Bool)preProcessedByInputMethod:(id)arg1 forDelegate:(id)arg2;
- (id)init;

@end

