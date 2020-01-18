/* 
 * File:   Big.cpp
 * Author: Nicholas
 * 
 * Created on February 24, 2019, 8:44 PM
 */

#include "Big.h"
#include <iomanip>
#include <iostream>

Big::Big(const string& name, const string& size, const string& race,
             const int& speed, const double& weight, const double& hairLength, 
             const string& skill)
    :Character(name, size, race, speed, weight, hairLength){
    m_skill = skill;
}

Big::~Big(){
}

void Big::print(){
    cout << left 
         << "Name: "    << setw(12) << getName()
         << "Size: "    << setw(7)  << getSize()
         << "Weight: "  << setw(8)  << getWeight()
         << "Speed: "   << setw(3)  << getSpeed()
         << "HairLen: " << setw(6)  << getHairLength()
         << "Race: "    << setw(11) << getRace()
         << "Skill: "   << m_skill
         << endl;
}

