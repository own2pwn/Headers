//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCWidgetRowCellView, NSString, NSView;

@interface NCWidget : NSObject
{
    BOOL _hidden;
    NSString *_widgetID;
    NSString *_path;
    double _width;
    NCWidgetRowCellView *_cellView;
}

@property BOOL hidden; // @synthesize hidden=_hidden;
@property NCWidgetRowCellView *cellView; // @synthesize cellView=_cellView;
@property(readonly) double width; // @synthesize width=_width;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSString *widgetID; // @synthesize widgetID=_widgetID;
- (void).cxx_destruct;
- (void)widgetLocationUpdated;
- (void)widgetViewShown;
- (void)widgetViewHidden;
- (void)widgetRemovedFromView;
- (void)widgetInsertedIntoView;
@property(readonly) NSString *accessibilityDescriptionKey;
@property(readonly) BOOL loading;
@property(readonly) BOOL available;
- (id)initWithID:(id)arg1 path:(id)arg2 width:(double)arg3;

// Remaining properties
@property(readonly) double height; // @dynamic height;
@property(readonly) NSView *view; // @dynamic view;

@end
