//
//  DetailViewController.h
//  TextGame
//
//  Created by Rhan Kim on 11/23/13.
//  Copyright (c) 2013 Rhan Kim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
