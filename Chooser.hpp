#include <iostream>
#ifndef Chooser_hpp
#define Chooser_hpp

using namespace std;
namespace bullpgia{
    class Chooser{
        public:
            virtual string choose(uint length) = 0;
    };
} 

#endif