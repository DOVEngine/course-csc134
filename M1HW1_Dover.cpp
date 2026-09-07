#include <iostream>
#include <string>
using namespace std;

int main() {
    string movieName = "Rogue One: A Star Wars Story";
    int releaseYear = 2016;
    double boxOffice = 1056.06; // worldwide gross in millions

    cout << "The movie \"" << movieName << "\" came out in " << releaseYear << "." << endl;
    cout << "It earned about $" << boxOffice << " million at the worldwide box office." << endl;

    cout << endl;
    cout << "Some interesting things about the movie:" << endl;
    cout << "\"I am one with the Force, and the Force is with me.\" - Chirrut Îmwe" << endl;
    cout << "Rogue One tells the story of the brave rebels who stole the Death Star plans." << endl;
    cout << "The final battle on Scarif is considered one of the best in the Star Wars franchise." << endl;
    cout << "Darth Vader's hallway scene became instantly iconic among fans." << endl;

    return 0;
}
