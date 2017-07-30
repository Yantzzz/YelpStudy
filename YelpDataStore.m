//
//  YelpDataStore.m
//  YelpStudy
//
//  Created by Yan Tian on 7/30/17.
//  Copyright © 2017 Yan Tian. All rights reserved.
//

#import "YelpDataStore.h"

@implementation YelpDataStore

+ (YelpDataStore *)sharedInstance {
    static YelpDataStore *_sharedInstance = nil;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[YelpDataStore alloc] init];
    });
    return _sharedInstance;
}


@end
