//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@interface TAirDropDiscoverableModePopoverViewController : TViewController
{
    struct TNSRef<TPopoverController *> _popoverController;
    long long _discoverableMode;
}

@property(nonatomic) long long discoverableMode; // @synthesize discoverableMode=_discoverableMode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)radioButtonPressed:(id)arg1;
- (id)buttonNameForDiscoverableMode:(long long)arg1;
- (id)radioButtonForDiscoverableMode:(long long)arg1;
- (void)setPopoverController:(id)arg1;
- (id)nibName;
- (void)viewLoaded;

@end
