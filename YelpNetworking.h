//
//  YelpNetworking.h
//  YelpStudy
//
//  Created by Yan Tian on 7/28/17.
//  Copyright © 2017 Yan Tian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YelpDataModel.h"

@import CoreLocation;


typedef void (^RestaurantCompletionBlock)(NSArray <YelpDataModel *>* dataModelArray);

@interface YelpNetworking : NSObject

+ (YelpNetworking *)sharedInstance;

- (void)fetchRestaurantsBasedOnLocation:(CLLocation *)location term:(NSString *)term completionBlock:(RestaurantCompletionBlock)completionBlock;

@end
