/* 
 * File:   Small.cpp
 * Author: Nicholas
 * 
 * Created on February 24, 2019, 2:18 PM
 */

#include "Small.h"
#include <iomanip>
#include <iostream>

Small::Small(const string& name, const string& size, const string& race,
             const int& speed, const double& weight, const double& hairLength, 
             const bool& isEquipped)
    :Character(name, size, race, speed, weight, hairLength){
    m_isEquipped = isEquipped;
}

Small::~Small(){
}

void Small::print(){
    cout << left 
         << "Name: "       << setw(12) << getName()
         << "Size: "       << setw(7)  << getSize()
         << "Weight: "     << setw(8)  << getWeight()
         << "Speed: "      << setw(3)  << getSpeed()
         << "HairLen: "    << setw(6)  << getHairLength()
         << "Race: "       << setw(11) << getRace()
         << "IsEquipped: " << m_isEquipped
         << endl;
}
