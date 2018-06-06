//
//  BaseModule.m
//  RNBaiMap
//
//  Created by 王发果 on 2018/6/6.
//  Copyright © 2018年 王发果. All rights reserved.
//

#import "BaseModule.h"

@implementation BaseModule

@synthesize bridge = _bridge;

-(NSMutableDictionary *)getEmptyBody {
    NSMutableDictionary *body = @{}.mutableCopy;
    return body;
}

-(void)sendEvent:(NSString *)name body:(NSMutableDictionary *)body {
    [self.bridge.eventDispatcher sendDeviceEventWithName:name body:body];
}

@end
