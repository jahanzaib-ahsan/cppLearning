#include<iostream>
#include<string.h>
using namespace std;
int main()
{   
    char vr_one=' ',vr_two=' ',vr_three=' ',vr_four=' ',vr_five=' ',vr_six=' ',vr_seven=' ',vr_eight=' ',vr_nine=' ';
    cout<<" -----------------"<<endl;
    cout<<"|  "<<vr_one<<"  |  " <<vr_two<<"  |  " <<vr_three<<"  |"<<endl;
    cout<<" -----------------"<<endl;
    cout<<"|  "<<vr_four<<"  |  " <<vr_five<<"  |  " <<vr_six<<"  |"<<endl;
    cout<<" -----------------"<<endl; 
    cout<<"|  "<<vr_seven<<"  |  " <<vr_eight<<"  |  " <<vr_nine<<"  |"<<endl;
    cout<<" -----------------"<<endl;
   
    vr_eight='X';
    vr_four='O';
    
    cout<<" -----------------"<<endl;
    cout<<"|  "<<vr_one<<"  |  " <<vr_two<<"  |  " <<vr_three<<"  |"<<endl;
    cout<<" -----------------"<<endl;
    cout<<"|  "<<vr_four<<"  |  " <<vr_five<<"  |  " <<vr_six<<"  |"<<endl;
    cout<<" -----------------"<<endl; 
    cout<<"|  "<<vr_seven<<"  |  " <<vr_eight<<"  |  " <<vr_nine<<"  |"<<endl;
    cout<<" -----------------"<<endl;
   

    int X;
    int O;
    int Player_one;
    int Player_two;
    cout<<"      Welcome     "<<endl;
cout<<"Please select one "<<endl;
cout<<"1. X"<<endl;
cout<<"2. O"<<endl;
cout<<"Player one select one"<<endl;
 
cin>>Player_one;
while (cin.fail())
    {
        
        
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> Player_one;
    }
if (Player_one==1)
        {
            cout<<"Player_one has selected X "<<endl;
        }
        else
        cout<<"Player_one has selected O "<<endl;
cout<<"Player two select one"<<endl;

cin>>Player_two;
 while (cin.fail())
    {
        cout << "Please enter an integer" << endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cin >> Player_two;
    }
    if (Player_two==2)
        {
            cout<<"Player_two has selected O "<<endl;
        }
        else
        cout<<"Player_two has selected X "<<endl;

   


    return 0;
}