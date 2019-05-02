//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADOConfigurationDelegate.h"
#import "GADOStatisticDictionaryDelegate.h"

@class GADOAd, GADOConfiguration, GADOContentQueue, GADOScheduler, GADOStatisticDictionary, NSArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, UIViewController;

@interface GADOApplication : NSObject <GADOConfigurationDelegate, GADOStatisticDictionaryDelegate>
{
    GADOAd *_backgroundingAd;
    id <NSObject> _appBecameActiveObserver;
    id <NSObject> _appWillEnterForegroundObserver;
    id <NSObject> _appWillResignActiveObserver;
    GADOContentQueue *_contentQueue;
    GADOScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSArray *_availableAdapterNames;
    unsigned long long _activeViewID;
    NSString *_version;
    NSString *_mainBundleIdentifier;
    _Bool _appFinishedLaunching;
    _Bool _hasRunAdditionalEarlyActivities;
    _Bool _backgroundLoadingEnabled;
    _Bool _needsConfigurationUpdate;
    _Bool _isConfigurationUpdatePublisherInitiated;
    GADOConfiguration *_configuration;
    NSMutableSet *_adRequesters;
    unsigned long long _mainWindowSupportedInterfaceOrientations;
    _Bool _debugModeEnabled;
    NSString *_sessionIdentifier;
    GADOStatisticDictionary *_statistics;
    GADOStatisticDictionary *_nativeAdStatistics;
    NSString *_inAppPreviewCreativeToken;
    NSString *_UUIDString;
    NSObject<OS_dispatch_queue> *_notificationSerialQueue;
    NSObject<OS_dispatch_queue> *_statisticsSerialQueue;
    unsigned long long _sequenceNumber;
    NSMutableSet *_adStatistics;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, nonatomic) NSMutableSet *adStatistics; // @synthesize adStatistics=_adStatistics;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsSerialQueue; // @synthesize statisticsSerialQueue=_statisticsSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationSerialQueue; // @synthesize notificationSerialQueue=_notificationSerialQueue;
@property(readonly, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(copy, nonatomic) NSString *inAppPreviewCreativeToken; // @synthesize inAppPreviewCreativeToken=_inAppPreviewCreativeToken;
@property(nonatomic) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
@property(readonly, copy, nonatomic) GADOStatisticDictionary *nativeAdStatistics; // @synthesize nativeAdStatistics=_nativeAdStatistics;
@property(readonly, copy, nonatomic) GADOStatisticDictionary *statistics; // @synthesize statistics=_statistics;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
- (void).cxx_destruct;
- (void)openURL:(id)arg1 strictUniversalLink:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1;
- (long long)topViewControllerOrientation;
- (_Bool)supportsOrientations:(unsigned long long)arg1;
- (unsigned long long)mainWindowSupportedInterfaceOrientations;
- (_Bool)isSplitScreenEnabled;
- (id)parameters;
- (unsigned long long)nextActiveViewID;
- (void)GADOLinkCategories;
- (void)didUpdateStatisticDictionary:(id)arg1;
- (id)notificationQueue;
- (id)pendingAdStatistics;
@property(readonly, copy, nonatomic) UIViewController *topViewController;
- (id)mainWindow;
- (id)placeholderView;
- (id)iTunesMetadata;
- (id)iTunesMetadataPath;
@property(readonly, nonatomic) _Bool backgroundReloadingEnabled;
@property(readonly, nonatomic) _Bool backgroundLoadingEnabled;
- (void)enableBackgroundAdLoading;
@property(readonly, nonatomic) _Bool active;
- (void)appDidFinishLaunching;
@property(readonly, copy, nonatomic) NSString *mainBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *version;
- (void)runAdditionalEarlyActivities;
- (void)runEarlyActivities;
- (void)dealloc;
- (id)init;
- (void)stopContentHashing;
- (void)startContentHashing;
- (id)fingerprintWithServedPenaltyDeduction;
- (void)configurationDidUpdate:(id)arg1;
- (void)loadServerSideConfigurationIfNeeded;
- (void)loadServerSideConfigurationForPublisherRequest;
- (void)refreshServerSideConfiguration;
- (id)javaScriptForRequestingServerSideConfiguration;
@property(readonly, nonatomic) GADOConfiguration *configuration;
- (void)createConfiguration;
- (void)updateAvailableAdapterNamesWithPotentialAdapterNames:(id)arg1;
- (void)setAvailableAdapterNames:(id)arg1;
@property(readonly, copy) NSArray *availableAdapterNames;
- (id)nextRequestStatisticsDictionaryForSlot:(id)arg1;
- (id)timeSinceFirstAdRequestInMilliseconds;
- (id)nextSequenceNumberAsString;
- (void)incrementSequenceNumber;
- (void)incrementTotalAdClickCount;
- (long long)currentAdRequestCount;
- (void)requesterDidEndRequest:(id)arg1;
- (void)requesterWillBeginRequest:(id)arg1;
- (void)updateTimeInSession;
- (void)incrementTotalAdRequestCountInCurrentSession;
- (void)decrementTotalAdRequestCount;
- (void)incrementTotalAdRequestCount;
- (void)didNotSendAdStatistics:(id)arg1;
- (void)willResignActive;
- (void)resetTimeInSession;
- (void)resetPreqsInSession;
- (void)sendForegroundPing;
- (void)willEnterForeground;
- (void)didBecomeActive;
- (void)willLeaveApplicationDueToClickOnAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
