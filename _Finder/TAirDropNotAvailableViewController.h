//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

@class NSString, TImageView, TTextField;

@interface TAirDropNotAvailableViewController : TViewController
{
    TImageView *_imageView;
    TTextField *_explanationTextFld;
    struct TNSRef<id<TAirDropNotAvailableDelegateProtocol>> _delegate;
}

+ (id)keyPathsForValuesAffectingButtonTitle;
+ (id)keyPathsForValuesAffectingExplanationText;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)actionButtonPressed:(id)arg1;
@property(readonly, retain, nonatomic) NSString *buttonTitle; // @dynamic buttonTitle;
@property(readonly, retain, nonatomic) NSString *explanationText; // @dynamic explanationText;
@property(readonly, nonatomic) _Bool noWifiOrBluetoothMode; // @dynamic noWifiOrBluetoothMode;
@property(readonly, nonatomic) _Bool noBluetoothMode; // @dynamic noBluetoothMode;
@property(readonly, nonatomic) _Bool wiFiAccessPointNotAllowedMode; // @dynamic wiFiAccessPointNotAllowedMode;
@property(readonly, nonatomic) _Bool compToCompNotAllowedMode; // @dynamic compToCompNotAllowedMode;
@property(readonly, nonatomic) _Bool noWiFiMode; // @dynamic noWiFiMode;
@property(retain) id <TAirDropNotAvailableDelegateProtocol> delegate; // @dynamic delegate;
- (id)nibName;
- (void)viewLoaded;
- (id)initForNoWiFiOrBluetooth;
- (id)initForNoBluetooth;
- (id)initForWiFiAccessPointNotAllowed;
- (id)initForCompToCompNotAllowed;
- (id)initForNoWiFi;

@end
