#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char operater;
    cout<< "Enter first num: ";
    cin >> num1;

    cout << "Enter second num: ";
    cin >> num2;
    cout << "Enter an operater( +, -, *, /): ";
    cin >> operater;

    switch (operater)
    {
    case '+':
        cout << "result: " << num1 + num2 <<endl;
        break;
    case '-':
        cout << "result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "result: " << num1 * num2 <<endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "result: " << num1 / num2 <<endl;
        }
        else
        {
            cout << "Error: division by zero " << endl;
        }
        break;
    default:
        cout << "invalid operation " << endl;
    
    }

    return 0;
}