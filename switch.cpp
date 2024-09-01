

#include<iostream>
using namespace std;
int main()
{
    int num;
    do
    {
    cout<<" Enter a number to check weather its odd or even \n Enter 0 to exit\n ";
    cin>>num;
     while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> num;
    }
    if (num % 2 == 0)
    cout<<" Number is even\n";

    else 
    cout<< "Number is odd \n";

    }
   
     while (num !=0);
         return 0;
}








#include <iostream>
using namespace std;
int main()
{
    int num;
do
{
  cout << " Enter a  number to see the day of week \n Press 8 to exit "<< endl;
        cin >> num;

        switch (num)
        {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << " Tuesday " << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        }
} while (num!=8);



    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int num;

    while(1){
        cout << " Enter a  number to see the day of week \n"
        " Press 8 to exit " << endl;
        cin >> num;

    switch (num)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << " Tuesday " << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << " Invalid input ";
        break;
    }

    if(num==8){
        break;
    }
}
    return 0;
}