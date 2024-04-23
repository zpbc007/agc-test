/**
 * Copyright (c) Huawei Technologies Co., Ltd. 2023-2023. All rights reserved.
 * Description: AGCServerStatus is defined to describe the server status contains the timestamp of server.
 */

#import <Foundation/Foundation.h>
#import "AGCCloudDBObject.h"

NS_ASSUME_NONNULL_BEGIN

@interface AGCServerStatus : NSObject

@property (nonatomic, assign) long serverTimestamp;

@end

NS_ASSUME_NONNULL_END
