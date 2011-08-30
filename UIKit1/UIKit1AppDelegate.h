//
//  UIKit1AppDelegate.h
//  UIKit1
//
//  Created by Allyson Barros on 30/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIKit1ViewController;

@interface UIKit1AppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UIKit1ViewController *viewController;

@end
