 /*
CSC 134
M3HW1 - Gold
Name: Robert Dover
Course: CSC 134 - C++ Programming
Date: October 18, 2026

Questions Completed:
1. Chat Bot
2. Receipt Calculator
3. Choose Your Own Adventure
4. Math Practice
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Question 1
    cout << "============================" << endl;
    cout << "Question 1 - Chat Bot" << endl;
    cout << "============================" << endl;

    string answer;

    cout << "Hello, I'm a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;
    cin >> answer;

    if (answer == "yes")
    {
        cout << "That's great! I'm sure we'll get along." << endl;
    }
    else if (answer == "no")
    {
        cout << "Well, maybe you'll learn to like me later." << endl;
    }
    else
    {
        cout << "If you're not sure... that's OK." << endl;
    }

    cout << endl << endl;

    // Question 2
    cout << "============================" << endl;
    cout << "Question 2 - Receipt Calculator" << endl;
    cout << "============================" << endl;

    double mealPrice;
    double tax;
    double tip;
    double total;
    int orderType;

    cout << "Enter the price of the meal: $";
    cin >> mealPrice;

    cout << "Enter 1 for dine in or 2 for takeaway: ";
    cin >> orderType;

    tax = mealPrice * 0.08;
    tip = 0;

    if (orderType == 1)
    {
        tip = mealPrice * 0.15;
    }

    total = mealPrice + tax + tip;

    cout << endl;
    cout << "Receipt" << endl;
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total Due: $" << total << endl;

    cout << endl << endl;

    // Question 3
    cout << "============================" << endl;
    cout << "Question 3 - Adventure Game" << endl;
    cout << "============================" << endl;

    string firstChoice;
    string secondChoice;

    cout << "You find a mysterious cave." << endl;
    cout << "Do you ENTER or RUN?" << endl;
    cin >> firstChoice;

    if (firstChoice == "ENTER")
    {
        cout << "You see a dragon inside the cave." << endl;
        cout << "Do you FIGHT or HIDE?" << endl;
        cin >> secondChoice;

        if (secondChoice == "FIGHT")
        {
            cout << "You defeated the dragon and found treasure!" << endl;
            cout << "You win!" << endl;
        }
        else
        {
            cout << "The dragon finds you." << endl;
            cout << "Defeat! Game Over." << endl;
        }
    }
    else
    {
        cout << "You ran away from adventure." << endl;
        cout << "Game Over." << endl;
    }

    cout << endl << endl;

    // Question 4
    cout << "============================" << endl;
    cout << "Question 4 - Math Practice" << endl;
    cout << "============================" << endl;

    srand(time(0));

    int number1 = rand() % 10;
    int number2 = rand() % 10;
    int userAnswer;

    cout << "What is " << number1 << " plus " << number2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == number1 + number2)
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect." << endl;
        cout << "The correct answer is "
             << number1 + number2 << "." << endl;
    }

    return 0;
}