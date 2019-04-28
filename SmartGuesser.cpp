#include <iostream>
#include "SmartGuesser.hpp"

using namespace std;
using namespace bullpgia;

string SmartGuesser::guess(){                   
    string curr = "";
    if(this->firstGuess){
        for(int i=0; i<this->length; i++){
            curr += '0';
        }
        this->bull = -1;
        this->index = 0;
        this->prev = curr;
        this->firstGuess = false;
        return curr;
    }
    int bulltemp = this->last.at(0) - '0';
    curr = this->prev;
    if(this->bull == -1){
        this->bull = bulltemp;
        curr.at(this->index)++;
        this->prev = curr;
        return curr;
    }
    else{
        if(this->bull == bulltemp){
            curr.at(index)++;
            this->prev = curr;
            return curr;
        }
        if(this->bull > bulltemp){
           curr.at(index)--;
           index++;
           curr.at(index)++;
           this->prev = curr;
           return curr; 
        }
        if(bull < bulltemp){
            index++;
            curr.at(index)++;
            this->bull = bulltemp;
            this->prev = curr;
            return curr;
        }
    }
    return curr;
}