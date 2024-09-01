// program to calculate area and parameter of rectangle
//  and area and circumfirence of circle
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float Pi = 3.14;
    float length, breadth, radius, area;
    cout << "Enter length of rectangle : ";
    cin >> length;
    cout << "Enter breadth of rectangle : ";
    cin >> breadth;
    cout << "Enter radius of circle : ";
    cin >> radius;
    cout << "Area of circle is : " << Pi * pow(radius, 2) << endl;

    cout << "circumfirence of circle is : " << 2 * Pi * radius << endl;

    cout << "Area of rectangle is : " << length * breadth << endl;

    cout << "Parameter of rectangle is : " << 2 * (length + breadth) << endl;

    return 0;
}