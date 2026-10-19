#include <string>
#include <iostream>

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

    void takeHit(int damage)
    {
        this->healthPoints -= damage;
        std::cout << this->name << " took " << damage << " damage\n";
        if (this->healthPoints < 0)
        {
            this->healthPoints = 0;
        }
        std::cout << this->name << " now has " << this->healthPoints << " health\n";
    }

    int getHeatlhPoints()
    {
        return healthPoints;
    }
};