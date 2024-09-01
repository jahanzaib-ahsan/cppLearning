// program to reverse entered number
#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0, digit;
    cout << "Enter a five digit number to obtain its reverse  : ";
    do
    {
        cin >> number;
    } while (number > 9999 || number < 100000);

    cout << "Reverse of entered number is : ";
    for (int i = 0; i < 5; i++)

    {
        digit = number % 10;
        number = number / 10;
        cout << digit;
    }

    return 0;
}