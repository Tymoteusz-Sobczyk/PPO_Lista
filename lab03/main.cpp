#include "Player.cpp"

// To do:
// dowolna ilość graczy, gra się kończy gdy zostanie jeden żywy gracz, gracz ma szansę na obronę przed atakiem
int main()
{
    srand(time(0));
    Player luke("Luke");
    Player vader("Vader");

    std::vector<Player> players;
    players.push_back(luke);
    players.push_back(vader);

    int round = 1;
    bool ongoing = true;

    while (ongoing)
    {
        Player &player = getRandomPlayer(players);
        Player &target = getRandomPlayer(players);

        if (&player == &target)
        {
            continue;
        };
        showPlayers(players);

        int hitPoints = player.attack(target);

        std::cout << "Round " << round << ": "
                  << player.name << " attacked "
                  << target.name << " with "
                  << hitPoints << " points\n";

        for (Player player : players)
        {
            if (player.isDead())
            {
                std::cout << player.name + " died\n";
                ongoing = false;
            }
        }

        round++;
    }
}