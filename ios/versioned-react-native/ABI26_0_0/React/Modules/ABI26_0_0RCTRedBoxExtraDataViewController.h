/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

@protocol ABI26_0_0RCTRedBoxExtraDataActionDelegate <NSObject>
- (void)reload;
@end

@interface ABI26_0_0RCTRedBoxExtraDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, weak) id<ABI26_0_0RCTRedBoxExtraDataActionDelegate> actionDelegate;

- (void)addExtraData:(NSDictionary *)data forIdentifier:(NSString *)identifier;

@end