//
//  IPRedLearningViewController.h
//  inPlug
//
//  Created by ljc on 15/9/29.
//  Copyright (c) 2015年 netriver. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IPRootViewController.h"
#import "IPRedDevice.h"
#import "TSBlueResponse.h"
#import "model/TSInfrared.h"

@interface IPRedLearningViewController : IPRootViewController <TSBlueResponseDelegate, UIAlertViewDelegate>
@property (nonatomic, strong) IPRedDevice *dv;

@property (nonatomic, assign)int flag;
@property (weak, nonatomic) IBOutlet UIButton *saveBtb;

@property (nonatomic, strong) NSMutableArray *datasourceArr;

- (IBAction)commitBtnClick:(UIButton *)sender;

- (IBAction)cancelBtnClick:(UIButton *)sender;
@end
