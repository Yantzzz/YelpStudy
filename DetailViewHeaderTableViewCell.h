//
//  DetailViewHeaderTableViewCell.h
//  YelpStudy
//
//  Created by Yan Tian on 7/30/17.
//  Copyright © 2017 Yan Tian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"


@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
