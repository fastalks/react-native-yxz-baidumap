//
//  RNBaiduMapModule.h
//  RNBaiMap
//
//  Created by 王发果 on 2018/6/6.
//  Copyright © 2018年 王发果. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModule.h"

#import "RCTBaiduMapViewManager.h"

@interface RNBaiduMapModule : BaseModule <BMKMapViewDelegate>

-(BMKGeoCodeSearch *)getGeocodesearch;

-(void)sendEvent:(NSString *)name body:(NSMutableDictionary *)body;

-(NSMutableDictionary *)getEmptyBody;

-(CLLocationCoordinate2D)getBaiduCoor:(double)lat lng:(double)lng;

-(RCTBaiduMapView *) getBaiduMapView;

@end
