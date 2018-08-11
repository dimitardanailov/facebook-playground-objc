//
//  AppDelegate.h
//  FacebookPlayground
//
//  Created by Dimitar Danailov on 11.08.18.
//  Copyright © 2018 Dimitar Danailov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

