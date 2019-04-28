#include <iostream>
#include "Guesser.hpp"
#include "calculate.hpp"

#ifndef SmartGuesser_hpp
#define SmartGuesser_hpp

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
