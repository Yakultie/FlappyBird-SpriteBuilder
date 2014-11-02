//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipes,
    DrawingOrderGround,
    DrawingOrderHero
};

float timeSinceObstacle;

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    Character*     character;
    CCPhysicsNode* physicsNode;
}

-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
