/*
CSC 134
M3 Bonus
Name: RObert Dover
Course: CSC 134 - C++ Programming
Date: October 18, 2026

Simple Guess the Number Game
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to create a random number
int getRandomNumber()
{
    return rand() % 10 + 1;
}

int main()
{
    srand(time(0));

    int secretNumber;
    int guess;
    char playAgain;

    cout << "Welcome to Guess the Number!" << endl;

    do
    {
        secretNumber = getRandomNumber();

        cout << "\nI am thinking of a number between 1 and 10." << endl;
        cout << "Take a guess: ";
        cin >> guess;

        while (guess < 1 || guess > 10)
        {
            cout << "Please enter a number from 1 to 10: ";
            cin >> guess;
        }

        if (guess == secretNumber)
        {
            cout << "Correct! You win!" << endl;
        }
        else
        {
            cout << "Sorry, you lost." << endl;
            cout << "The number was " << secretNumber << "." << endl;
        }

        cout << "Play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!" << endl;

    return 0;
}