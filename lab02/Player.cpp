#include <string>
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

class Player
{
public:
    string name;
    bool hasTitle = false;
    string title;
    int healthPoints = 100;
    bool status = false;

    string indetify()
    {
        string text = "[" + to_string(healthPoints) + "] |";
        if (hasTitle)
        {
            text += " " + title;
        }
        text += " " + name;
        return text;
    }
};

string getRandomName()
{
    string names[] = {"John", "Jack", "George", "Kevin", "Anakin", "Ben", "Chr1skyy", "Geralt", "Julian Alfred Pankratz de Lettenhove"};
    return names[rand() % (sizeof(names) / sizeof(string))];
}

string getRandomTitle()
{
    string titles[] = {"Darth", "Capt.", "Adm.", "Brig", "Col.", "Dr.", "Gen.", "Lt."};
    return titles[rand() % (sizeof(titles) / sizeof(string))];
}