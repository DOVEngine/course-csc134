#include <iostream>
using namespace std;
//CSC 134
//M5LAB1 - Choose Your Own Adventure
//Robert Dover
//11/9/2026
// Function Prototypes
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_open_chest();
int main()
{
cout << "M5LAB1 - Choose Your Own Adventure" << endl;
main_menu();
cout << "Thanks for playing!" << endl;
return 0;
}
void main_menu()
{
cout << "Main Menu" << endl;
cout << "You're in front of a spooky old house..." << endl;
cout << "Do you:" << endl;
cout << "1. Try the front door" << endl;
cout << "2. Sneak around back" << endl;
cout << "3. Forget it, and go home" << endl;
cout << "4. [Quit]" << endl;
cout << "Choose: ";
int choice;
cin >> choice;
if (choice == 1)
{
choice_front_door();
}
else if (choice == 2)
{
choice_back_door();
}
else if (choice == 3)
{
choice_go_home();
}
else if (choice == 4)
{
cout << "Ok, quitting game" << endl;
return;
}
else
{
cout << "That's not a valid choice, please try again." << endl;
main_menu();
}
}
void choice_front_door()
{
cout << "Try the front door." << endl;
cout << "It's locked." << endl;
cout << "Do you:" << endl;
cout << "1. Check around back" << endl;
cout << "2. Give up and go home" << endl;
int choice;
cout << "Choose: ";
cin >> choice;
if (choice == 1)
{
choice_back_door();
}
else if (choice == 2)
{
choice_go_home();
}
}
void choice_back_door()
{
cout << "You walk around to the back door." << endl;
cout << "The door is unlocked." << endl;
cout << "Inside the house is a treasure chest." << endl;
cout << "1. Open the chest" << endl;
cout << "2. Run away" << endl;
cout << "Choose: ";
int choice;
cin >> choice;
if (choice == 1)
{
choice_open_chest();
}
else
{
cout << "You get scared and run away." << endl;
}
}
void choice_go_home()
{
cout << "You decide the house is too creepy." << endl;
cout << "You go home and watch TV." << endl;
cout << "Maybe next time you'll be more adventurous." << endl;
}
void choice_open_chest()
{
cout << "You open the treasure chest." << endl;
cout << "Inside is a pile of gold coins!" << endl;
cout << "You become rich and live happily ever after." << endl;
}
//