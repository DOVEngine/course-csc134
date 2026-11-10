//Robert Dover
//11/9/2026
//CSC 134
#include <iostream>
#include <string>
using namespace std;

string getAnswer(int x);
void printText(string x);

int main()
{
    string result;

    result = getAnswer(5);

    printText(result);

    return 0;
}

string getAnswer(int x)
{
    string temp = "The answer is ";
    temp = temp + to_string(x);
    return temp;
}

void printText(string x)
{
    cout << x << endl;
}