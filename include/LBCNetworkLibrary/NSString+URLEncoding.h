//
//  NSString+URLEncoding.h
//  LBCNetworkLibrary
//
//  Created by Patrick Rente on 12/11/14.
//  Copyright (c) 2014 leboncoin.fr. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (URLEncoding)

- (NSString *)urlEncodeUsingEncoding:(NSStringEncoding)encoding;
- (NSString *)convertToLantin1;
- (NSString *)handleLatin9Chars;

@end
