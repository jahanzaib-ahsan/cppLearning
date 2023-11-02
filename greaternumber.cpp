#include <iostream>
#include <string>
using namespace std;
int main()
{

    int n1;
    int n2;

    cout << "Enter value of n1" << endl;
    cin >> n1;
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        // cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.ignore(INT_MAX, '\n');

        cin >> n1;
    }
    cout << "Enter value of n2" << endl;
    
    cin >> n2;
    cin.ignore();
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> n2;
    }
    if (n1 < n2)
    {
        cout << "n2 is greater than n1" << endl;
    }
    else if (n1 > n2)
    {
        cout << "n1 is greater than n2" << endl;
    }
    else
        cout << "Both are equal";

    return 0;
}