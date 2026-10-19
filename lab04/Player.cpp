#include <string>

class Player
{
private:
    const std::string name;
    int healthPoints = 50;

public:
    Player(std::string name) : name(name)
    {
    }

    std::string getName() const
    {
        return this->name;
    }
};