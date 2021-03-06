/** Cycle Atlanta, Copyright 2012, 2013 Georgia Institute of Technology
 *                                    Atlanta, GA. USA
 *
 *   @author Christopher Le Dantec <ledantec@gatech.edu>
 *   @author Anhong Guo <guoanhong@gatech.edu>
 *
 *   Updated/Modified for Atlanta's app deployment. Based on the
 *   CycleTracks codebase for SFCTA.
 *
 ** CycleTracks, Copyright 2009,2010 San Francisco County Transportation Authority
 *                                    San Francisco, CA, USA
 *
 *   @author Matt Paul <mattpaul@mopimp.com>
 *
 *   This file is part of CycleTracks.
 *
 *   CycleTracks is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   CycleTracks is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with CycleTracks.  If not, see <http://www.gnu.org/licenses/>.
 */

//
//  CycleTracksAppDelegate.h
//  CycleTracks
//
//  Copyright 2009-2010 SFCTA. All rights reserved.
//  Written by Matt Paul <mattpaul@mopimp.com> on 9/21/09.
//	For more information on the project, 
//	e-mail Billy Charlton at the SFCTA <billy.charlton@sfcta.org>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "ProgressView.h"
#import "OBARegionHelper.h"

@class TripManager;
@class NoteManager;

@interface CycleAtlantaAppDelegate : NSObject <UIApplicationDelegate>
{
    NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;

    UIWindow *window;
    UITabBarController *tabBarController;
	NSString *uniqueIDHash;
    BOOL isRecording;
    CLLocationManager *locationManager;
    UIView *backgroundView;
    UIImageView *backgroundImage;
}

@property (nonatomic, strong, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, strong, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, strong, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UITabBarController *tabBarController;
@property (nonatomic, strong) NSString *uniqueIDHash;
@property (nonatomic, assign) BOOL isRecording;
@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, strong) ProgressView *storeLoadingView;
@property (nonatomic, strong) OBARegionHelper *regionHelper;
@property (nonatomic, strong) id regionObserver;

- (void) regionSelected;
- (void) showRegionListViewController;

/**
 * Abstracts OBAModelDAO setters / getters and calls the appropriate analytics methods.
 */
- (void)writeSetRegionAutomatically:(BOOL) setRegionAutomatically;
- (BOOL)readSetRegionAutomatically;


- (NSString *)applicationDocumentsDirectory;
- (void)initUniqueIDHash;
- (void) showRegionSelectMessage;

@end

