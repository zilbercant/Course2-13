//
//  addDataController.h
//  Lesson14
//
//  Created by Ри on 24.02.15.
//  Copyright © 2016 Azat Almeev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "peopleInfo.h"
#import "DatabaseWorker.h"

@interface addDataController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *nameLabel;
@property (strong, nonatomic) IBOutlet UITextField *surnameLabel;
@property (strong, nonatomic) IBOutlet UITextField *ageLabel;
@property (strong, nonatomic) IBOutlet UITextField *genderLabel;
@property (nonatomic , strong) peopleInfo *info;
@property (nonatomic , strong) DatabaseWorker *worker;
@end
