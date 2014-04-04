//
//  MainViewController.h
//  test
//
//  Created by Psybernetic on 4/04/2014.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
