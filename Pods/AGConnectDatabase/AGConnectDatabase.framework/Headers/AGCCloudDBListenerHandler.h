/**
 * Copyright (c) Huawei Technologies Co., Ltd. 2020-2020. All rights reserved.
 * Description: AGCCloudDBListenerHandler is a class to indicate that a snapshot listener is registered.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AGCCloudDBListenerHandler : NSObject

/**
 Remove snapshot listener.
 */
- (void)remove;

@end

NS_ASSUME_NONNULL_END
