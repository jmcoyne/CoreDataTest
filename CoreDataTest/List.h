//
//  List.h
//  CoreDataTest
//
//  Created by Joan Coyne on 9/30/14.
//  Copyright (c) 2014 Mzinga. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Task;

@interface List : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSOrderedSet *relationship;
@end

@interface List (CoreDataGeneratedAccessors)

- (void)insertObject:(Task *)value inRelationshipAtIndex:(NSUInteger)idx;
- (void)removeObjectFromRelationshipAtIndex:(NSUInteger)idx;
- (void)insertRelationship:(NSArray *)value atIndexes:(NSIndexSet *)indexes;
- (void)removeRelationshipAtIndexes:(NSIndexSet *)indexes;
- (void)replaceObjectInRelationshipAtIndex:(NSUInteger)idx withObject:(Task *)value;
- (void)replaceRelationshipAtIndexes:(NSIndexSet *)indexes withRelationship:(NSArray *)values;
- (void)addRelationshipObject:(Task *)value;
- (void)removeRelationshipObject:(Task *)value;
- (void)addRelationship:(NSOrderedSet *)values;
- (void)removeRelationship:(NSOrderedSet *)values;
@end
