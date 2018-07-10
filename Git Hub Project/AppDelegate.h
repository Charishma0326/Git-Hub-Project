//
//  AppDelegate.h
//  Git Hub Project
//
//  Created by Media3 on 7/10/18.
//  Copyright © 2018 Media3. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

