//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class IOBluetoothL2CAPChannel;

@protocol IOBluetoothL2CAPChannelDelegate

@optional
- (void)l2capChannelQueueSpaceAvailable:(IOBluetoothL2CAPChannel *)arg1;
- (void)l2capChannelWriteComplete:(IOBluetoothL2CAPChannel *)arg1 refcon:(void *)arg2 status:(int)arg3;
- (void)l2capChannelReconfigured:(IOBluetoothL2CAPChannel *)arg1;
- (void)l2capChannelClosed:(IOBluetoothL2CAPChannel *)arg1;
- (void)l2capChannelOpenComplete:(IOBluetoothL2CAPChannel *)arg1 status:(int)arg2;
- (void)l2capChannelData:(IOBluetoothL2CAPChannel *)arg1 data:(void *)arg2 length:(unsigned long long)arg3;
@end

