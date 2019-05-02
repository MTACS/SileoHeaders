//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADInterstitialDelegate.h"
#import "GADOAdFetcherDelegate.h"
#import "GADOInterstitialAdClickDelegate.h"
#import "GADOInterstitialRewardBasedVideoAdDelegate.h"
#import "GADOMRewardBasedVideoAdConnectorDelegate.h"
#import "GADOSDKCoreControllerDelegate.h"

@class GADMRewardBasedVideoAdNetworkConnector, GADOAd, GADOAdFetcher, GADOInterstitial, GADOMAdNetworkConfig, GADOMConfig, GADORequest, GADOSlotStatistics, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GADORewardBasedVideoAd : NSObject <GADOMRewardBasedVideoAdConnectorDelegate, GADOSDKCoreControllerDelegate, GADOAdFetcherDelegate, GADInterstitialDelegate, GADOInterstitialAdClickDelegate, GADOInterstitialRewardBasedVideoAdDelegate>
{
    GADOInterstitial *_interstitial;
    id _configurationObserver;
    long long _adRequestID;
    NSDictionary *_adMetadata;
    NSDictionary *_RTBAdapters;
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _adBeingPresented;
    long long _setAdBeingPresentedCallCounter;
    _Bool _ready;
    _Bool _requestInProgress;
    _Bool _adUnitExposureBegan;
    id <GADRewardBasedVideoAdDelegate> _delegate;
    NSString *_adNetworkClassName;
    NSString *_userIdentifier;
    NSString *_customRewardString;
    GADORequest *_request;
    NSString *_adUnitID;
    NSString *_requestID;
    GADOAdFetcher *_adFetcher;
    GADOMConfig *_mediationConfig;
    NSMutableArray *_pendingAdNetworkConfigurations;
    NSMutableArray *_allocationIDs;
    GADOMAdNetworkConfig *_requestingConfiguration;
    GADMRewardBasedVideoAdNetworkConnector *_receivedConnector;
    NSMutableDictionary *_pendingSetUpConnectorsTimestamp;
    NSMutableDictionary *_connectors;
    GADOAd *_ad;
    GADOSlotStatistics *_adStatistics;
    id <GADORewardedAdInternalDelegate> _internalDelegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <GADORewardedAdInternalDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) _Bool adUnitExposureBegan; // @synthesize adUnitExposureBegan=_adUnitExposureBegan;
@property(readonly, nonatomic) GADOSlotStatistics *adStatistics; // @synthesize adStatistics=_adStatistics;
@property(retain, nonatomic) GADOAd *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) NSMutableDictionary *connectors; // @synthesize connectors=_connectors;
@property(retain, nonatomic) NSMutableDictionary *pendingSetUpConnectorsTimestamp; // @synthesize pendingSetUpConnectorsTimestamp=_pendingSetUpConnectorsTimestamp;
@property(retain, nonatomic) GADMRewardBasedVideoAdNetworkConnector *receivedConnector; // @synthesize receivedConnector=_receivedConnector;
@property(retain, nonatomic) GADOMAdNetworkConfig *requestingConfiguration; // @synthesize requestingConfiguration=_requestingConfiguration;
@property(retain, nonatomic) NSMutableArray *allocationIDs; // @synthesize allocationIDs=_allocationIDs;
@property(readonly, nonatomic) NSMutableArray *pendingAdNetworkConfigurations; // @synthesize pendingAdNetworkConfigurations=_pendingAdNetworkConfigurations;
@property(retain, nonatomic) GADOMConfig *mediationConfig; // @synthesize mediationConfig=_mediationConfig;
@property(nonatomic) _Bool requestInProgress; // @synthesize requestInProgress=_requestInProgress;
@property(retain, nonatomic) GADOAdFetcher *adFetcher; // @synthesize adFetcher=_adFetcher;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(retain, nonatomic) GADORequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *customRewardString; // @synthesize customRewardString=_customRewardString;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(copy, nonatomic) NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
@property(readonly, nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic) __weak id <GADRewardBasedVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAdMetadata:(id)arg1;
- (id)adMetadata;
- (void)failedToLoadAdWithError:(id)arg1;
- (void)didFailToLoadWithError:(id)arg1;
- (void)adLoadedSuccessfully;
- (void)loadAd:(id)arg1;
- (void)presentFromRootViewController:(id)arg1;
- (void)setAdBeingPresentedWithTimeout;
- (void)loadRequest:(id)arg1 withAdUnitID:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)resetFillStatus;
- (void)mediation_connectorDidFailToReceiveAd:(id)arg1 withError:(id)arg2;
- (void)mediation_connectorDidReceiveAd:(id)arg1;
- (void)mediation_connectorWillStartRequestingAd;
- (void)mediation_adapterDidFailToSetUpWithNetworkConfig:(id)arg1;
- (void)connector:(id)arg1 didFailToPresentRewardedAdWithError:(id)arg2;
- (void)connector:(id)arg1 didReceiveAdMetadataChange:(id)arg2;
- (void)connectorDidCompletePlayingRewardBasedVideoAd:(id)arg1;
- (void)connectorWillLeaveApplication:(id)arg1;
- (void)connectorDidCloseRewardBasedVideoAd:(id)arg1;
- (void)connectorDidStartPlayingRewardBasedVideoAd:(id)arg1;
- (void)connectorDidOpenRewardBasedVideoAd:(id)arg1;
- (void)connector:(id)arg1 didRewardUserWithReward:(id)arg2;
- (void)connector:(id)arg1 didFailToReceiveRewardBasedVideoAdWithError:(id)arg2;
- (void)connectorDidReceiveClick:(id)arg1;
- (void)connectorDidReceiveRewardBasedVideoAd:(id)arg1;
- (void)connector:(id)arg1 didFailToSetUpRewardBasedVideoAdWithError:(id)arg2;
- (void)connectorDidSetUpRewardBasedVideoAd:(id)arg1;
- (void)pingNoFillURLs;
- (id)decodedJSONResponseFromAd:(id)arg1 error:(id *)arg2;
- (void)requestAdFromConnector:(id)arg1 configuration:(id)arg2;
- (void)removeStaleConnectors;
- (void)buildPendingAdRequestConnectorsList;
- (void)setUpAdaptersForAdNetworkConfigs;
- (void)setUpAdaptersForAdNetworkConfigsFromAppConfiguration:(id)arg1;
- (void)makeNextAdRequest;
- (void)presentMediatedRewardBasedVideoAdFromViewController:(id)arg1;
- (void)processMediationAd:(id)arg1;
@property(readonly, nonatomic) GADMRewardBasedVideoAdNetworkConnector *requestingConnector;
- (void)setUpAdaptersFromApplicationConfiguration;
- (void)stopObservingApplicationConfiguration;
- (void)startObservingApplicationConfiguration;
- (void)adFetcher:(id)arg1 didFailToFetchAd:(id)arg2 withError:(id)arg3 responseCode:(unsigned long long)arg4;
- (void)adFetcher:(id)arg1 didFetchAd:(id)arg2;
- (void)failedJavaScriptFile;
- (void)invalidJavaScriptRequest;
- (void)loadAd:(id)arg1 headers:(id)arg2;
- (void)loadAdURLWithParameters:(id)arg1;
- (long long)requestedAdType;
- (id)backgroundRequestParameters;
- (_Bool)requiresBackgroundSignalCollection;
- (id)requestParameters;
- (id)adLoadActionTimeRecorder;
- (void)fetchAdForRequest:(id)arg1 withAdUnitID:(id)arg2;
- (void)interstitial:(id)arg1 didChangeAdMetadata:(id)arg2 withInfo:(id)arg3;
- (void)interstitialDidCompletePlayingRewardBasedVideoAd:(id)arg1;
- (void)interstitial:(id)arg1 didRewardUserWithReward:(id)arg2;
- (void)interstitialDidStartPlayingRewardBasedVideoAd:(id)arg1;
- (void)interstitialDidReceiveAdClick:(id)arg1;
- (void)interstitialWillLeaveApplication:(id)arg1;
- (void)interstitialDidDismissScreen:(id)arg1;
- (void)interstitialWillDismissScreen:(id)arg1;
- (void)interstitialWillPresentScreen:(id)arg1;
- (void)interstitial:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)interstitialDidReceiveAd:(id)arg1;
- (void)loadInterstitialWithAdRequest:(id)arg1;
- (void)loadInterstitialWithAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

