#include <ctime>
#include <cstdlib>

class Dice
{
public:
    int roll()
    {
        return rand() % 6 + 1;
    }
};