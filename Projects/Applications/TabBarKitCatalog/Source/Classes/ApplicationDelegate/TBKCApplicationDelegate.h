
/*!
@project	TabBarKitCatalog
@header		TBKCApplicationDelegate.h
@copyright  (c) 2010 - 2011, David Morford
@created	9/24/2010
*/

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>
#import "TabBarKit.h"

@class TBKCMasterViewController, TBKCDetailViewController;

/*!
@class TBKCApplicationDelegate
@superclass NSObject <UIApplicationDelegate, UISplitViewControllerDelegate>
@abstract
@discussion
*/
@interface TBKCApplicationDelegate : NSObject <UIApplicationDelegate, TBKTabBarControllerDelegate>

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) TBKTabBarController *tabBarController;

#pragma mark -

+(TBKCApplicationDelegate *) sharedApplicationDelegate;

@end
