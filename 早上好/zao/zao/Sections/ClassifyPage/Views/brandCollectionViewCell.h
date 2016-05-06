//
//  brandCollectionViewCell.h
//  ProjectArchitecture_26
//
//  Created by lanouhn on 15/8/4.
//  Copyright (c) 2015年 苏江涛. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SizeMacros.h"
@interface brandCollectionViewCell : UICollectionViewCell
@property (nonatomic,retain)UIImageView *image_urlView;//图片
@property (nonatomic,retain)UILabel *priceLabel;//现价
@property (nonatomic,retain)UILabel *list_priceLabel;//原价
@property (nonatomic,retain)UILabel *short_titleLabel;//标题
@property (nonatomic,retain)UILabel *sales_countLabel;//已售
@property (nonatomic,retain)UILabel *baoyuLabel;//包邮
@property (nonatomic,retain)UILabel *soure_typeLabel;//天猫

@end
