#include "Game.cpp"

int main()
{
    srand(time(0));

    Game game;
    game.dice = Dice();

    game.players = {
        Player("Anakin Skywalker"),
        Player("Obi-Wan Kenobi")};

    game.prepareGame();
    game.run();
}