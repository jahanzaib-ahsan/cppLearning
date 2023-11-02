#include<iostream>
#include <stdlib.h>

using namespace std;
int main()

{

    int n;
    cout<<"1. balance inquiry"<<endl;
    cout<<"2. Deposit money"<<endl;
    cout<<"3. Cash withdrawl"<<endl;
    cout<<"4. Quit"<<endl;  
    cout<<"Please enter a number"<<endl;
    cin>> n;
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> n;
    }
   
    switch (n)
    {
    case 1:
        cout<<"You have selected to inquire balance"<<endl;
        break;
    case 2:
        cout<<"You have selected to deposit money"<<endl;
        break;
    case 3:
        cout<<"You have selected to withdraw cash"<<endl;
        break;
    case 4:
        cout<<"you have choosed to quit"<<endl;
        break;
    
    default:
        cout<<"Plz enter within the given options"<<endl;
        break;
    }
    
    return 0;
}






