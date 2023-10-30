#include<iostream>

using namespace std;
int main()
{
    int number;

    cout<<"Enter a number"<<endl;
    cin>>number;
    if(number%2 == 0)
    {
    cout<<"The number "<< number<<  " entered is even"<<endl;
    }
    else if (number%2 !=0)
    {
      cout<<"The number " <<number <<" entered is odd"<<endl;     
    }
    return 0;
}