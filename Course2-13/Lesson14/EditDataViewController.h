//
//  EditDataViewController.h
//  Lesson14
//
//  Created by Ри on 24.02.15.
//  Copyright © 2016 Azat Almeev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "peopleInfo.h"
#import "DatabaseWorker.h"

@interface EditDataViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *nameLabel;
@property (strong, nonatomic) IBOutlet UITextField *surnameLabel;
@property (strong, nonatomic) IBOutlet UITextField *ageLabel;
@property (strong, nonatomic) IBOutlet UITextField *genderLabel;
@property (strong, nonatomic) peopleInfo *info;
@property (strong, nonatomic) DatabaseWorker *worker;


@end
