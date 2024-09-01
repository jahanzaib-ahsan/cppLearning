// program to calculate digits sum
#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    cout << "Enter a five digit number : ";
    do
    {
        cin >> number;
    } while (number < 9999 || number > 100000);

    for (int i = 0; i < 5; i++)
    {
        int digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    cout << "Sum of entered number's digits is : " << sum;

    return 0;
}