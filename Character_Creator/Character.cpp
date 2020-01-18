/* 
 * File:   Character.cpp
 * Author: pigottni
 * 
 * Created on February 22, 2019, 4:01 PM
 */

#include "Character.h"

Character::Character(const string& name, const string& size, const string& race,
                     const int& speed, const double& weight, 
                     const double& hairLength) {
    m_name = name;
    m_size = size;
    m_race = race;
    m_speed = speed;
    m_weight = weight;
    m_hairLength = hairLength;
}

Character::~Character(){
}

