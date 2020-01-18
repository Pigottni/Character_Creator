/* 
 * File:   MediumFactory.h
 * Author: Nicholas
 *
 * Created on February 25, 2019, 8:18 PM
 */

#ifndef MEDIUMFACTORY_H
#define MEDIUMFACTORY_H

#include "CharacterFactory.h"
#include "Character.h"
#include "Medium.h"
#include <string>
#include <vector>

class MediumFactory: public CharacterFactory {
public:
    virtual Character* createCharacter(vector <string> line);
};

#endif /* MEDIUMFACTORY_H */

