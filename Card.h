//
//  Card.h
//  BlackjackGame
//
//  Created by Shaver, Brandon L on 5/5/14.
//  Copyright (c) 2014 Shaver, Brandon L. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum{ Diamonds, Hearts, Spades, Clubs } Suit;

@interface Card : NSObject{
    
}

@property NSInteger cardValue;
@property Suit cardSuit;

-(id) initCard: (NSInteger*) cNumber suit:(Suit) cSuit;
-(NSInteger) getCardPoint;



@end