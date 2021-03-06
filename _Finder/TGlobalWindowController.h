//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSResponder.h"

@class TBaseBrowserWindowController;

@interface TGlobalWindowController : NSResponder
{
    _Bool _restoringWindowState;
    _Bool _windowStateSavePending;
    TBaseBrowserWindowController *_mainBrowserWindowController;
}

+ (id)orderedBrowserWindowsForScreen:(id)arg1;
+ (id)orderedBrowserWindows;
+ (void)reduceRootedPath:(struct TFENodeVector *)arg1;
+ (id)frontmostBrowserWindowController;
+ (id)frontmostBrowserWindowControllerForScreen:(id)arg1;
+ (id)frontmostBrowserWindowControllerIncludingDesktop;
+ (id)frontmostBrowserWindowControllerExcludingDesktop;
+ (struct TString)pathPrettyStringForNode:(struct TFENode)arg1;
+ (struct TString)titleForICloudContainer:(const struct TFENode *)arg1;
+ (struct TFENode)cloudLibrariesContainer;
+ (_Bool)nodeCanReveal:(const struct TFENode *)arg1;
+ (struct TFENode)mapToUserVisibleCloudLocation:(const struct TFENode *)arg1;
+ (_Bool)nodeIsAnICloudRoot:(const struct TFENode *)arg1;
+ (struct TFENode)cloudDocsNodeForNode:(struct TFENode)arg1;
+ (struct TFENode)parentNodeToOpen:(const struct TFENode *)arg1;
+ (struct TFENode)theICloudNode;
+ (_Bool)isTheICloudNode:(const struct TFENode *)arg1;
+ (_Bool)nodeIsInICloud:(const struct TFENode *)arg1 allowQueryHits:(_Bool)arg2;
+ (_Bool)frameForFrontBrowserWindow:(struct CGRect *)arg1;
+ (void)staggerBrowserWindow:(id)arg1 useDefaultWindowState:(_Bool)arg2;
+ (void)openDockTargetForFFK:(const struct TFENode *)arg1;
+ (void)setFrontRaiseOneWindow:(id)arg1;
+ (_Bool)isActiveBrowserViewController:(id)arg1;
+ (_Bool)isFrontWindowBackupBrowser;
+ (unsigned long long)browserWindowCount;
+ (void)typeSelectInFrontmostBrowser:(id)arg1;
+ (id)windowForTimeMachine;
+ (void)springNewWindowForTarget:(const struct TFENode *)arg1 atLocation:(struct CGPoint)arg2 includingMouseLocation:(_Bool)arg3 withOrigin:(shared_ptr_3b64c573)arg4;
+ (void)closeOrRetargetWindowForTarget:(const struct TFENode *)arg1 toPath:(const struct TFENodeVector *)arg2 originatingBrowser:(long long)arg3;
+ (void)replaceUnresolvedTargets:(const struct TFENode *)arg1 withTarget:(const struct TFENode *)arg2;
+ (void)openEnclosingFolderOfNodes:(const struct TFENodeVector *)arg1 windowOptions:(id)arg2 alwaysSelectNodes:(_Bool)arg3;
+ (id)targetSelectOrCreateWindowWithOptions:(id)arg1 inTarget:(const struct TFENode *)arg2;
+ (void)targetSelectOrCreateWindowForTarget:(const struct TFENode *)arg1 withOptions:(id)arg2;
+ (void)newTabOrWindowForTarget:(const struct TFENode *)arg1 nodesToSelect:(const struct TFENodeVector *)arg2;
+ (void)targetSelectOrCreate:(const struct TFENode *)arg1 windowController:(id)arg2;
+ (void)targetSelectOrCreateWindow:(id)arg1 inTarget:(const struct TFENode *)arg2 selectNodes:(const struct TFENodeVector *)arg3;
+ (id)windowCreationOptions:(id)arg1 nodes:(const struct TFENodeVector *)arg2;
+ (void)targetSelectOrCreateWindowWithTarget:(const struct TFENode *)arg1;
+ (void)retargetFrontOrCreateWindowForFind:(int)arg1 searchString:(id)arg2 shouldSpawn:(_Bool)arg3;
+ (_Bool)okayToSpawnInTabForWindow:(id)arg1;
+ (unsigned long long)selectionForMainBrowserWindow:(struct TFENodeVector *)arg1 maxItems:(unsigned long long)arg2;
+ (id)findBrowserWindowControllerAndSelectNodes:(const struct TFENodeVector *)arg1;
+ (id)findBrowserWindowControllerForNode:(const struct TFENode *)arg1 andScreen:(id)arg2;
+ (id)findBrowserWindowControllerForNode:(const struct TFENode *)arg1;
+ (id)firstWindowWithTarget:(const struct TFENode *)arg1 containerController:(id *)arg2;
+ (id)firstActiveContainerWithTarget:(const struct TFENode *)arg1;
+ (id)firstContainerWithTarget:(const struct TFENode *)arg1;
+ (id)selectOrCreateWindowWithOptions:(id)arg1 inTarget:(const struct TFENode *)arg2;
+ (id)selectOrCreateWindow:(const struct TFENode *)arg1 alwaysCreate:(_Bool)arg2 forceToolbarHidden:(_Bool)arg3 sendFolderAction:(_Bool)arg4;
+ (_Bool)shouldUseContainerSavedViewOptions:(const struct TFENode *)arg1;
+ (id)createWindowFromState:(id)arg1;
+ (id)createWindowWithTarget:(const struct TFENode *)arg1 forceContainer:(_Bool)arg2 spawnOrigin:(shared_ptr_3b64c573)arg3 desiredLocation:(struct CGPoint)arg4;
+ (id)createWindowWithTarget:(const struct TFENode *)arg1 forceContainer:(_Bool)arg2 spawnOrigin:(shared_ptr_3b64c573)arg3 desiredLocation:(struct CGPoint)arg4 creationState:(id)arg5;
+ (id)createWindowWithTarget:(const struct TFENode *)arg1 forceContainer:(_Bool)arg2;
+ (id)createWindowWithTarget:(const struct TFENode *)arg1;
+ (id)createWindowWithDefaultTarget;
+ (struct TFENode)defaultWindowTarget;
+ (struct TString)urlForNode:(const struct TFENode *)arg1;
+ (struct TFENode)nodeForUrl:(const struct TString *)arg1;
+ (id)globalWindowController;
@property(nonatomic) _Bool windowStateSavePending; // @synthesize windowStateSavePending=_windowStateSavePending;
@property(nonatomic) TBaseBrowserWindowController *mainBrowserWindowController; // @synthesize mainBrowserWindowController=_mainBrowserWindowController;
@property(nonatomic) _Bool restoringWindowState; // @synthesize restoringWindowState=_restoringWindowState;
- (void)restoreOneBrowserWindowFromState:(id)arg1 forReopenEvent:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)browserWindowDidBecomeMain:(id)arg1;
- (void)postWindowDidBecomeMainNotification:(id)arg1;
- (void)updateMainBrowserWindowController;
- (_Bool)anyWindowIsSpringing;
- (void)cmdBringAllToFront:(id)arg1;
- (_Bool)validateBringAllToFront:(id)arg1;
- (void)cmdMergeAllWindows:(id)arg1;
- (_Bool)validateMergeAllWindows:(id)arg1;
- (_Bool)shouldUseMergeAllWindowsAnimation;
- (void)cmdGoTo:(id)arg1;
- (_Bool)validateGoTo:(id)arg1;
- (void)cmdGoToUtilities:(id)arg1;
- (_Bool)validateGoToUtilities:(id)arg1;
- (void)cmdGoToPublic:(id)arg1;
- (_Bool)validateGoToPublic:(id)arg1;
- (void)cmdGoToPictures:(id)arg1;
- (_Bool)validateGoToPictures:(id)arg1;
- (void)cmdGoToMovies:(id)arg1;
- (_Bool)validateGoToMovies:(id)arg1;
- (void)cmdGoToMusic:(id)arg1;
- (_Bool)validateGoToMusic:(id)arg1;
- (void)cmdGoToFavorites:(id)arg1;
- (_Bool)validateGoToFavorites:(id)arg1;
- (void)cmdGoToDocuments:(id)arg1;
- (_Bool)validateGoToDocuments:(id)arg1;
- (void)cmdGoToAllMyFiles:(id)arg1;
- (_Bool)validateGoToAllMyFiles:(id)arg1;
- (void)cmdGoToApplications:(id)arg1;
- (_Bool)validateGoToApplications:(id)arg1;
- (void)cmdGoToMeetingRoom:(id)arg1;
- (_Bool)validateGoToMeetingRoom:(id)arg1;
- (void)cmdGoToICloud:(id)arg1;
- (void)cmdGoToNetwork:(id)arg1;
- (_Bool)validateGoToNetwork:(id)arg1;
- (void)cmdGoToUserLibrary:(id)arg1;
- (_Bool)validateGoToUserLibrary:(id)arg1;
- (void)cmdGoToDownloads:(id)arg1;
- (_Bool)validateGoToDownloads:(id)arg1;
- (void)cmdGoToDesktop:(id)arg1;
- (_Bool)validateGoToDesktop:(id)arg1;
- (void)cmdGoHome:(id)arg1;
- (_Bool)validateGoHome:(id)arg1;
- (void)cmdGoToComputer:(id)arg1;
- (_Bool)validateGoToComputer:(id)arg1;
- (void)goToCommon:(const struct TFENode *)arg1;
- (_Bool)commonValidateGoToForNode:(const struct TFENode *)arg1;
- (void)cmdSetFocusToSearchField:(id)arg1;
- (void)cmdSpotlightFindFile:(id)arg1;
- (void)cmdAlternateFindFile:(id)arg1;
- (void)cmdFindFile:(id)arg1;
- (void)cmdCloseAllWindows:(id)arg1;
- (_Bool)validateCloseAllWindows:(id)arg1;
- (void)cmdNewSmartFolder:(id)arg1;
- (_Bool)validateNewTab:(id)arg1;
- (void)cmdNewTab:(id)arg1;
- (void)cmdNewFileViewer:(id)arg1;
- (void)applicationDidFinishRestoringWindows:(id)arg1;
- (void)closeAllWindowsForFFK;
- (void)closeAllWindowsForQuitting;
- (void)closeAllWindowsExceptDesktop;
- (void)closeAllAccessoryWindows;
- (void)closeAllTrashWindows;
- (void)handleReopenAppleEvent;
- (void)springWindowDockCallback:(const char *)arg1 forRect:(const struct CGRect *)arg2 inDirection:(int)arg3;
- (void)revertAllSprungWindowsIncludingUnderMouse:(_Bool)arg1;
- (struct TFENode)nodeFromDockPath:(const struct TString *)arg1;
- (id)init;

@end

