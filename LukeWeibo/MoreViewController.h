//
//  MoreViewController.h
//  LukeWeibo
//
//  Created by Luke Lu on 13-4-4.
//  Copyright (c) 2013年 www.lukelu.org. All rights reserved.
//

#import "BaseViewController.h"

@interface MoreViewController : BaseViewController <UITableViewDataSource,UITableViewDelegate>

@property (retain, nonatomic) IBOutlet UITableView *tableView;

@end
