//
//  DetailViewController.h
//  Macnews Notify
//
//  Created by mtjddnr on 2015. 3. 6..
//  Copyright (c) 2015년 mtjddnr. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UIWebViewDelegate, UIGestureRecognizerDelegate>

@property (strong, nonatomic) id detailItem;
@property (strong, nonatomic) NSURL *url;
@end

