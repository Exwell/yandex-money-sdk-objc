//
// Created by Alexander Mertvetsov on 22.05.14.
// Copyright (c) 2014 Yandex.Money. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YMABaseRequest.h"
#import "YMAProcessPaymentResponse.h"

@class YMAMoneySource;

@interface YMAProcessPaymentRequest : YMABaseRequest <YMAParametersPosting>

- (instancetype)processPaymentRequestId:(NSString *)requestId moneySource:(YMAMoneySource *)moneySource csc:(NSString *)csc successUri:(NSString *)successUri failUri:(NSString *)failUri;

@end