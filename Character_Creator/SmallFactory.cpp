/* 
 * File:   SmallFactory.cpp
 * Author: Nicholas
 * 
 * Created on February 25, 2019, 7:54 PM
 */

#include "SmallFactory.h"

Character* SmallFactory::createCharacter(vector <string> line){
    string name = line[0];
    string size = line[1];
    string race = line[5];
    int speed =  stoi(line[3]);
    double weight =  stod(line[2]);
    double hairLen =  stod(line[4]);
    bool isEquipped = true;
    if(line[6] == "FALSE")
        isEquipped = false;
    
    Small* smallCharacter = new Small(name, size, race, speed, 
                                      weight, hairLen, isEquipped);
    
    return smallCharacter;
}

