//
//  CTBlock.h
//  Cat Trap 2
//
//  Created by Aaron Vizzini on 4/9/11.
//  Copyright 2011 Alternative Visuals. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CTPushable.h"

@class CTGridManager;

@interface CTBlock : CTPushable 
{
}
-(bool)pushableInDirection:(CTDirection)direction;
-(void)assessLcoationForDirection:(CTDirection)direciton;
@end
