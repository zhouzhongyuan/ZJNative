//
//  PlaceUpModel.h
//  离线app
//
//  Created by 王吉源 on 16/11/17.
//  Copyright © 2016年 王吉源. All rights reserved.
//

#import "JSONModel.h"

@protocol PlaceUpGoodModel <NSObject>
@end
@interface PlaceUpGoodModel : JSONModel
@property(nonatomic,strong)NSString <Optional>*materialCode;
@property(nonatomic,strong)NSString <Optional>*salesID;
@property(nonatomic,strong)NSString <Optional>*type;
@property(nonatomic,strong)NSString <Optional>*bigunit;
@property(nonatomic,strong)NSString <Optional>*midunit;
@property(nonatomic,strong)NSString <Optional>*smallunit;
@property(nonatomic,strong)NSString <Optional>*quantity;
@property(nonatomic,strong)NSString <Optional>*spec;
@property(nonatomic,strong)NSString <Optional>*price;
@property(nonatomic,strong)NSString <Optional>*stockQuantity;
@property(nonatomic,strong)NSString <Optional>*amount;
@property(nonatomic,strong)NSString <Optional>*note;
@end
@interface PlaceUpModel : JSONModel
@property(nonatomic,strong)NSString <Optional>*date;
@property(nonatomic,strong)NSString <Optional>*customer;
@property(nonatomic,strong)NSString <Optional>*total;
@property(nonatomic,strong)NSString <Optional>*staff;
@property(nonatomic,strong)NSString <Optional>*company;
@property(nonatomic,strong)NSString <Optional>*id;
@property(nonatomic,strong)NSMutableArray <PlaceUpGoodModel,Optional>*goods;
@end
