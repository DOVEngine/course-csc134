// M5LAB2
// Robert Dover

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double l, double w);
void displayData(double l, double w, double a);

int main()
{
    double length, width, area;

    length = getLength();
    width = getWidth();

    area = getArea(length, width);

    displayData(length, width, area);

    return 0;
}

double getLength()
{
    double x;
    cout << "Length: ";
    cin >> x;
    return x;
}

double getWidth()
{
    double x;
    cout << "Width: ";
    cin >> x;
    return x;
}

double getArea(double l, double w)
{
    return l * w;
}

void displayData(double l, double w, double a)
{
    cout << endl;
    cout << "Length = " << l << endl;
    cout << "Width = " << w << endl;
    cout << "Area = " << a << endl;
}