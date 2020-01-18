/* 
 * File:   BigFactory.cpp
 * Author: Nicholas
 * 
 * Created on February 25, 2019, 8:40 PM
 */

#include "BigFactory.h"

Character* BigFactory::createCharacter(vector <string> line){
    string name = line[0];
    string size = line[1];
    string race = line[5];
    int speed =  stoi(line[3]);
    double weight =  stod(line[2]);
    double hairLen =  stod(line[4]);
    string skill = line[6];
    
    Big* bigCharacter = new Big(name, size, race, speed, 
                                weight, hairLen, skill);
    
    return bigCharacter;
}

