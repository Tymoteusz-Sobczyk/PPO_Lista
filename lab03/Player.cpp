#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>

class Player
{
private:
    int healthPoints = 100;

public:
    std::string name;

    Player(std::string name)
    {
        this->name = name;
    };

    int getHealth()
    {
        return this->healthPoints;
    };

    int attack(Player &player)
    {
        int hitPoints = (rand() % 3 + 1) * 10;
        player.takeHit(hitPoints);

        return hitPoints;
    };

    void takeHit(int hitPoints)
    {
        this->healthPoints = this->healthPoints - hitPoints;
    };

    bool isDead()
    {
        return this->healthPoints <= 0;
    }
};

Player &getRandomPlayer(std::vector<Player> &players)
{
    return players[rand() % players.size()];
};

void sortPlayers(std::vector<Player> &players)
{
    for (int i = 0; i < players.size(); i++)
    {
        for (int j = 0; j < players.size() - 1; j++)
        {
            if (players[j].getHealth() == players[j + 1].getHealth())
            {
                if (players[j].name < players[j + 1].name)
                {
                    std::swap(players[j], players[j + 1]);
                };
            }
            else if (players[j].getHealth() < players[j + 1].getHealth())
            {
                std::swap(players[j], players[j + 1]);
            };
        };
    }
}

void showPlayers(std::vector<Player> &players)
{
    std::cout << "\n----------------------------------------------\n";
    for (Player player : players)
    {
        std::cout << "| " << player.name << " [" << player.getHealth() << "]\n";
    }
};