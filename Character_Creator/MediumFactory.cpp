/* 
 * File:   MediumFactory.cpp
 * Author: Nicholas
 * 
 * Created on February 25, 2019, 8:18 PM
 */

#include "MediumFactory.h"

Character* MediumFactory::createCharacter(vector <string> line){
    string name = line[0];
    string size = line[1];
    string race = line[5];
    int speed =  stoi(line[3]);
    double weight =  stod(line[2]);
    double hairLen =  stod(line[4]);
    string weapon = line[6];
    
    Medium* mediumCharacter = new Medium(name, size, race, speed, 
                                         weight, hairLen, weapon);
    
    return mediumCharacter;
}

