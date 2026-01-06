#include <iostream> 
#include <fstream>  
#include <string>   
using namespace std;

int main() {
    ifstream inputFile("source.txt");

    ofstream outputFile("destination.txt");

    if (!inputFile.is_open()) 
    {
        cout << "source.txt not found!" << endl;
        return 1; 
    }

    string line;

    while (getline(inputFile, line)) 
    {
        outputFile << line << endl;
    }
    cout << "Copied!" << endl;

    inputFile.close();
    outputFile.close();

    return 0;
}