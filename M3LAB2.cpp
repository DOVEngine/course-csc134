 /*
Name:Robert Dover
Course: CSC101 - Introduction to Programming
Assignment: M3LAB2 - Numerical Grade to Letter Grade
Date: October 18, 2026
*/

#include <iostream>
using namespace std;

int main() {
    int grade;

    // Prompt user for numerical grade
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Determine letter grade
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    }
    else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    }
    else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    }
    else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    }
    else if (grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    }
    else {
        cout << "Invalid grade entered. Please enter a value between 0 and 100." << endl;
    }

    return 0;
}