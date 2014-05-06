//
//  GameModel.h
//  BlackjackGame
//
//  Created by Shaver, Brandon L on 5/6/14.
//  Copyright (c) 2014 Shaver, Brandon L. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Deck.h"
#import "Hand.h"

typedef enum {
    Player,
    Dealer,
    Draw
}   Winner;

@interface GameModel : NSObject{
    
    Hand *dealer;
    Hand *player;
    Deck *theDeck;
    
    int totalPlays;
    
}

@property Hand *dealer;
@property Hand *player;
@property Deck *theDeck;
@property int totalPlays;

-(void) initializeRound;
/*
-(void) playerHits;
-(void) playerStands;
-(void) playerDoubles;
-(void) playerSplits;
-(void) dealNewHand;
*/

//+(GameModel *)getGameModel;


@end