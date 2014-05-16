
#import <UIKit/UIKit.h>

@interface LayerNavigationController : UINavigationController

@property (nonatomic,assign) BOOL canDragBack;
@property (nonatomic,assign) BOOL isMoving;

-(void)addPan;
-(void)removePan;

@end