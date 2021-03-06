//
//  LCCKContact.h
//  ChatKit
//
//  v2.1.1 Created by ElonChan on 16/7/11.
//  Copyright © 2018 ChenYilong（wechat id：chenyilong1010）. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LCCKUserDelegate.h"

@interface LCCKContact : NSObject <LCCKUserDelegate>

@property (nonatomic, assign, getter = isChecked) BOOL checked;

@end
