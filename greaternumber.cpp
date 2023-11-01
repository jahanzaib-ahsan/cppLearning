#include<iostream>
#include<string>
using namespace std;
int main()
{
   
    int n1;
    int n2;
    cout<<"Enter value of n1"<<endl; 
    cin>>n1;
    cout<<"Enter value of n2"<<endl;
    cin>>n2;
    if (n1<n2)
    {
        cout<<"n2 is greater than n1"<<endl;
    }
    else if (n1>n2)
    {
       cout<<"n1 is greater than n2"<<endl;
    }
    else cout<<"Both are equal";
    

    return 0;
} 