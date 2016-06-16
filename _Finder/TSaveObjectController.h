//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOpenSaveObjectController.h"

#import "TSavePanelCallbacks.h"

@class TSavePanel;

@interface TSaveObjectController : IOpenSaveObjectController <TSavePanelCallbacks>
{
    TSavePanel *_savePanel;
}

- (void)savePanelDidEnd:(id)arg1 returnCode:(long long)arg2;
- (_Bool)validateName:(const struct TString *)arg1 inDestination:(const struct TFENode *)arg2;
- (id)panel;
- (void)setName:(id)arg1;
- (void)setOptions:(int)arg1;
- (int)options;
- (int)defaultOptions;
- (void)dealloc;
- (id)init;

@end
