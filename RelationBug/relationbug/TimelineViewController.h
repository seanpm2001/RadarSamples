//
//  TimelineViewController.h
//  relationbug
//
//  Created by Oliver Drobnik on 6/25/12.
//  Copyright (c) 2012 Cocoanetics. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimelineViewController : UITableViewController <NSFetchedResultsControllerDelegate>

- (id)initWithMOC:(NSManagedObjectContext *)moc;

@end
