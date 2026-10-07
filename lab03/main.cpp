#include "Player.cpp"
#include <stdlib.h>

#define NUMBER_OF_PLAYERS 10
// To do:
// gracz ma szansę na obronę przed atakiem
int main()
{
    system("cls");
    int alivePlayers = NUMBER_OF_PLAYERS;
    srand(time(0));

    std::vector<Player> players;

    for (int i = 0; i < NUMBER_OF_PLAYERS; i++)
    {
        Player player(getRandomFullName());
        players.push_back(player);
    }

    int round = 1;
    bool ongoing = true;

    while (ongoing)
    {

        Player &player = getRandomPlayer(players);
        Player &target = getRandomPlayer(players);

        if (&player == &target)
        {
            continue;
        }
        if (player.isDead())
        {
            continue;
        }
        if (target.isDead())
        {
            continue;
        }

        showPlayers(players);
        std::cout << "Round " << round << ":\n";

        int hitPoints = player.attack(target);

        std::cout << player.name << " attacked "
                  << target.name << " with "
                  << hitPoints << " points\n";

        if (target.isDead())
        {
            std::cout << target.name + " died\n";
            alivePlayers--;
        }

        if (alivePlayers == 1)
        {
            std::cout << "\n"
                      << player.name
                      << " is the last one standing!\n";

            ongoing = false;
        }

        std::cout << "\nPress Enter to continue...";
        char temp = 'x';
        while (temp != '\n')
            std::cin.get(temp);
        system("cls");

        round++;
    }
}