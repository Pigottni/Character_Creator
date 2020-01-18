/* 
 * File:   Sort.cpp
 * Author: Nicholas
 * 
 * Created on February 25, 2019, 8:54 PM
 */

#include "Sort.h"
#include "Game.h"

void Sort::sort(Game* game, char s){
    bool sorted = false;
    int n = game->getSize();
    while(!sorted){
        sorted = true;
        for(int i=1; i<n; i++){
            if(!game->smaller(s,i-1,i)){
                game->swap(i-1,i);
                sorted = false;
            }
        }
        n--;
    }
}
