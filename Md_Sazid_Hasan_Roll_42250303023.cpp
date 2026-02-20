// Name: Md Sazid Hasan
// Roll: 42250303023
// Section: 2E
// Program Name: ECSE
// Program: Calculate the area of a trapezium (height = PI)

#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{
    double a, b, area;

    // Input two parallel sides
    cout << "Enter first parallel side (a): ";
    cin >> a;

    cout << "Enter second parallel side (b): ";
    cin >> b;

    // Area calculation (height = PI)
    area = 0.5 * (a + b) * PI;

    // Output result
    cout << "Area of the trapezium is: " << area << endl;

    return 0;
}
