#include <iostream>
#include "Guesser.hpp"
#include "calculate.hpp"

#pragma once 

using namespace std;
namespace bullpgia{
    class SmartGuesser: public Guesser
    {
    private:
        string prev;
        int bull;
        int index;

    public:
        string guess() override;
    };
}

#endif
