//
//  LBCUrlsManager.h
//  LBCStockageLibrary
//
//  Created by Luis Figueiredo on 26/09/2014.
//  Copyright (c) 2014 leboncoin.fr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LBCUrlsManager : NSObject

+ (NSString *) getLBCMobileSiteAdviewUrl;
+ (NSString *) getLBCListingJsonUrl;
+ (NSString *) getLBCAdviewJsonUrl;
+ (NSString *) getLBCWatchJsonUrl;
+ (NSString *) getLBCDashboardJsonUrl;
+ (NSString *) getLBCSendTipJsonUrl;
+ (NSString *) getLBCSendMailJsonUrl;
+ (NSString *) getLBCDeleteAdJsonUrl;
+ (NSString *) getLBCLoadCurrentStateJsonUrl;
+ (NSString *) getLBCSendPasswdJsonUrl;
+ (NSString *) getLBCAdCountJsonUrl;
+ (NSString *) getLBCAppsDataJsonUrl;
+ (NSString *) getLBCSupportJsonUrl;
+ (NSString *) getLBCMyadsJsonUrl;
+ (NSString *) getLBCLoadAdUrl;
+ (NSString *) getLBCPrivateAccountChangePasswdUrl;
+ (NSString *) getLBCLoadUrl;
+ (NSString *) getLBCPaymentLoadUrl;
+ (NSString *) getLBCPaymentActionUrl;
+ (NSString *) getLBCInsertAdUrl;
+ (NSString *) getLBCPubBaseUrl;
+ (NSString *) getLBCStoreMobilUrl;
+ (NSString *) getLBCCheckVersionUrl;
+ (NSString *) getLBCAppsExtDataJsonUrl;
+ (NSString *) getLBCAdActionUrl;
+ (NSString *) getLBCPayexLoggedUrl;
+ (NSString *) getLBCPayexAction;
+ (NSString *) getLBCStatBiUrl;
+ (NSString *) getLBCShapeUrl;
+ (NSString *) getLBCCartoUrl;
+ (NSString *) getLBCGeocodeUrl;
+ (NSString *) getBaseUrlForDeepLinking;
+ (NSString *) getApiUrlWithSuffix:(NSString *)urlSuffix;

#pragma mark - URL's statics

+ (NSString *) getLBCCgvUrl;
+ (NSString *) getLBCCguUrl;
+ (NSString *) getLBCMediametrieUrl;
+ (NSString *) getLBCPrivateAccountUrl;
+ (NSString *) getLBCProAccountUrl;

+ (NSString *) getLBCAdViewUrlWithListId:(NSString *) inListId;

#pragma mark - HTTPs / PROD

+ (BOOL) isVerifyHTTPsEnable;
+ (BOOL) isProdEnvironment;
+ (BOOL) getIsNetworkDebug;

@end
