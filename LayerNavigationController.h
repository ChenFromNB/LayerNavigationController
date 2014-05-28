
#import <UIKit/UIKit.h>

@interface MLNavigationController : UINavigationController

@property (nonatomic,assign) BOOL isMoving;

-(void)addPan;
-(void)removePan;

@end
