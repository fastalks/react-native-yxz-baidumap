//
//  GeolocationModule.h
//  RNBaiMap
//
//  Created by 王发果 on 2018/6/6.
//  Copyright © 2018年 王发果. All rights reserved.
//

#import "BaseModule.h"

#import <BaiduMapAPI_Location/BMKLocationService.h>

#import "RCTBaiduMapViewManager.h"

@interface GeolocationModule : BaseModule <BMKGeoCodeSearchDelegate> {
}

@end
