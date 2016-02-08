//
//  TopPlacesTVC.h
//  TopPlaces
//
//  Created by Tatiana Kornilova on 1/29/16.
//  Copyright © 2016 Tatiana Kornilova. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TopPlacesTVC : UITableViewController

// массив словарей NSDictionary с Flickr place
@property (nonatomic,strong) NSArray *places;

@end
