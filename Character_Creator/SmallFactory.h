/* 
 * File:   SmallFactory.h
 * Author: Nicholas
 *
 * Created on February 25, 2019, 7:54 PM
 */

#ifndef SMALLFACTORY_H
#define SMALLFACTORY_H

#include "CharacterFactory.h"
#include "Character.h"
#include "Small.h"
#include <string>
#include <vector>

class SmallFactory: public CharacterFactory {
public:
    virtual Character* createCharacter(vector <string> line);
};

#endif /* SMALLFACTORY_H */

