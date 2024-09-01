#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter first num : ";
    cin >> a;
    cout << "Enter second num : ";
    cin >> b;
    cout << "Before swap : " << a << endl;
    cout << "Before swap : " << b << endl;
    temp = b;
    b = a;
    a = temp;
    cout << "After swap : " << a << endl;
    cout << "After swap : " << b << endl;
    return 0;
}