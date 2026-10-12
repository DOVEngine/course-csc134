 // CSC 134
// M3 Random Numbers Assignment
// Robert
// 10/11/2026
// Start with dice rolls


#include <iostream>
// for pseudo-random numbers
#include <cmath>    
// for making it truly random
#include <ctime>
using namespace std;

int main() {
    cout << "Let's roll some dice!" << endl;
    int seed = time(0);
    //cout << "Your seed is: " << seed << endl;
    //cout << "What's your lucky number? ";
    //cin >> seed;
    // Seed the RNG
    srand(seed);

    const int MAX = 6; // numbers from 1-6
    int roll1, roll2, total;
    roll1  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll1 << endl;

    roll2  = (rand() % MAX) + 1; // Divide by MAX, and just keep the remainder
    cout << "Your roll was: " << roll2 << endl;

    total = roll1 + roll2;
    cout << "Your total roll is: " << total << endl;

    // Let's play craps!
    // 7 and 11 - win!
    // 2 and 12 - lose.
    // anything else -- comes later.
    if (total == 7) {
        cout << "Lucky seven! You win!" << endl;
    }
    else if (total == 11) {
        cout << "Eleven is a winner!" << endl;
    }
    else if (total == 2) {
        cout << "Snake eyes! Too bad, you lose." << endl;
    }
    else if (total == 3) {
        cout << "Sorry, three is unlucky, you lose." << endl;
    }
    else if (total == 12) {
        cout << "Boxcars! Sorry, you lost." << endl;
    }
    else {
         cout << "Your point is " << total << endl;

    int point = total;   // save the point
    int newRoll1, newRoll2, newTotal;

    cout << "Rolling again..." << endl;

    // Keep rolling until win or lose
    while (true) {
        newRoll1 = rand() % MAX + 1;
        newRoll2 = rand() % MAX + 1;
        newTotal = newRoll1 + newRoll2;

        cout << "You rolled: " << newRoll1 << " and " << newRoll2 << endl;
        cout << "Total: " << newTotal << endl;

        if (newTotal == point) {
            cout << "You hit your point! You win!" << endl;
            break; // end the loop
        }
        else if (newTotal == 7) {
            cout << "You rolled a 7. You lose!" << endl;
            break; // end the loop
        }
        else {
            cout << "Rolling again..." << endl;
        }
    }
}

return 0;
}