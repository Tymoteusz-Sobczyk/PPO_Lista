#include <ctime>
#include <cstdlib>

class Dice
{
private:
    const int faces;

public:
    Dice() : Dice(6)
    {
    }

    // This is called member initializer list - initializes constant attributes
    // with values passed by user
    // !!! This is the only way to initialize a constant value of an object
    Dice(int faces) : faces(faces)
    {
    }

    int roll() const
    {
        return rand() % faces + 1;
    }
};