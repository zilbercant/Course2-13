//
//  DatabaseWorker.h
//  Lesson14
//
//  Created by Ри on 24.02.15.
//  Copyright © 2016 Azat Almeev. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>

@interface DatabaseWorker : NSObject {
    sqlite3 *_database;
}

+(DatabaseWorker *)database;
-(NSMutableArray *)tableData;
-(void)deleteDataWithId:(int)id;
- (void)addDataWithName:(NSString *)name Surname:(NSString *)surname Age:(int)age Gender:(NSString *)gender;
- (void)updateDataWithName:(NSString *)name Surname:(NSString *)surname Age:(int)age Gender:(NSString *)gender ID:(int)ID;


@end
