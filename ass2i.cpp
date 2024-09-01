#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    cout << "Enter a four digit number : ";

    do
    {
        cin >> number;
    } while (number < 1000 || number > 9999);

    sum += number % 10;
    number = number / 1000;
    sum += number;
    cout << "Sum of first and last number is : " << sum;

    return 0;
}