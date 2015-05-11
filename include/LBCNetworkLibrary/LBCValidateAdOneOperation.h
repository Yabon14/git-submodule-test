//
//  LBCInsertAdOneOperation.h
//  LBCNetworkLibrary
//
//  Created by Patrick Rente on 18/09/14.
//  Copyright (c) 2014 leboncoin.fr. All rights reserved.
//

#import "LBCGenericOperation.h"
#import "LBCInsertAdOneResponse.h"
#import "LBCLoadAdResponse.h"
#import "LBCError.h"


@protocol LBCValidateAdOneDelegate <LBCGenericOperationDelegate>

@required

- (void) downloadValidateAdOneDoneWithResponse:(LBCInsertAdOneResponse *)insertAdOneResponse andError:(LBCError *) error;

@end

@interface LBCValidateAdOneOperation : LBCGenericOperation

- (id) initValidateAdOneWithDelegate:(id<LBCValidateAdOneDelegate>)delegate andLoadAdResponseObject:(LBCInsertAd *)insertAd;
- (id) initModifyOneWithDelegate:(id<LBCValidateAdOneDelegate>)delegate andLoadAdResponseObject:(LBCLoadAdResponse *)loadResponse;

@end