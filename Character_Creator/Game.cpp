/* 
 * File:   Game.cpp
 * Author: pigottni
 * 
 * Created on February 22, 2019, 4:00 PM
 */

#include "Game.h"
#include "Sort.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <valarray>

Game::Game(){
}

Game::Game(const string& file_name) {
    string line;
    ifstream myfile(file_name);
    
    if (myfile.is_open())
    {
        while (getline(myfile,line))
        {
            istringstream iss(line);
            vector <string> lineVec(istream_iterator<string>{iss}, 
                                    istream_iterator<string>());
            if (lineVec[1] == "small"){
                SmallFactory SF;
                m_characters.push_back(SF.createCharacter(lineVec));         
            }
            else if(lineVec[1] == "med"){
                MediumFactory MF;
                m_characters.push_back(MF.createCharacter(lineVec));
            }
            else if(lineVec[1] == "big"){
                BigFactory BF;
                m_characters.push_back(BF.createCharacter(lineVec));
            }
            else{
                cout << "** Invalid Character Type **" << endl;
            }
        }
    }
    else
        cout << "Error opening source file" << endl;
}

Game::~Game(){
    for(int i = 0; i < m_characters.size(); i++){
        delete m_characters[i];
    }
}

void Game::getCharacters() {
    Sort S;
    S.sort(this, 'n');
    cout << "************ Printing Sisters ************" << endl;
    printSisters();
    cout << "************ **************** ************" << endl;
    cout << endl;
}

void Game::getCharactersByRace(){
    Sort S;
    S.sort(this, 'r');
    cout << "************ Printing Sisters: Order by Race ************" << endl;
    printSisters();
    cout << "************ **************** ************" << endl;
    cout << endl;
}

void Game::getCharactersByHair(){
    Sort S;
    S.sort(this, 'h');
    cout << "************ Printing Sisters: Order by Hair ************" << endl;
    printSisters();
    cout << "************ **************** ************" << endl;
    cout << endl;
}

void Game::getCharactersBySpeed(){
    Sort S;
    S.sort(this, 's');
    cout << "************ Printing Sisters: Order by Speed ************" << endl;
    printSisters();
    cout << "************ **************** ************" << endl;
    cout << endl;
}

void Game::printSisters(){
    for (int i = 0; i < getSize(); i++){
        m_characters[i]->print();
    }
}

int Game::getSize() const{
    return m_characters.size();
}

void Game::swap(int i, int j){
    Character* temp = m_characters[i];
    m_characters[i]=m_characters[j];
    m_characters[j]=temp;
}

bool Game::smaller(char c, int i, int j) const{
    
    if (c == 'n'){
        if(m_characters[i]->getName() < m_characters[j]->getName())
            return true;
        else
            return false;
    }
    else if (c == 'r'){
        if(m_characters[i]->getRace() < m_characters[j]->getRace())
            return true;
        else if(m_characters[i]->getRace() == m_characters[j]->getRace() && (m_characters[i]->getName() < m_characters[j]->getName()))
            return true;
        else    
            return false;
    }
    else if (c == 'h'){
        if(m_characters[i]->getHairLength() < m_characters[j]->getHairLength())
            return true;
        else
            return false;
    }
    else if (c == 's'){
        if(m_characters[i]->getSpeed() < m_characters[j]->getSpeed())
            return true;
        else
            return false;
    }
}

