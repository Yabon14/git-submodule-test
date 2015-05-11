//
//  LBCUserPrivateAccount.h
//  LBCNetworkLibrary
//
//  Created by Patrick Rente on 15/09/14.
//  Copyright (c) 2014 leboncoin.fr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LBCUserPrivateAccount : NSObject

@property(nonatomic, strong) NSString *admin_id;
@property(nonatomic, strong) NSString *dpt_code;
@property(nonatomic, strong) NSString *firstname;
@property(nonatomic, strong) NSString *phone;
@property(nonatomic, strong) NSString *pseudo;
@property(nonatomic, strong) NSString *region;
@property(nonatomic, strong) NSString *session_value;
@property(nonatomic, strong) NSString *token;
@property(nonatomic, strong) NSString *zipcode;

- (id) initWithDictionary:(NSDictionary *) dict;
- (BOOL) isValid;

@end
