#define FILEWRITER_EXPORTS
#include "FileWriter.h"
#include <fstream>

void SaveToFile(const char* name, const char* surname, int age)
{
    std::ofstream file("user.txt", std::ios::app);

    file << "Name: " << name << "\n";
    file << "Surname: " << surname << "\n";
    file << "Age: " << age << "\n";
    file << "-----------------\n";

    file.close();
}