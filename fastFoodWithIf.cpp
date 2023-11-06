#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x,y;
    
    cout << "Welcome to Mcdonalds" << endl;
    cout << "What would you like to order sir" << endl;
    cout << "would you like to order a burger" << endl;
    cout << "1.Yes" << endl;
    cout << "2.No" << endl;

    cin >> x;
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> x;
    }
    if (x=1||2)
    {
        cout << "Ok" << endl;
        cout << "Would you like to fries" << endl;
        cout << "1.Yes" << endl;
        cout << "2.No" << endl;
        cin >> x;
        while (cin.fail())
        {
            cout << "Please enter an integer" << endl;
            cin.clear();
            // cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.ignore(INT_MAX, '\n');

            cin >> x;
        }
       
    }
 if (y=1)
        {
            cout << "Ok" << endl;
            cout << "Would you like to order a drink" << endl;
        }
        cout << "1.Yes" << endl;
        cout << "2.No" << endl;
        cin >> y;
        while (cin.fail())
        {
            cout << "Please enter an integer" << endl;
            cin.clear();
            // cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.ignore(INT_MAX, '\n');

            cin >> y;
        }
        if (x==1||y==1)
        {
            cout<<"please move to the cashier"<<endl;
        }
        else
         system("CLS");
         
        cout<<"Thankyou for visiting Mcdonalds"<<endl;
        
    return 0;
} 