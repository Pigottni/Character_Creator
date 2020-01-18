/* 
 * File:   Small.h
 * Author: Nicholas
 *
 * Created on February 24, 2019, 2:18 PM
 */

#ifndef SMALL_H
#define SMALL_H

#include "Character.h"

class Small : public Character {
private:
    bool m_isEquipped;
    
public:
    Small(const string& name, const string& size, const string& race,
          const int& speed, const double& weight, const double& hairLength, 
          const bool& isEquipped);
    virtual ~Small();
    virtual void print();
    bool getEquipped(){return m_isEquipped;}
};

#endif /* SMALL_H */

