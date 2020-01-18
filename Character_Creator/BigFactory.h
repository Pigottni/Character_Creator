/* 
 * File:   BigFactory.h
 * Author: Nicholas
 *
 * Created on February 25, 2019, 8:40 PM
 */

#ifndef BIGFACTORY_H
#define BIGFACTORY_H

#include "CharacterFactory.h"
#include "Character.h"
#include "Big.h"
#include <string>
#include <vector>

class BigFactory: public CharacterFactory {
public:
    virtual Character* createCharacter(vector <string> line);
};

#endif /* BIGFACTORY_H */

