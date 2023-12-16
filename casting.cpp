#include<iostream>
using namespace std;
int main()
{
    
    int num;
    cout<< "Enter a number from 0 to 16 "<<endl;
    cin>>num;

    while(num<0||num>16)
    {  
         cout<<" Number is not in limit Re-enter"<<endl;;
        cin>>num;

    }
    if (num<=9)
    {
        cout<<num<<endl;
    }
    else if (num>=10)
    {
     num=num+55;
     cout<<static_cast <char>(num)<<endl;
    }
    


    return 0;
}