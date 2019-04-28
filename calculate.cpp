#include <iostream>
#include "calculate.hpp"

using namespace std;

string calculateBullAndPgia(string choice, string guess){ 
    int bull = 0;
    int pgia = 0;
    int length = choice.length();
    int choiceArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int guessArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for(int i=0; i<length; i++){
        if(choice.at(i) == guess.at(i)){ bull++;}
        else{
            int choiceIndex = (int)(choice.at(i) - '0');
            int guessIndex = (int)(guess.at(i) - '0');

            choiceArray[choiceIndex]++;
            guessArray[guessIndex]++;
        }
   }
   for(int i=0; i<10; i++){
       pgia += min(choiceArray[i], guessArray[i]);
   }
   string ans = to_string(bull) + "," + to_string(pgia);
   return ans;
}