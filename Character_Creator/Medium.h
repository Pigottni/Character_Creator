/* 
 * File:   Medium.h
 * Author: Nicholas
 *
 * Created on February 24, 2019, 8:27 PM
 */

#ifndef MEDIUM_H
#define MEDIUM_H

#include "Character.h"

class Medium : public Character {
private:
    string m_weapon;
    
public:
    Medium(const string& name, const string& size, const string& race,
          const int& speed, const double& weight, const double& hairLength, 
          const string& weapon);
    virtual ~Medium();
    virtual void print();
    string getWeapon(){return m_weapon;}
};

#endif /* MEDIUM_H */

