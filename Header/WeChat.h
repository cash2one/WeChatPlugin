//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AccountServiceExt.h"
#import "IContactMgrExt.h"
#import "MMNetServiceDelegate.h"
#import "MMNetServiceExt.h"
#import "NSMenuDelegate.h"
#import "VoipDebugWindowControllerDelegate.h"

@class LeftViewController, LogoutCGI, MMAboutWindowController, MMBluetoothWindowController, MMChatsViewController, MMComposeTextView, MMDockItem, MMFeedbackWindowController, MMLogReportWindowController, MMMainWindowController, MMRecoverWindowController, MMServiceCenter, MMStatusItem, MMTechSupportWindowController, MMViewController, NSMenu, NSMenuItem, NSString;

__attribute__((visibility("hidden")))
@interface WeChat : NSObject <NSMenuDelegate, VoipDebugWindowControllerDelegate, AccountServiceExt, MMNetServiceDelegate, MMNetServiceExt, IContactMgrExt>
{
    BOOL _isLoggedIn;
    BOOL _isLocked;
    BOOL _isDisplayAsleep;
    BOOL _isInBackground;
    BOOL _showDisconnectBanner;
    BOOL _hasAuthOK;
    BOOL _isAppTerminating;
    LeftViewController *_leftViewController;
    MMViewController *_rightViewController;
    MMMainWindowController *_mainWindowController;
    MMComposeTextView *_composeTextView;
    NSMenuItem *_lockMenuItem;
    NSMenu *_wechatMenu;
    MMServiceCenter *_serviceCenter;
    MMAboutWindowController *_aboutWindowController;
    MMLogReportWindowController *_logReportWindowController;
    MMLogReportWindowController *_covReportWindowController;
    MMRecoverWindowController *_recoverWindowController;
    MMFeedbackWindowController *_feedbackWindowController;
    MMStatusItem *_statusItem;
    MMDockItem *_dockItem;
    MMChatsViewController *_chatsViewController;
    MMTechSupportWindowController *_techSupportWindowController;
    MMBluetoothWindowController *_bluetoothWindowController;
    LogoutCGI *_logoutCGI;
}

+ (id)appDelegate;
+ (id)sharedInstance;
+ (void)_testForNonIntegralConstants;
+ (void)initialize;
@property(retain, nonatomic) LogoutCGI *logoutCGI; // @synthesize logoutCGI=_logoutCGI;
@property(retain, nonatomic) MMBluetoothWindowController *bluetoothWindowController; // @synthesize bluetoothWindowController=_bluetoothWindowController;
@property(retain, nonatomic) MMTechSupportWindowController *techSupportWindowController; // @synthesize techSupportWindowController=_techSupportWindowController;
@property(nonatomic) __weak MMChatsViewController *chatsViewController; // @synthesize chatsViewController=_chatsViewController;
@property(retain, nonatomic) MMDockItem *dockItem; // @synthesize dockItem=_dockItem;
@property(retain, nonatomic) MMStatusItem *statusItem; // @synthesize statusItem=_statusItem;
@property(retain, nonatomic) MMFeedbackWindowController *feedbackWindowController; // @synthesize feedbackWindowController=_feedbackWindowController;
@property(retain, nonatomic) MMRecoverWindowController *recoverWindowController; // @synthesize recoverWindowController=_recoverWindowController;
@property(retain, nonatomic) MMLogReportWindowController *covReportWindowController; // @synthesize covReportWindowController=_covReportWindowController;
@property(retain, nonatomic) MMLogReportWindowController *logReportWindowController; // @synthesize logReportWindowController=_logReportWindowController;
@property(retain, nonatomic) MMAboutWindowController *aboutWindowController; // @synthesize aboutWindowController=_aboutWindowController;
@property(nonatomic) BOOL isAppTerminating; // @synthesize isAppTerminating=_isAppTerminating;
@property(nonatomic) BOOL hasAuthOK; // @synthesize hasAuthOK=_hasAuthOK;
@property(retain, nonatomic) MMServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;
@property(nonatomic) BOOL showDisconnectBanner; // @synthesize showDisconnectBanner=_showDisconnectBanner;
@property(nonatomic) BOOL isInBackground; // @synthesize isInBackground=_isInBackground;
@property(nonatomic) BOOL isDisplayAsleep; // @synthesize isDisplayAsleep=_isDisplayAsleep;
@property(nonatomic) BOOL isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) BOOL isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) __weak NSMenu *wechatMenu; // @synthesize wechatMenu=_wechatMenu;
@property(nonatomic) __weak NSMenuItem *lockMenuItem; // @synthesize lockMenuItem=_lockMenuItem;
@property(retain, nonatomic) MMComposeTextView *composeTextView; // @synthesize composeTextView=_composeTextView;
@property(retain, nonatomic) MMMainWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
@property(nonatomic) __weak MMViewController *rightViewController; // @synthesize rightViewController=_rightViewController;
@property(nonatomic) __weak LeftViewController *leftViewController; // @synthesize leftViewController=_leftViewController;
- (void).cxx_destruct;
- (void)setupFeedbackIfNeeded;
- (void)showBluetoothDemo;
- (void)setupBluetoothDemoMenu;
- (void)showTechSupport:(id)arg1;
- (void)tryBlockReportAfterRun;
- (void)mainThreadMonitorStart;
- (void)onCreateContactDBFailed;
- (void)lock:(id)arg1;
- (void)sendFriendVerifyMessage:(id)arg1 withContact:(id)arg2;
- (void)addNewFriendWithContact:(id)arg1 groupChatUserName:(id)arg2;
- (void)addNewFriendWithContact:(id)arg1;
- (BOOL)tryCrashReportAfterRun;
- (BOOL)tryCrashReportOnRun;
- (void)openFavoritesWithFavoritesItem:(id)arg1;
- (void)openFavoritesTabToFavoritesWithFavoritesItem:(id)arg1;
- (void)openFavoritesTabToFavoritesFromContact:(id)arg1;
- (void)showQuitGroupChatConfirmationWithGroupUsername:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startANewGroupChatWithUserNames:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startANewGroupChatWithContacts:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startANewChatWithContact:(id)arg1;
- (void)selectChatWithUserName:(id)arg1;
- (void)selectPreviousChat;
- (void)selectNextChat;
- (id)currentChatListViewController;
- (void)goToNextUnreadChat:(id)arg1;
- (void)updateMainWindowTitle;
- (void)pasteQuotedMessageToInputView:(id)arg1;
- (BOOL)composetTextViewIsFirstResponder;
- (void)pasteScreenshotToInputView:(id)arg1;
- (void)sendDragOperationToInputView:(id)arg1;
- (int)CurrentQQUin;
- (int)CurrentWeixinUin;
- (id)CurrentUserName;
- (BOOL)OnHeadBeatCGIResponse:(id)arg1;
- (BOOL)GetHeartBeatRequestData:(id)arg1 reqCmdId:(int *)arg2 respCmdId:(int *)arg3;
- (BOOL)IsAuthOK;
- (BOOL)MakeSureAuth;
- (void)onSessionTimeout;
- (void)onCurrentDeviceLockStateChanged:(BOOL)arg1;
- (void)onAuthUpdateCert;
- (void)onAuthFaildForInvalidCGISessionID;
- (void)handleAuthFailedWithReason:(id)arg1 errorMsg:(id)arg2;
- (void)onAuthKickOutWithReason:(id)arg1 errorMsg:(id)arg2;
- (void)onAuthFaild:(id)arg1;
- (void)onAuthFaildWithWrongPasswordOrUsername;
- (void)onAuthAlphaVersion:(id)arg1;
- (void)onAuthKeyInfoInvalid:(id)arg1;
- (void)updateCDNServerIP;
- (void)onAuthOK:(BOOL)arg1;
- (void)onPreAuthOKOfUser:(id)arg1;
- (id)curUserName;
- (void)setupSaveMessageOption;
- (void)cleanUpUIAndService;
- (void)delayCallLogOut;
- (void)logOut;
- (void)applicationWillHide:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)setupCheckUpdateIfNeeded;
- (void)chatDelete;
- (void)chatMuteOrUnmute;
- (void)chatStickyOrUnsticky;
- (void)previousTab:(id)arg1;
- (void)nextTab:(id)arg1;
- (void)performSearchAction:(id)arg1;
- (void)showContactsTabWithUserName:(id)arg1;
- (void)showOATab:(id)arg1;
- (void)showFavoritesTab:(id)arg1;
- (void)showContactsTab:(id)arg1;
- (void)showChatsTab:(id)arg1;
- (unsigned int)currentTab;
- (void)showFeedBackWindow;
- (void)showRecoverWindow;
- (void)uploadCov;
- (void)showLogReportWindow;
- (void)showSettingsWindow;
- (void)showAboutWindow;
- (void)showOrHideMainWindow;
- (void)showMainWindow;
- (void)resetServices;
- (void)setupServices;
- (void)setupDockItem;
- (void)setupMenubarIcon;
- (void)sendActiveMessageWithIsActive:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)doUpgradeMigrationFromVersion:(unsigned int)arg1 toVersion:(unsigned int)arg2;
- (id)checkVersionFilePath;
- (void)saveToDiskWithVersion:(unsigned int)arg1;
- (unsigned int)checkVersionFromDisk;
- (void)doUpgradePreparationIfNeeded;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)checkForUpdatesInBackground;
- (void)updater:(id)arg1 didAbortWithError:(id)arg2;
- (void)updater:(id)arg1 didCancelInstallUpdateOnQuit:(id)arg2;
- (void)updaterWillRelaunchApplication:(id)arg1;
- (void)updater:(id)arg1 willInstallUpdate:(id)arg2;
- (void)updaterDidNotFindUpdate:(id)arg1;
- (void)updater:(id)arg1 didFindValidUpdate:(id)arg2;
- (void)updater:(id)arg1 didFinishLoadingAppcast:(id)arg2;
- (BOOL)updaterShouldPromptForPermissionToCheckForUpdates:(id)arg1;
- (BOOL)updaterMayCheckForUpdates:(id)arg1;
- (void)checkForUpdates;
- (void)setupUpdater;
- (id)sparkleUpdater;
- (void)setSparkleUpdater:(id)arg1;
- (void)showAlertWindowWithTitle:(id)arg1 message:(id)arg2 confirmButton:(id)arg3 cancelButton:(id)arg4;
- (void)showAlertSheetWithTitle:(id)arg1 message:(id)arg2 confirmButton:(id)arg3 cancelButton:(id)arg4 accessoryView:(id)arg5 onWindow:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)showAlertSheetWithTitle:(id)arg1 message:(id)arg2 confirmButton:(id)arg3 cancelButton:(id)arg4 onWindow:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showAlertSheetWithTitle:(id)arg1 message:(id)arg2 confirmButton:(id)arg3 cancelButton:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)showConfirmSheetWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAlertSheetWithTitle:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showBenchmarkTool:(id)arg1;
- (void)viewSourceForText:(id)arg1;
- (void)viewSourceForMessage:(id)arg1;
- (BOOL)shouldShowViewSourceTool;
- (BOOL)shouldShowDebugMessageLayoutGuides;
- (BOOL)releaseHasAutoupdate;
- (BOOL)releaseIsInternalTestBuild;
- (BOOL)releaseIsDebugBuild;
- (void)showFeatureMissingPlaceholderWithDescription:(id)arg1;
- (void)showFeatureMissingPlaceholder;
- (void)_openReleaseNotesBlog;
- (void)_clearAllUnreadMessages:(id)arg1;
- (void)showDebugMenuIfNeeded;
- (void)_showMiscOptions:(id)arg1;
- (void)_showIPSwitcher:(id)arg1;
- (void)windowDidColsed:(id)arg1;
- (void)_showVoipDebug:(id)arg1;
- (void)_showNetDebugWindow:(id)arg1;
- (void)_showFavoritesDebug:(id)arg1;
- (void)_openCacheFolder:(id)arg1;
- (void)_openCurrentSandbox:(id)arg1;
- (void)_showIDKeyWindow:(id)arg1;
- (void)_showBenchmarkTool:(id)arg1;
- (void)stopVoicePlayWhenSelectionChange;
- (void)backupRecoverChatlog:(id)arg1;
- (void)orderFrontBackupWindow;
- (void)handUpWhenTerminate;
- (void)orderFrontVoipWindow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
