//
//  ImageViewController.h
//  ImaginariumMy
//
//  Created by Tatiana Kornilova on 12/14/13.
//  Copyright (c) 2013 Tatiana Kornilova. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageViewController : UIViewController

// Модель для этого MVC ... URL изображения image для показа на экране
@property (nonatomic, strong) NSURL *imageURL;
@end
