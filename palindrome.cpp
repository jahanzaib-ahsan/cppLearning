#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num;
    int reversed_number;
    cout << "Enter a number to check if it is a palindrome number or not \n ";
    cin >> num;
     int original_number = num;
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> num;
    }
    while (num > 0)
    {
        int remainder = num % 10;
        reversed_number = reversed_number * 10 + remainder;
        num /= 10;
    }
    if (reversed_number == original_number)
    {
        cout<<"Number is palindrome" <<endl;
           }
    else{
        cout<<"Number is not palindrome"<<endl;
    }

    return 0;
}