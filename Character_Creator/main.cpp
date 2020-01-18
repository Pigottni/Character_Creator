/* 
 * File:   main.cpp
 * Author: daniel
 *
 * Created on January 28, 2019, 11:15 PM
 */

#include <cstdlib>
#include "Game.h"

/*
 * 
 */
int main(int argc, char** argv) 
{   
    
    Game game = Game("sisters.txt");
    
    game.getCharacters();
    
    game.getCharactersByRace();
    
    game.getCharactersBySpeed();

    game.getCharactersByHair();
    
    game.getCharacters();
    
    return 0;
}

