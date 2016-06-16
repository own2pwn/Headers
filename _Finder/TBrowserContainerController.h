//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TViewController.h"

#import "TNodeObserverProtocol.h"
#import "TSaveSearchSheetControllerDelegate.h"
#import "TStatusBarDelegateProtocol.h"
#import "TTagColumnTableViewControllerDelegate.h"
#import "TValidatorClientProtocol.h"

@class NSString, NSView, NSViewController, TBackupContainerDelegate, TBrowserViewController, TNodeViewSettings, TSidebarSplitViewController;

@interface TBrowserContainerController : TViewController <TNodeObserverProtocol, TSaveSearchSheetControllerDelegate, TStatusBarDelegateProtocol, TValidatorClientProtocol, TTagColumnTableViewControllerDelegate>
{
    _Bool _containerIsBeingCreated;
    struct NSObject *_delegate;
    struct TNSRef<TBackupContainerDelegate *> _backupDelegate;
    TBrowserViewController *_browserViewController;
    struct TFENodeVector _targetPath;
    struct unique_ptr<TNodeObserverCocoaBridge, std::__1::default_delete<TNodeObserverCocoaBridge>> _targetPathObserver;
    _Bool _targetNodeIsBrowsable;
    struct TNSRef<TNodeViewSettings *> _viewSettings;
    struct TNSRef<TBrowserViewDataSource *> _dataSource;
    NSViewController *_bannerViewController;
    struct TNSRef<TBrowserViewSwitchAnimator *> _viewSwitchAnimator;
    struct TNSRef<TWindowHistory *> _history;
    struct TFENodeVector _springRememberedTargetPath;
    NSString *_springRememberedViewStyle;
    unsigned long long _itemCount;
    unsigned long long _selectedNodesCount;
    struct TNSRef<NSString *> _viewStyle;
    struct TString _previousViewStyleSeenByDelegates;
    NSString *_defaultViewStyle;
    struct TFENode _initialTarget;
    _Bool _forceSetTargetPath;
    _Bool _targetIsPopulated;
    struct TNSRef<NSString *> _groupBy;
    _Bool _binding;
    _Bool _doNotResetFirstResponder;
    _Bool _isPopulationInProgress;
    _Bool _isSearchInProgress;
    _Bool _smartDiscardTargetIsStored;
    _Bool _smartDiscardRebuildView;
    int _smartDiscardSearchAction;
    struct TFENodeVector _smartDiscardTargetPath;
    NSString *_smartDiscardViewStyle;
    struct unique_ptr<TNodeObserverCocoaBridge, std::__1::default_delete<TNodeObserverCocoaBridge>> _publishedFolderNodeObserver;
    NSView *_cachedBrowserBaseView;
    long long _validatorID;
    unsigned long long _serialID;
    struct TString _suggestionsScopeQuery;
    _Bool _usesSuggestions;
    _Bool _hasSwitchedSorts;
    struct TNSRef<NSTimer *> _spinnerStartTimer;
    struct TNSRef<NSTimer *> _spinnerEndCheckTimer;
    _Bool _wantToShowSpinner;
    struct TNotificationCenterObserver _alwaysOpenWithChangedObserver;
    struct TNotificationCenterObserver _airDropAvailabilityChangedObserver;
    struct TNotificationCenterObserver _iCloudOverQuotaChangedObserver;
    struct TNotificationCenterObserver _viewDidMoveToWindowObserver;
    struct TKeyValueBinder _groupByBinder;
    struct TKeyValueBinder _selectedNodesCountBinder;
    struct TKeyValueBinder _itemCountBinder;
    struct TNSRef<TSidebarSplitViewController *> _sidebarSplitViewController;
    struct TNotificationCenterObserver _isSidebarCollapsedObserver;
    _Bool _showSidebar;
}

+ (_Bool)shouldShowBottombarForTarget:(const struct TFENode *)arg1;
+ (id)defaultContainerStateForNode:(const struct TFENode *)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)shouldForwardSelectorToViewController:(SEL)arg1;
+ (_Bool)suggestionsFrameworkAvailable;
+ (id)defaultFileSuggesters;
+ (void)initialize;
@property(retain, nonatomic) NSString *defaultViewStyle; // @synthesize defaultViewStyle=_defaultViewStyle;
@property(nonatomic) _Bool hasSwitchedSorts; // @synthesize hasSwitchedSorts=_hasSwitchedSorts;
@property(nonatomic) _Bool isSearchInProgress; // @synthesize isSearchInProgress=_isSearchInProgress;
@property(nonatomic) _Bool isPopulationInProgress; // @synthesize isPopulationInProgress=_isPopulationInProgress;
@property(nonatomic) _Bool binding; // @synthesize binding=_binding;
@property(retain, nonatomic) NSView *cachedBrowserBaseView; // @synthesize cachedBrowserBaseView=_cachedBrowserBaseView;
@property(nonatomic) int smartDiscardSearchAction; // @synthesize smartDiscardSearchAction=_smartDiscardSearchAction;
@property(nonatomic) _Bool targetIsPopulated; // @synthesize targetIsPopulated=_targetIsPopulated;
@property(nonatomic) unsigned long long selectedNodesCount; // @synthesize selectedNodesCount=_selectedNodesCount;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(readonly, retain) TBrowserViewController *browserViewController; // @synthesize browserViewController=_browserViewController;
@property(readonly, nonatomic) _Bool containerIsBeingCreated; // @synthesize containerIsBeingCreated=_containerIsBeingCreated;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)saveShowSidebarStateToPrefs;
- (void)sidebarDidChangeCollapsedState:(id)arg1;
- (void)cmdTogglePreviewPane:(id)arg1;
- (_Bool)validateTogglePreviewPane:(id)arg1;
- (struct CGRect)previewColumnFrameInWindow;
- (void)configurePreviewPane:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updatePreviewPaneTarget;
- (struct TFENode)previewPaneTarget;
- (_Bool)canShowPreviewPane;
- (_Bool)previewColumnIsVisible;
- (void)configureTagsColumn:(_Bool)arg1;
- (_Bool)tagsColumnHasFocus;
- (struct CGRect)tagsColumnFrameInWindow;
- (_Bool)tagsColumnIsVisible;
- (_Bool)shouldShowTagsColumn;
- (void)configureBrowserSplitView;
- (id)browserSplitViewController;
- (void)setSidebarWidthForScripting:(double)arg1;
- (double)sidebarWidthForScripting;
- (_Bool)nodeIsDimmed:(const struct TFENode *)arg1;
- (void)iCloudIsOverQuotaDidChange;
- (void)publishedFolderListDidChange;
- (void)nodeObserver:(struct TNodeObserver *)arg1 aliasTargetChanged:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeGoingAway:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeMoved:(const struct TFENode *)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeDeleted:(const struct TFENode *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeChanged:(const struct TFENode *)arg2 inObservedNode:(const struct TFENode *)arg3 property:(unsigned int)arg4;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeAdded:(const struct TFENode *)arg2 toObservedNode:(const struct TFENode *)arg3;
- (void)configureAccessoryViews:(id)arg1;
- (void)configureAccessoryViewsForTargetChange;
- (void)configurePersistentViewsWithState:(id)arg1;
- (_Bool)isShowingICloudDriveContent;
- (void)createBrowserViewWithViewStyle:(id)arg1 containerState:(id)arg2;
- (Class)iconBrowserClassForTarget;
- (Class)browserClassForViewStyle:(id)arg1;
- (_Bool)browserDefaultsToGroupView;
- (void)destroyBrowserView:(_Bool)arg1;
- (_Bool)containerCanClose;
- (void)aboutToTearDown;
- (void)closeContainer;
- (void)switchToViewStyle:(id)arg1;
- (void)setPreferredViewStyle:(id)arg1;
@property(retain, nonatomic) NSString *viewStyle;
- (void)finishedInstallingContainer;
- (void)buildBrowserView:(_Bool)arg1 containerState:(id)arg2;
- (void)buildBrowserView:(_Bool)arg1;
- (void)setupViewSwitchAnimator;
- (id)viewSwitchAnimator;
- (void)updateWindowRestoreState;
- (id)browserViewContainerController;
- (struct CGRect)browserViewContainerBounds;
- (struct CGRect)browserColumnFrameInWindow;
- (id)browserViewContainer;
- (struct CGImage *)newSidebarImageForFullScreenAnimationInitialCoverWindow:(struct CGRect *)arg1;
- (struct CGImage *)newSidebarImageForFullScreenAnimation:(struct CGRect *)arg1;
- (struct CGRect)sidebarColumnFrameInWindow:(_Bool)arg1;
@property(readonly, nonatomic) long long validatorID;
- (struct CGSize)idealContentSize;
- (void)windowDidChange;
- (void)containerContentChanged;
- (_Bool)validateForward:(id)arg1;
- (_Bool)validateBack:(id)arg1;
- (void)historyChanged;
- (void)cmdToggleSearchSlices:(id)arg1;
- (_Bool)validateToggleSearchSlices:(id)arg1;
- (void)tagColumnTableViewController:(id)arg1 selectedTagNodeChanged:(const struct TFENode *)arg2;
- (id)browserViewControllerForTagColumn:(id)arg1;
- (void)cmdToggleBottombar:(id)arg1;
- (_Bool)validateToggleBottombar:(id)arg1;
- (void)cmdRenameInAllTagsColumn:(id)arg1;
- (_Bool)validateRenameInAllTagsColumn:(id)arg1;
- (void)cmdRemoveFromSidebar:(id)arg1;
- (_Bool)validateRemoveFromSidebar:(id)arg1;
- (void)cmdRenameInSidebar:(id)arg1;
- (_Bool)validateRenameInSidebar:(id)arg1;
- (void)cmdToggleSidebar:(id)arg1;
- (_Bool)validateToggleSidebar:(id)arg1;
- (void)didBecomeActiveTab;
- (void)cmdViewAsFlow:(id)arg1;
- (_Bool)validateViewAsFlow:(id)arg1;
- (void)cmdViewAsColumns:(id)arg1;
- (_Bool)validateViewAsColumns:(id)arg1;
- (void)cmdViewAsList:(id)arg1;
- (_Bool)validateViewAsList:(id)arg1;
- (void)cmdViewAsIcons:(id)arg1;
- (_Bool)validateViewAsIcons:(id)arg1;
- (void)cmdViewAsSubmenu:(id)arg1;
- (void)windowDidChangeOcclusionState:(id)arg1;
- (BOOL)validateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1 withObject:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)saveQuery:(_Bool)arg1;
- (id)userSearchSlices;
- (int)saveSearchWithName:(const struct TString *)arg1 inDestination:(const struct TFENode *)arg2 addToSidebar:(_Bool)arg3;
- (void)searchSaveSheetDismissedWithCode:(long long)arg1;
- (void)searchWasSaved;
- (void)configureForSearchAction:(int)arg1 forSearchString:(id)arg2;
- (void)addingSearchToolbarItem:(id)arg1;
- (void)searchFieldTextChanged;
- (struct TString)backupBrowserSnapshotPath;
- (id)currentSearchField;
- (_Bool)panelDisableNode:(const struct TFENode *)arg1;
- (_Bool)allowsBrowsingPackages;
- (_Bool)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (_Bool)canBrowseNode:(const struct TFENode *)arg1;
- (_Bool)isAppCentric;
- (_Bool)isICloud;
- (_Bool)allowsNewDocumentButton;
- (_Bool)shouldShowBottombarForTarget:(const struct TFENode *)arg1;
- (void)airDropAvailabilityChanged;
- (void)configureForAirDrop:(_Bool)arg1;
- (id)splitViewForToolbarAlignment;
- (_Bool)sidebarIsVisible;
- (_Bool)shouldShowSidebarSplitter;
- (_Bool)isSprungAwayFromOriginalTarget;
- (void)revertToPreviousSpringState;
- (void)receivingDrag;
- (void)forgetSpringState;
- (void)rememberSpringState;
- (void)createImage:(struct CGImage **)arg1 andFrame:(struct CGRect *)arg2 forView:(id)arg3;
- (void)retargetOnDeletedNode:(struct TFENode)arg1;
- (void)configureSidebarForMode:(_Bool)arg1;
- (id)containingOpenPanel;
- (id)window;
- (_Bool)inBrowseMode;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowWillStartLiveResize:(id)arg1;
- (void)reduceRootedPath:(struct TFENodeVector *)arg1;
- (struct TFENode)sidebarTarget;
- (_Bool)truncateTargetPathAtNode:(const struct TFENode *)arg1 selectNode:(_Bool)arg2;
- (void)targetPathAliasTargetChanged:(const struct TFENode *)arg1;
- (void)targetPathNodeGoingAway:(const struct TFENode *)arg1;
- (void)targetPathNodeMoved:(const struct TFENode *)arg1;
- (void)targetPathNodeDeleted:(const struct TFENode *)arg1;
- (void)targetPathNodeChanged:(const struct TFENode *)arg1 property:(unsigned int)arg2;
- (void)updateTargetPathObserver:(const struct TFENodeVector *)arg1 newTargetPath:(const struct TFENodeVector *)arg2;
- (void)openLocation:(const struct TFENode *)arg1 origin:(shared_ptr_3b64c573)arg2;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (void)openSelection;
- (_Bool)closeOrRetargetContainerForTarget:(const struct TFENode *)arg1 path:(const struct TFENodeVector *)arg2 browserValidatorID:(long long)arg3;
- (void)replaceUnresolvedTarget:(const struct TFENode *)arg1 withTarget:(const struct TFENode *)arg2;
- (void)backForwardCommon:(_Bool)arg1;
- (void)gotoHistoryEntry:(id)arg1;
- (const struct TFENodeVector *)targetPath;
- (const struct TFENode *)initialTarget;
- (struct TFENode)target;
- (void)setTargetPath:(const struct TFENodeVector *)arg1;
- (void)forceSetTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (void)notifyViewStyleChanged;
- (void)notifyTargetPathChanged;
- (void)notifyTargetPathWillChange;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2 rebuildView:(_Bool)arg3;
- (void)retargetToNodeAndComputePath:(const struct TFENode *)arg1;
- (void)alwaysOpenWithChanged;
- (void)showDiscardSmartFolderSheetForAction:(int)arg1;
- (void)showDiscardSmartFolderSheetForAction:(int)arg1 target:(const struct TFENodeVector *)arg2 viewStyle:(id)arg3 rebuildView:(_Bool)arg4;
- (void)completeSetTargetWithStoredValues;
- (void)updateSidebarSelectionForCurrentTarget;
- (_Bool)browserViewHasFocus;
- (void)selectNodesLater:(const struct TFENodeVector *)arg1;
- (void)selectNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (unsigned long long)getSelectedNodes:(struct TFENodeVector *)arg1 upTo:(unsigned long long)arg2;
- (void)browserSelectionChanged;
- (void)configureContainerWithState:(id)arg1;
- (void)addToHistory:(const struct TFENodeVector *)arg1 windowState:(id)arg2;
- (void)unlockOverlayScrollerStateOnMainThread;
- (void)unlockOverlayScrollerState;
- (void)lockOverlayScrollersToHiddenState;
- (void)viewContentChanged;
- (id)nodeViewSettings;
- (void)setCurrentSearchFieldState:(id)arg1;
- (id)currentSearchFieldState;
- (id)containerState:(_Bool)arg1;
- (id)windowState;
- (id)viewStyleFromState:(id)arg1;
- (_Bool)isDesktop;
- (void)viewDidAppear;
- (void)viewLoaded;
- (id)initWithWindowState:(id)arg1 targetPath:(const struct TFENodeVector *)arg2 containerDelegate:(struct NSObject *)arg3;
- (void)initCommon;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)configureBigSpinner:(_Bool)arg1;
- (void)startBigSpinner;
- (void)checkSpinnerEnd;
- (void)stopSpinnerEndCheckTimer;
- (void)stopSpinnerStartTimer;
- (_Bool)shouldShowBigSpinner;
- (void)populationOccurredTo:(unsigned long long)arg1 isTarget:(_Bool)arg2;
- (_Bool)isBigSpinnerInProgress;
- (struct TFENode)parentNodeToOpen:(const struct TFENode *)arg1;
- (struct TString)pathPrettyStringForNode:(struct TFENode)arg1;
- (void)popupPathForNode:(const struct TFENode *)arg1 outPath:(struct TFENodeVector *)arg2;
- (struct TFENode)mapToUserVisibleCloudLocation:(const struct TFENode *)arg1;
- (struct TFENode)theICloudNode;
- (_Bool)isTheICloudNode:(const struct TFENode *)arg1;
- (struct TFENode)mobileDocumentsFolderForNode:(struct TFENode)arg1;
- (struct TString)titleForICloudContainer:(const struct TFENode *)arg1;
- (struct TFENode)cloudContainerForNode:(const struct TFENode *)arg1;
- (int)cloudFolderTypeForNode:(const struct TFENode *)arg1;
- (_Bool)nodeIsAnICloudRoot:(const struct TFENode *)arg1;
- (_Bool)iCloudNodeIsUserVisible:(const struct TFENode *)arg1;
- (_Bool)targetHasCloudLibraries;
- (struct TFENode)cloudLibrariesContainer;
- (struct TFENode)cloudDocsNodeForNode:(struct TFENode)arg1;
- (_Bool)nodeShouldShowICloudSortButtons:(const struct TFENode *)arg1;
- (_Bool)nodeIsInICloud:(const struct TFENode *)arg1 allowQueryHits:(_Bool)arg2;
- (_Bool)isBackupDeleteAllowed;
- (_Bool)isValidTargetForSnapshot:(const struct TFENode *)arg1;
- (void)mapBackupSelectionToContainer:(const struct TFENode *)arg1 outSelection:(struct TFENodeVector *)arg2;
- (id)restoreImages;
- (struct TFENode)nodeForPath:(const struct TString *)arg1 options:(unsigned int)arg2;
- (struct TString)pathForOriginalAbsolutePath:(const struct TString *)arg1;
- (struct TFENode)targetForOriginalNode:(const struct TFENode *)arg1;
- (struct TFENode)liveViewSettingsNodeForNode:(const struct TFENode *)arg1;
- (struct TFENode)originalNodeForNode:(const struct TFENode *)arg1;
- (void)adjustWindowProxyNode:(struct TFENode *)arg1;
- (const struct TFENode *)snapshotNode;
- (struct TTimeMachineTarget *)snapshotTarget;
@property(readonly, nonatomic) _Bool isTimeMachineBrowser;
- (_Bool)isSnapshotImageBrowser;
- (_Bool)isBackupBrowser;
- (void)newTargetPathForNode:(const struct TFENode *)arg1 existingPath:(const struct TFENodeVector *)arg2 newPath:(struct TFENodeVector *)arg3;
- (void)cmdGotoHistoryPosition:(id)arg1;
- (id)history;
- (void)cmdForward:(id)arg1;
- (void)cmdBack:(id)arg1;
- (_Bool)validateCopyQueryInformation:(id)arg1;
- (void)cmdCopyQueryInformation:(id)arg1;
- (void)searchWasChanged;
- (_Bool)searchSlicesAreVisible;
- (_Bool)shouldUseSuggestions;
- (struct TString)searchScopeName;
- (void)tryFocusingSearchField;
- (id)searchFieldText;
- (_Bool)targetIsEditedSmartFolder;
- (_Bool)targetIsUnsavedSmartFolder;
- (void)setBottomBarTarget;
- (void)configureBottombar:(_Bool)arg1;
- (void)setBottomBarContentInset:(double)arg1;
- (_Bool)bottombarIsVisible;
- (void)setTopBarContentInset:(double)arg1;
- (void)configureBanner;
- (void)sidebarDidChangeVisibility:(_Bool)arg1;
- (_Bool)bannerIsVisible;
- (void)tearDownPersistentViews;
- (void)commonFinishInitialization:(id)arg1;
- (void)unbindViewSettings;
- (void)bindViewSettings;
- (void)configureBrowserView:(id)arg1;
- (void)tearDownAccessoryViews;
- (_Bool)shouldEnableShareButton;
- (_Bool)canShare;
- (void)clickedOnDisabledNode:(const struct TFENode *)arg1;
- (_Bool)canClickDimmedNodes;
- (_Bool)allowsMultipleSelection;
- (_Bool)canSelectNode:(const struct TFENode *)arg1;
- (_Bool)canMoveItemsToTrash;
- (_Bool)canDuplicateItems;
@property(readonly, nonatomic) TSidebarSplitViewController *sidebarSplitViewController;
- (void)reloadGroupView;
@property(retain, nonatomic) NSString *groupBy;
- (void)resolveReplicaNodesInTargetPath;
- (void)resetHistory;
- (void)targetToSearch:(_Bool)arg1;
- (unsigned int)defaultSearchScope;
- (void)updateSearchTarget:(struct TFENode)arg1;
- (void)searchFieldCancel;
- (_Bool)showScopeBar;
- (void)configureSearchBannerSettingTarget:(_Bool)arg1;
- (void)configureSuggestions;
- (_Bool)usesSuggestions;
- (_Bool)isSearchForSliceVisible;
- (id)searchSliceController;
- (_Bool)searchResultsArePartial;
- (struct TMDQueryAliasNode *)savedSearchTarget;
- (struct TMDQueryAliasNode *)searchTarget;
- (void)hideOverlayScrollers;
- (void)drawCompletelyIntoBackBuffer;
@property(retain, nonatomic) TNodeViewSettings *viewSettings;
- (void)viewDidSyncToDataSource:(const vector_f56638af *)arg1;
- (void)setViewSyncedToDataSourceHandler:(const function_f9feaa7d *)arg1 forTarget:(struct TFENode)arg2;
@property(retain, nonatomic) TBackupContainerDelegate *backupDelegate; // @dynamic backupDelegate;
- (id)browserWindowController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
