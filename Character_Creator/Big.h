/* 
 * File:   Big.h
 * Author: Nicholas
 *
 * Created on February 24, 2019, 8:44 PM
 */

#ifndef BIG_H
#define BIG_H

#include "Character.h"

class Big : public Character {
private:
    string m_skill;
    
public:
    Big(const string& name, const string& size, const string& race,
          const int& speed, const double& weight, const double& hairLength, 
          const string& skill);
    virtual ~Big();
    virtual void print();
    string getSkill(){return m_skill;}
};

#endif /* BIG_H */

