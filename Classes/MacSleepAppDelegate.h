//
//  MacSleepAppDelegate.h
//  MacSleep
//
//  Created by Eduard Litau on 12/11/10.
//  Copyright 2010 FH Köln, simfy GmbH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ssh.h"

@class MacSleepViewController;

@interface MacSleepAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    MacSleepViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet MacSleepViewController *viewController;

@end

