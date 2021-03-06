/** Cycle Atlanta, Copyright 2012, 2013 Georgia Institute of Technology
 *                                    Atlanta, GA. USA
 *
 *   @author Christopher Le Dantec <ledantec@gatech.edu>
 *   @author Anhong Guo <guoanhong@gatech.edu>
 *
 *   Cycle Atlanta is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   Cycle Atlanta is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with Cycle Atlanta.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <MapKit/MapKit.h>
#import "NoteManager.h"
#import "TripManager.h"
#import "TripPurposeDelegate.h"

@interface NoteViewController : UIViewController <MKMapViewDelegate>
{
    id <TripPurposeDelegate> delegate;
    IBOutlet MKMapView *noteView;
    Note *note;
    IBOutlet UIBarButtonItem *flipButton;
	UIView *infoView;
    IBOutlet UINavigationItem *navBar;
}


@property (nonatomic, strong) id <TripPurposeDelegate> delegate;
@property (nonatomic, strong) Note *note;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *flipButton;
@property (nonatomic, strong) UIView *infoView;
@property (strong, nonatomic) IBOutlet UINavigationItem *navBar;

-(id)initWithNote:(Note *)note;
-(void)loadNote:(Note *)note;

@end
