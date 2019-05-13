#include <iostream>
#pragma once 

using namespace std;
namespace bullpgia{
    class Guesser{
        protected:
            uint length;
            string last;
            bool firstGuess = true;
        public:
            virtual string guess() = 0;
            virtual void startNewGame(uint length){
                this->length = length;
                this->firstGuess = true;
                }
            virtual void learn(string ans){this->last = ans;}
    };
}
