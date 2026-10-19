#include <unordered_map>
#include <vector>
#include "Player.cpp"
#include "Dice.cpp"
#include <iostream>

class Game
{
private:
    std::vector<Player> players = {};
    const Dice dice;
    const int max_fields;
    const int max_turn;
    int current_turn = 1;
    std::unordered_map<int, int> fields = {};

public:
    Game(std::vector<Player> players, Dice dice, int max_fields, int max_turn) : players(players), dice(dice), max_fields(max_fields), max_turn(max_turn)
    {
        for (size_t i = 0; i < players.size(); ++i)
        {
            this->fields[i] = 0;
        }
    }

    Game(std::vector<Player> players, Dice dice) : Game(players, dice, 100, -1) {}

    Game(std::vector<Player> players, Dice dice, int max_fields) : Game(players, dice, max_fields, -1) {}

    Game(std::vector<Player> players, int max_turn, Dice dice) : Game(players, dice, 100, max_turn + 1) {}

    void run()
    {
        const Player *winner = nullptr;
        int alive_players = players.size();
        while (winner == nullptr)
        {
            std::cout << "----------------------------------\n";
            std::cout << current_turn++ << ". turn\n";

            for (size_t i = 0; i < players.size(); ++i)
            {
                if (players[i].getHeatlhPoints() <= 0)
                {
                    continue;
                }

                int result = this->dice.roll();
                int position = this->fields[i] += result;

                if (position >= max_fields)
                {
                    position = max_fields;
                }

                std::cout << players[i].getName() << " rolled " << result << ". Now is on position " << position << "\n\n";

                if (position >= max_fields)
                {
                    std::cout << "PLayer " << players[i].getName() << " won!\n";
                    winner = &players[i];
                    break;
                }

                if (position % 7 == 0)
                {
                    result = this->dice.roll();
                    players[i].takeHit(result);
                }

                if (players[i].getHeatlhPoints() <= 0)
                {
                    alive_players--;
                }
            }
            if (alive_players == 1)
            {
                for (Player player : players)
                {
                    if (player.getHeatlhPoints() > 0)
                    {
                        std::cout << "PLayer " << player.getName() << " won!\n";
                        winner = &player;
                        break;
                    }
                }
            }
            if (current_turn == max_turn)
            {
                int winning_player = 0;
                int max_fields = 0;
                for (size_t i = 0; i < players.size(); ++i)
                {
                    if (max_fields < this->fields[i])
                    {
                        max_fields = this->fields[i];
                        winning_player = i;
                    }
                }
                std::cout << "PLayer " << players[winning_player].getName() << " won!\n";
                winner = &players[winning_player];
                break;
            }
        }
    }
};