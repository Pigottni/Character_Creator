/* 
 * File:   Game.h
 * Author: pigottni
 *
 * Created on February 22, 2019, 4:00 PM
 */

#ifndef GAME_H
#define	GAME_H

#include "Small.h"
#include "Medium.h"
#include "Big.h"
#include "SmallFactory.h"
#include "MediumFactory.h"
#include "BigFactory.h"
#include <string>
#include <vector>

using namespace std;

class Game{
private:
    vector <Character*> m_characters;
    
public:
    Game();
    Game(const string& file_name);
    virtual ~Game();
    void getCharacters();
    void getCharactersByRace();
    void getCharactersByHair();
    void getCharactersBySpeed();
    void printSisters();
    int getSize() const;
    void swap(int i, int j);
    bool smaller(char c, int i, int j) const;
};

#endif	/* GAME_H */

