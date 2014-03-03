//
//  BIDSubViewController.h
//  RemoterCtrl
//
//  Created by 张巧玲 on 1/7/14.
//  Copyright (c) 2014 Jeanne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BIDMenuProperty.h"
#import "BIDItemCell.h"


@interface BIDSubViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,UIPickerViewDelegate,UIPickerViewDataSource>
@property (strong, nonatomic) BIDMenuProperty *menuProperty;
@property (copy, nonatomic) NSMutableString *toMagicUrl;
@property (weak, nonatomic) IBOutlet UITextField *SearchField;
@property (strong,nonatomic) IBOutlet UIPickerView *singlePicker;


-(void) menu_disp_ctrl:(int)index;
-(IBAction)backgroundTap:(id)sender;
-(IBAction)textFieldDoneEditing:(id)sender;
-(IBAction)backButtonPressed;
-(IBAction)muteButtonPressed;
-(IBAction)volChange:(UISlider *)sender;
-(IBAction)PresetButtonPressed:(UIButton *)button;
-(IBAction)AddPresetButtonPressed;
-(IBAction)CancelPressed;
-(IBAction)AddPressed;
-(UIImage *) getImageFromURL:(NSString *)fileURL;
-(void) setradioImage: (NSInteger) index;
-(void) decode_menu:(NSString *)response Forcmd: (NSInteger)cmd;
-(void) refresh_menu;
-(void) getPlayInfo;
-(void) refresh_presetbtn;
-(void) clearSearchFlag;

@end