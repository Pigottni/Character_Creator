/* 
 * File:   Character.h
 * Author: pigottni
 *
 * Created on February 22, 2019, 4:01 PM
 */

#ifndef CHARACTER_H
#define	CHARACTER_H

#include <string>

using namespace std;

class Character{
private:
    string m_name;
    string m_size;
    string m_race;
    int m_speed;
    double m_weight;
    double m_hairLength;
    
public:
    Character(const string& name, const string& size, const string& race,
              const int& speed, const double& weight, const double& hairLength);
    virtual ~Character();
    virtual void print(){}
    string getName(){return m_name;}
    string getSize(){return m_size;}
    string getRace(){return m_race;}
    int getSpeed(){return m_speed;}
    double getWeight(){return m_weight;}
    double getHairLength(){return m_hairLength;}
};

#endif	/* CHARACTER_H */
