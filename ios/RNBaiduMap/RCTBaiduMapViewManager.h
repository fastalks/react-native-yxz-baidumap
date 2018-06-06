//
//  RCTBaiduMapViewManager.h
//  RNBaiMap
//
//  Created by 王发果 on 2018/6/6.
//  Copyright © 2018年 王发果. All rights reserved.
//

#import <React/RCTViewManager.h>

#import "RCTBaiduMapView.h"

@interface RCTBaiduMapViewManager : RCTViewManager<BMKMapViewDelegate>

+(void)initSDK:(NSString *)key;

-(void)sendEvent:(RCTBaiduMapView *) mapView params:(NSDictionary *) params;

@end
