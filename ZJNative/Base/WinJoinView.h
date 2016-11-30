//
//  WinJoinView.h
//  离线app
//
//  Created by 王吉源 on 16/11/24.
//  Copyright © 2016年 王吉源. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WinJoinView : UIView
@property (weak, nonatomic) IBOutlet UIButton *subButton;
@property (weak, nonatomic) IBOutlet UIButton *addButton;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (strong, nonatomic) IBOutletCollection(UIButton) NSArray *buttons;
@property (weak, nonatomic) IBOutlet UIButton *saveButton;

@end
