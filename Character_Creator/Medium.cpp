/* 
 * File:   Medium.cpp
 * Author: Nicholas
 * 
 * Created on February 24, 2019, 8:27 PM
 */

#include "Medium.h"
#include <iomanip>
#include <iostream>

Medium::Medium(const string& name, const string& size, const string& race,
             const int& speed, const double& weight, const double& hairLength, 
             const string& weapon)
    :Character(name, size, race, speed, weight, hairLength){
    m_weapon = weapon;
}

Medium::~Medium(){
}

void Medium::print(){
    cout << left 
         << "Name: "    << setw(12) << getName()
         << "Size: "    << setw(7)  << getSize()
         << "Weight: "  << setw(8)  << getWeight()
         << "Speed: "   << setw(3)  << getSpeed()
         << "HairLen: " << setw(6)  << getHairLength()
         << "Race: "    << setw(11) << getRace()
         << "Weapon: "  << m_weapon
         << endl;
}

