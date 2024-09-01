// program to add 1 in each digit
#include <iostream>
using namespace std;
int main()
{
    int number, sum;
    cout << "Enter a five digit number : ";
    do
    {
        cin >> number;
    } while (number < 9999 || number > 100000);
    int reverseNumber = 0;

    for (int i = 0; i < 5; i++)
    {
        int remainder = number % 10;
        remainder++;
        reverseNumber *= 10;
        reverseNumber += remainder;
        number /= 10;
    }
    cout << "After adding one in each digit the output is : ";
    for (int i = 0; i < 5; i++)

    {
        int output = reverseNumber % 10;
        cout << output;
        reverseNumber /= 10;
    }

    return 0;
}