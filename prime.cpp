#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a number to check weather it is prime or not"<<endl;
    cin>>n;
    for ( i = 2; i<=n-1; i++)
    {
       if ((n % i==0))
    {
      break;
    }
    }
    
    if (n==1)
    {
        cout<<"Entered number is prime number";

    }
    else
    cout<<"Entered number is not prime";


    return 0;
}
