//
//  NoteToDetailViewController.h
//  Cycle Atlanta
//
//  Created by Felix Malfait on 7/7/14.
//
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "Note.h"
#import "RecordTripViewController.h"


@class NoteManager;
@interface NoteToDetailViewController : UIViewController {
    NoteManager *noteManager;
    RecordTripViewController *recordTripVC;
    IBOutlet MKMapView *map;
    IBOutlet UINavigationItem *navBar;
}
- (IBAction)detail:(id)sender;
@property (strong, nonatomic) NoteManager *noteManager;
@property (strong, nonatomic) RecordTripViewController *recordTripVC;
@property (strong, nonatomic) IBOutlet MKMapView *map;
- (IBAction)discard:(id)sender;
- (void) updateDisplay;


@end
