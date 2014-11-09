//
//  MasterViewController.h
//  DBDoc
//
//  Created by Nicolas Chaignon on 09/11/2014.
//  Copyright (c) 2014 Nicolas Chaignon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

