//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBrowserContainerController.h"

@interface TFFKContainerController : TBrowserContainerController
{
}

- (_Bool)sidebarIsVisible;
- (_Bool)shouldShowSidebarSplitter;
- (_Bool)shouldShowBottombarForTarget:(const struct TFENode *)arg1;
- (Class)browserClassForViewStyle:(id)arg1;
- (void)windowDidChange;
- (void)configurePreviewPane:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configurePersistentViewsWithState:(id)arg1;
- (id)browserViewContainerController;
- (void)tearDownAccessoryViews;
- (void)configureAccessoryViews;

@end
