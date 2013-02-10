//
//  ViewController.h
//  FirstApp
//
//  Created by John Brunton on 10/02/2013.
//  Copyright (c) 2013 John Brunton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>

- (IBAction)changeGreeting:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;

@end
