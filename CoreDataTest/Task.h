//
//  Task.h
//  CoreDataTest
//
//  Created by Joan Coyne on 9/30/14.
//  Copyright (c) 2014 Mzinga. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Task : NSManagedObject

@property (nonatomic, retain) NSString * summary;
@property (nonatomic, retain) NSNumber * completed;
@property (nonatomic, retain) NSDate * created;
@property (nonatomic, retain) NSManagedObject *list;

@end
