/* 
 * File:   CharacterFactory.h
 * Author: Nicholas
 *
 * Created on February 25, 2019, 7:52 PM
 */

#ifndef CHARACTERFACTORY_H
#define CHARACTERFACTORY_H

#include "Character.h"
#include <vector>

class CharacterFactory {
public:
    virtual Character* createCharacter(vector <string> line) = 0;
};

#endif /* CHARACTERFACTORY_H */



