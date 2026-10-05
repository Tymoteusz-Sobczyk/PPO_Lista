#include "Player.cpp"

int main()
{
    // seed for rand() function
    srand(time(0));

    vector<Player> players;

    for (int i = 0; i < 30; i++)
    {
        Player player;
        player.name = getRandomName();

        // determine value for hasTitle attribute
        player.hasTitle = rand() % 2 == 0 ? true : false;
        if (player.hasTitle)
        {
            player.title = getRandomTitle();
        }

        // same thing, but for status
        player.status = rand() % 2 == 0 ? true : false;

        players.push_back(player);
    }

    for (Player player : players)
    {
        if (player.status)
        {
            cout << player.indetify() << "\n";
        }
    }
    return 0;
}
