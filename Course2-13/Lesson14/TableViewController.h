//
//  TableViewController.h
//  Lesson14
//
//  Created by Ри on 24.02.15.
//  Copyright © 2016 Azat Almeev. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DatabaseWorker.h"

@interface TableViewController : UITableViewController<UITableViewDataSource,UITableViewDelegate>{
    NSMutableArray *_data;
}

@property (nonatomic) NSMutableArray *data;
@property (nonatomic) DatabaseWorker *worker;
@end
