#include <iostream>
#include "FileWriter.h"

int main()
{
    std::string name;
    std::string surname;
    int age;

    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "Enter surname: ";
    std::cin >> surname;

    std::cout << "Enter age: ";
    std::cin >> age;

    SaveToFile(name.c_str(), surname.c_str(), age);

    std::cout << "Data saved to file\n";
}