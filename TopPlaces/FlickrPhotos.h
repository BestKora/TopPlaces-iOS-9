//
//  FlickrPhotos.h
//  TopPlaces
//
//  Created by Tatiana Kornilova on 1/30/16.
//  Copyright © 2016 Tatiana Kornilova. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FlickrPhotos : UITableViewController

// массив словарей NSDictionary с Flickr photo
@property (nonatomic, strong) NSArray *photos;
@end
