#include <unordered_map>
#include <vector>
#include "Player.cpp"
#include "Dice.cpp"
#include <iostream>

class Game
{
public:
    std::unordered_map<int, int> fields = {};
    std::vector<Player> players = {};
    Dice dice;

    void prepareGame()
    {
        for (size_t i = 0; i < players.size(); ++i)
        {
            const Player &player = players[i]; // Accessing player if needed
            this->fields[i] = 0;
        }
    }

    void run()
    {
        Player *winner = nullptr;

        while (winner == nullptr)
        {
            for (size_t i = 0; i < players.size(); ++i)
            {
                int result = this->dice.roll();
                int position = this->fields[i] += result;

                if (position >= 40)
                {
                    position = 40;
                }

                std::cout << players[i].name << " rolled " << result << ". Now is on position " << position << "\n\n";

                if (position >= 40)
                {
                    std::cout << "PLayer " << players[i].name << " won!\n";
                    winner = &players[i];
                    break;
                }
            }
        }
    }
};