//
//  LBCXitiManager.h
//  LBCNetworkLibrary
//
//  Created by Patrick Rente on 21/11/14.
//  Copyright (c) 2014 leboncoin.fr. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ATParams.h"
#import "ATTag.h"
#import "LBCNetworkLibrary.h"

@interface LBCXitiManager : NSString

+ (void) initXitiManager;

+ (void) sendXitiClick:(NSString*)level2 andClickName:(NSString*)click_name;
+ (void) sendXitiPage:(NSString*)page andLevel2:(NSString *) level2;
+ (void) sendXitiSplashscreen;
+ (void) sendXitiAccueil;
+ (void) sendXitiInfos;
+ (void) sendXitiInfosLegales;
+ (void) sendXitiReglesWithCategory:(NSString *)category;
+ (void) sendXitiCGU;
+ (void) sendXitiCGV;
+ (void) sendXitiAide;
+ (void) sendXitiAdvertisement;
+ (void) sendXitiContact;
+ (void) sendXitiContactSuggestion;
+ (void) sendXitiContactTechnicalProblem;
+ (void) sendXitiContactPremiumOptions;
+ (void) sendXitiContactRefused;
+ (void) sendXitiContactFindAd;
+ (void) sendXitiCreateAccount;
+ (void) sendXitiHelpConnexion;
+ (void) sendXitiMyDashboard;
+ (void) sendXitiMyPersonalData;
+ (void) sendXitiMesAchats;
+ (void) sendXitiInsertAd1;
+ (void) sendXitiInsertAd2WithCategory:(NSString *)category andOptionType:(NSString *)type_option;

+ (void) sendXitiPaymentPageWithCategory:(NSString *)category optionType:(NSString *)type_option actionType:(ActionType) actionType;
+ (void) sendXitiConfirmationPaymentPage:(NSString *)category andOptionType:(NSString *)type_option;
+ (void) sendXitiOptionsSubscribed:(NSString *)category andOptionType:(NSString *)type_option;

+ (void) sendXitiListingGen:(NSString *)category department:(NSString *)department type:(NSString *)type andRegion:(NSString *) region;
+ (void) sendXitiListingPart:(NSString *)category department:(NSString *)department type:(NSString *)type andRegion:(NSString *) region;
+ (void) sendXitiListingPro:(NSString *)category department:(NSString *)department type:(NSString *)type andRegion:(NSString *) region;
+ (void) sendXitiResearchFormWithRegion:(NSString *)region;
+ (void) sendXitiDetailPart:(NSString *)category department:(NSString *)department type:(NSString *)type andRegion:(NSString *) region;
+ (void) sendXitiDetailPro:(NSString *)category department:(NSString *)department type:(NSString *)type andRegion:(NSString *) region;
+ (void) sendXitiEmailFriend;
+ (void) sendXitiEmailAnnonceur;
+ (void) sendXitiSignalerAbus;
+ (void) sendXitiGestionAnnonce:(NSString *)category typeOption:(NSString *)type;
+ (void) sendXitiPaymentWithOneOption:(NSString *)category typeOption:(NSString *)type;
+ (void) sendXitiConfirmationPaymentWithOneOption:(NSString *)category typeOption:(NSString *)type;
+ (void) sendXitiPaymentWithManyOptions:(NSString *)category typeOptions:(NSString *)type;
+ (void) sendXitiConfirmationPaymentWithManyOptions:(NSString *)category typeOptions:(NSString *)type;
+ (void) sendXitiModify1:(NSString *)category;
+ (void) sendXitiModify2:(NSString *)category;
+ (void) sendXitiModifyConfirmationPaiement:(NSString *)category andTypeOption:(NSString *) typeOption;
+ (void) sendXitiSavedAds;
+ (void) sendXitiAutomatedSearches;
+ (void) sendXitiAutomatedSearchesForm;
+ (void) sendXitiModifyAutomatedSearches;
+ (void) sendXitiActiveAds;
+ (void) sendXitiDeleteAds;
+ (void) sendXitiTechnicalProblem:(NSString *)errorCode;
+ (void) sendXitiMaintenance;
+ (void) sendXitiNoAdsOffersWithRegion:(NSString *)region category:(NSString *)category andDepartment:(NSString *)department;
+ (void) sendXitiNoAdsDemandesWithRegion:(NSString *)region category:(NSString *)category andDepartment:(NSString *)department;
+ (void) sendXitiNoAdsPartWithRegion:(NSString *)region category:(NSString *)category andDepartment:(NSString *)department;
+ (void) sendXitiNoAdsProWithRegion:(NSString *)region category:(NSString *)category andDepartment:(NSString *)department;
+ (void) sendXitiPageConnexion;
+ (void) sendXitiDashBoard;
+ (void) sendXitiPopupSuggestion;
+ (void) sendXitiPopupEmailTechnicalProblem;
+ (void) sendXitiPopupEmailPremiumOptions;
+ (void) sendXitiPopupEmailRefusedAd;
+ (void) sendXitiPopupEmailFoundAd;
+ (void) sendXitiPopupEmailSendMailToFriend;
+ (void) sendXitiPopupEmailSendMailToAnnonceur;
+ (void) sendXitiPopupSucessDelete;
+ (void) sendXitiPopupSucessPasswordSent;
+ (void) sendXitiPopupInfoContactAdded;
+ (void) sendXitiPopupSuccessSavedAd;
+ (void) sendXitiPopupAbuseReport;
+ (void) sendXitiPopupApplicationClosedToPro;
+ (void) sendXitiPopupPasswordForModify;
+ (void) sendXitiPopupPasswordForDelete;
+ (void) sendXitiPopupForgottenPasswordForModify;
+ (void) sendXitiPopupForgottenPasswordForDelete;
+ (void) sendXitiPopupInfoButtonDeleteAdClosedForProWithAccount;
+ (void) sendXitiPopupInfoButtonAdActionClosedForProWithAccount;
+ (void) sendXitiPopupInfoButtonModifyClosedForPro;
+ (void) sendXitiPopupInfoButtonModifyClosedForPartOnLDV;
+ (void) sendXitiPopupInfoButtonModifyClosedForPartOnPhotoSupp;
+ (void) sendXitiPopupButtonContacterAnnonceurGreyedOut;
+ (void) sendXitiPopupButtonAjouterContactGreyedOut;
+ (void) sendXitiPopupDeleteAdOnPendingReview;
+ (void) sendXitiPopupInfoLectureTrans;
+ (void) sendXitiPopupConnexionReseau;
+ (void) sendXitiPopupErrorLoadingPicture;
+ (void) sendXitiPopupInsertAdSuccess:(NSString *)category andTypeOption:(NSString *) typeOption;
+ (void) sendXitiPopupSuccessLogin;
+ (void) sendXitiPopupCreditsAmount;
+ (void) sendXitiPopupCreditsChanged;
+ (void) sendClickContacterAnnonceur:(NSString *) region;
+ (void) sendClickSaveAd:(NSString *) region;
+ (void) sendClickAddContact:(NSString *) region;
+ (void) sendClickAbuseReport:(NSString *) region;
+ (void) sendClickSendMailToFriend:(NSString *) region;
+ (void) sendClickRepondreAnnonceur:(NSString *) region;
+ (void) sendClickAdACtion:(NSString *) region;
+ (void) sendClickInfo;
+ (void) sendClickModify:(NSString *) region;
+ (void) sendClickViewOnWeb:(NSString *) region;
+ (void) sendClickDelete:(NSString *) region;
+ (void) sendClickCarto:(NSString *) region;
+ (void) sendClickItinerary:(NSString *) region;
+ (void) sendClickNavigationButton:(NSString *) region;
+ (void) sendXitiCarto:(NSString *)category department:(NSString *)department type:(NSString *)type andRegion:(NSString *) region;
+ (void) sendXitiItinerary:(NSString *)category department:(NSString *)department type:(NSString *)type andRegion:(NSString *) region;

+ (void) sendXitiPaymentConfirmationWithCategory:(NSString *)category optionType:(NSString *)type_option actionType:(ActionType) actionType andPaymentType:(PaymentType) paymentType;
+ (void) sendXitiPaymentPopupWithCategory:(NSString *)category optionType:(NSString *)typeOption actionType:(ActionType) actionType andPaymentType:(PaymentType) paymentType;

@end
