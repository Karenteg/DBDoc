//
//  DetailViewController.h
//  DBDoc
//
//  Created by Nicolas Chaignon on 09/11/2014.
//  Copyright (c) 2014 Nicolas Chaignon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

