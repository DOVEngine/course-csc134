 // CSC 134
// M3LAB1
// Robert
// 10/11/2026

#include <iostream>
using namespace std;

void door1();
void door2();

int main() {

    int choice;

    cout << "Choose a door." << endl;
    cout << "1 = Door 1" << endl;
    cout << "2 = Door 2" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        door1();
    }
    else if (choice == 2) {
        door2();
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

void door1() {
    cout << "You opened Door 1." << endl;
    cout << "There is a treasure chest inside." << endl;
}

void door2() {
    cout << "You opened Door 2." << endl;
    cout << "A small puppy runs out to greet you." << endl;
}