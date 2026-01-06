#include <iostream>
#include <fstream>
#include <string>


bool is_empty_or_whitespace(const std::string& s) 
{
    return s.find_first_not_of(" \t\n\v\f\r") == std::string::npos;
}

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open()) 
    {
        std::cerr << "Can not open the file." << std::endl;
        return 1;
    }
    if (!outputFile.is_open()) 
    {
        std::cerr << "Can not create the file." << std::endl;
        return 1;
    }

    std::string line;

    while (std::getline(inputFile, line)) 
    {

        if (!is_empty_or_whitespace(line)) 
        {
            outputFile << line << std::endl;
        }
    }

    std::cout << "Completed." << std::endl;

    inputFile.close();
    outputFile.close();

    return 0;
}