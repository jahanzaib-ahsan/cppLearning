#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x,y,z;

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
    switch (x)
    {
    case 1:
        cout<<"your order has been placed"<<endl;
        break;
    case 2:
        cout<<"ok"<<endl;
     
    default:
           if(x>2)
           cout<<"Please choose 1 or 2"<<endl;
        break;
    }
     if(x=1){
        cout<<"would you like to order fries"<<endl;
     }
    cout << "1.Yes" << endl;
    cout << "2.No" << endl;

    cin >> y;
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> y;
    }
    switch (y)
    {
    case 1:
        cout<<"your order has been placed"<<endl;
        break;
    case 2:
    
        cout<<"ok"<<endl;
    default:
             if(y>2)
           cout<<"Please choose 1 or 2"<<endl;
        break;
    }
     if(y=1){
        cout<<"would you like to order a drink"<<endl;
     }
     cout << "1.Yes" << endl;
    cout << "2.No" << endl;

    cin >> z;
    while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> z;
    }
    switch (z)
    {
    case 1:
        cout<<"your order has been placed"<<endl;
        break;
    case 2:
        cout<<"ok"<<endl;
     
    default:
    if(x==2&&y==2&&z==2)
    {
    cout<< "Thankyou for visiting Mcdonalds." << endl;
    }  
    else 
    system("CLS");
   
    cout<<"kindly move to the cashier"<<endl;
    cout << "Thankyou for visiting Mcdonalds." << endl;
    
        break;
    }
     
    
    
    return 0;
}