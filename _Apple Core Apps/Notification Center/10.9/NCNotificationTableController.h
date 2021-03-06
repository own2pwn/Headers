//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NCAppHeaderGroupViewDelegate.h"
#import "NCNotificationCenterDelegate.h"
#import "NCTableViewDelegate.h"
#import "NSTableViewDataSource.h"

@class NCDNDWidget, NCNotificationTableCellView, NCShadowTextFieldCell, NCStatusButtonCell, NCTableView, NCTexturedView, NSArray, NSButton, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_source>, NSPanel, NSScrollView, NSTextField, NSTrackingArea, NSView, QLPreviewBubble;

@interface NCNotificationTableController : NSObject <NCTableViewDelegate, NSTableViewDataSource, NCNotificationCenterDelegate, NCAppHeaderGroupViewDelegate>
{
    NSMutableArray *_widgets;
    NSMutableDictionary *_widgetsByID;
    NSMutableArray *_tableCache;
    NSView *_sizingParentView;
    NCNotificationTableCellView *_sizingNotificationRowView;
    NCNotificationTableCellView *_sizingProgressRowView;
    BOOL _quicklooksEnabled;
    QLPreviewBubble *_previewBubble;
    NSTrackingArea *_previewTrackingArea;
    NSObject<OS_dispatch_source> *_date_update_timer;
    NCDNDWidget *_dndWidget;
    double _tableWidth;
    double _centerWidth;
    BOOL _tableNeedsReload;
    BOOL _tableHiding;
    int _timeToken;
    id <NCNotificationTableDataSource> _dataSource;
    _Bool _showDNDonNextOpen;
    NSPanel *_window;
    NCTexturedView *_texturedBackground;
    NCTableView *_tableView;
    NSScrollView *_tableScrollView;
    NSTextField *_noMessagesTF;
    NCStatusButtonCell *_statusButton;
    NSView *_statusView;
    NCShadowTextFieldCell *_fullScreenTextCell;
    NSView *_centeringContainer;
    NSLayoutConstraint *_tableTopConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_centerLeftConstraint;
    NSLayoutConstraint *_centeringWidthConstraint;
    NSButton *_prefsButton;
}

@property _Bool showDNDonNextOpen; // @synthesize showDNDonNextOpen=_showDNDonNextOpen;
@property NSButton *prefsButton; // @synthesize prefsButton=_prefsButton;
@property NSLayoutConstraint *centeringWidthConstraint; // @synthesize centeringWidthConstraint=_centeringWidthConstraint;
@property NSLayoutConstraint *centerLeftConstraint; // @synthesize centerLeftConstraint=_centerLeftConstraint;
@property NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) NSArray *widgets; // @synthesize widgets=_widgets;
@property(readonly, nonatomic) id <NCNotificationTableDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property NSLayoutConstraint *_tableTopConstraint; // @synthesize _tableTopConstraint;
@property(readonly, nonatomic) NCDNDWidget *doNotDisturbWidget; // @synthesize doNotDisturbWidget=_dndWidget;
@property NSView *centeringContainer; // @synthesize centeringContainer=_centeringContainer;
@property NCShadowTextFieldCell *fullScreenTextCell; // @synthesize fullScreenTextCell=_fullScreenTextCell;
@property NSView *statusView; // @synthesize statusView=_statusView;
@property NCStatusButtonCell *statusButton; // @synthesize statusButton=_statusButton;
@property NSTextField *noMessagesTF; // @synthesize noMessagesTF=_noMessagesTF;
@property NSScrollView *tableScrollView; // @synthesize tableScrollView=_tableScrollView;
@property(readonly, nonatomic) double centerWidth; // @synthesize centerWidth=_centerWidth;
@property(readonly, nonatomic) double tableWidth; // @synthesize tableWidth=_tableWidth;
@property NCTableView *tableView; // @synthesize tableView=_tableView;
@property NCTexturedView *texturedBackground; // @synthesize texturedBackground=_texturedBackground;
@property(retain) NSPanel *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (BOOL)ncTableView:(id)arg1 keyDown:(id)arg2;
- (BOOL)_tabSelectPreviousKeyView;
- (BOOL)_tabSelectNextKeyView;
- (BOOL)_rowHasKeyNavigatableControls:(long long)arg1;
- (id)ncTableView:(id)arg1 contextualMenuForColumn:(long long)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)windowHeightAndTopOffset:(CDUnknownBlockType)arg1;
- (void)notificationCenter:(id)arg1 progressRemoved:(id)arg2;
- (void)notificationCenter:(id)arg1 progressAdded:(id)arg2;
- (void)notificationCenter:(id)arg1 hasUnreadNotifications:(BOOL)arg2;
- (void)notificationCenter:(id)arg1 alertChanged:(id)arg2 forApplication:(id)arg3;
- (void)notificationCenter:(id)arg1 restoreSnoozedAlert:(id)arg2 forApplication:(id)arg3;
- (void)notificationCenter:(id)arg1 clearBannersForApplication:(id)arg2;
- (void)notificationCenter:(id)arg1 removeDisplayedNotification:(id)arg2 forApplication:(id)arg3;
- (void)notificationCenter:(id)arg1 applicationRemoved:(id)arg2;
- (void)notificationCenter:(id)arg1 restoreAlerts:(id)arg2 forApplication:(id)arg3;
- (void)notificationCenter:(id)arg1 presentNotification:(id)arg2 forApplication:(id)arg3 withUnpresentedCount:(unsigned long long)arg4;
- (void)notificationCenter:(id)arg1 applicationUpdated:(id)arg2;
- (void)_reloadTableNow;
- (void)notificationCenter:(id)arg1 applicationOrderChanged:(id)arg2;
- (void)notificationCenterDataReloaded:(id)arg1;
- (void)notificationCenterConnectionError:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)debugDump:(id)arg1;
- (void)_widgetLoaded:(id)arg1;
- (void)_updateWidgetList;
- (void)_widgetHeightUpdated:(id)arg1;
- (void)tableScrolled:(id)arg1;
- (void)_tableResized:(id)arg1;
- (id)_makeNewProgressTableViewCellView;
- (id)_makeNewNotificationsTableViewCellView;
- (unsigned long long)_insertionRowForApplicationModel:(id)arg1;
- (id)_notificationsBeingDisplayedForApplication:(id)arg1 withRowOffset:(unsigned long long *)arg2;
- (id)_appModelForRow:(long long)arg1;
- (id)_objectForRow:(long long)arg1;
- (void)_updateDividerState:(BOOL)arg1;
- (void)_reloadTableCache;
- (void)_updateViewSize;
- (void)rowPressed:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)_showQuicklookForRow:(long long)arg1;
- (void)setFailedToConnect;
- (void)hideQuicklookIfShowing;
- (void)tableWasHidden;
- (void)tableWillBeHidden;
- (void)tableWillBeShown;
- (void)updateTimesInTable;
- (void)scrollApplicationInView:(id)arg1;
- (void)layoutForDisplay:(unsigned int)arg1;
- (void)launchPreferences:(id)arg1;
- (void)doNotDistributModeChanged:(id)arg1;
- (void)statusButtonClicked:(id)arg1;
- (void)clearButtonClicked:(id)arg1;
@property(nonatomic) double bottomAdjustment;
- (void)dealloc;
- (id)initWithBottomConstraint:(double)arg1 spaces:(id)arg2 dataSource:(id)arg3 forDebug:(_Bool)arg4;

@end

