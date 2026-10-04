#include <iostream>
#include <string>

int main()
{
    std::string question = "Ctare your age: ";
    std::string question2 = "State your full legal name: ";
    question[0] = 'S';
    question.at(3) = 't';
    std::cout << "Hello World!" << "\n";

    std::cout << question2;
    std::string fullName;
    std::getline(std::cin, fullName);

    std::cout << question;
    int x;
    std::cin >> x;

    std::cout << "\nHeloo " << fullName << "\nYour age will soon be " << ++x << "\n";
    return 0;
}