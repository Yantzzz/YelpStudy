//
//  YelpDataStore.h
//  YelpStudy
//
//  Created by Yan Tian on 7/30/17.
//  Copyright © 2017 Yan Tian. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "YelpDataModel.h"

@import CoreLocation;

@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end
