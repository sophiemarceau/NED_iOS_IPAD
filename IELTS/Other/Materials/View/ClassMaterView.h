//
//  ClassMaterView.h
//  IELTS
//
//  Created by 李牛顿 on 14-11-14.
//  Copyright (c) 2014年 Neworiental. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MJRefresh.h"

@interface ClassMaterView : UIView

@property (nonatomic,strong) NSDictionary *dicData;
@property (nonatomic,strong) MJRefreshHeaderView *header;

@end
