#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int SIZE = 5;
    string lectures[SIZE] = {"L1", "L2", "L3", "L4", "L5"};
    string dates[SIZE] = {"04 Nov","18 Nov", "18 Nov", "25 Nov", "25 Nov"};
    char attend[SIZE];

   for(int i=0; i<SIZE; i++)
    {
        cout<<lectures[i]<<setw(10)<<dates[i]<<setw(4)<<": ";
        cin>>attend[i];
    }
    //// show output
    for(int i=0 ;i<SIZE; i++)
    {
        cout<<lectures[i]<<setw(10);
    }
    cout<<setw(-10)<<endl;
    for(int i=0 ;i<SIZE; i++)
    {
        cout<<dates[i]<<setw(10);
    }
    cout<<setw(-10)<<endl;
    for(int i=0 ;i<SIZE; i++)
    {
        cout<<attend[i]<<setw(10);
    }
    cout<<endl;


    int absents = 0, presents = 0;
    for(int i=0; i<SIZE; i++)
    {
        if(attend[i] == 'a' || attend[i] == 'A')
        {
            absents++;
        }
        if(attend[i] == 'p' || attend[i] == 'P')
        {
            presents++;
        }
    }

    cout<<"Total Number of absents : "<<absents<<endl;
    cout<<"Total number of presents : "<<presents<<endl;

    cout<<"Press 1 for absents records"<<endl;
    cout<<"Press 2 for presents records"<<endl;
    int choice;
    cin>>choice;

    switch(choice)
    {
    case 1:
        for(int i=0; i<SIZE; i++)
        {
            if(attend[i] == 'a' || attend[i] == 'A')
            {
                cout<<lectures[i]<<setw(10)<<dates[i]<<endl;
            }
        }

        break;
    case 2:
        for(int i=0; i<SIZE; i++)
        {
            if(attend[i] == 'p' || attend[i] == 'P')
            {
                cout<<lectures[i]<<setw(10)<<dates[i]<<endl;
            }
        }

        break;
    default:
        {
            cerr<<"Invalid choice selected\n";
        }
    }
    return 0;
}