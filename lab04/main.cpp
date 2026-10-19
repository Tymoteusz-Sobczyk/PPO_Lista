#include "Game.cpp"

int main()
{
    srand(time(0));
    std::vector<Player> players = {Player("Anakin Skywalker"), Player("Obi-Wan Kenobi")};
    // By default 6-faced dice is created
    Dice dice{};
    Game game{players, dice, 1000, 1000};
    game.run();
}
