#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    bool samasya = true;
    int balance = 120000;
    while (samasya == true)
    {
    
    int number;
    cout << "1. balance inquiry" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Cash withdrawl" << endl;
    cout << "4. Quit" << endl;
    cout << "Please enter a number" << endl;
    cin >> number;
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> number;
    }

    if (number == 1)
    {
        cout << "Balance : PKR " << balance << endl;
    }
    else if (number == 2)
    {
        int depositAmount;
        cout << "Enter amount you want to deposit" << endl;
        cin >> depositAmount;
        while (cin.fail())
        {
            cout << "Please enter an integer" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cin >> depositAmount;
        }
        balance = balance + depositAmount;
        cout << "New balance : PKR " << balance << endl;
    }
    else if (number == 3)
    {
        int withdrawAmount;
        cout << "You have selected to withdraw cash" << endl;
        cout << "Enter amount you want to withdraw" << endl;
        cin >> withdrawAmount;
        while (cin.fail())
        {
            cout << "Please enter an integer" << endl;
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cin >> withdrawAmount;
        }
        balance = balance - withdrawAmount;
        cout << "New balance : PKR " << balance << endl;
    }
    else if (number == 4)
    {
        cout << "You choosed to quit" << endl;
        samasya = false;
    }
    else
        cout << "Please select from given options" << endl;
    }


system("CLS");
cout << "Thankyou for choosing HBL." << endl;

return 0;
}
