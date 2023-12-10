#include <iostream>
using namespace std;
int main()
{
    int num;
    int numofdivs=0;
    while (num != 0)
    {
       
 
    
    
    cout<<"Enter 0 to terminate"<<endl;
    cout<<"Enter a number to check it is prime or not"<<endl;
    cin>>num;
 
    
    numofdivs=0;
    for (int i = 1; i<=num; i++)
    {
        if (num % i ==0)
        {
             numofdivs = numofdivs + 1;
        // cout<<num<< " is divisble by " << i << endl;
        }
        
       
    }
    if (numofdivs==2)
    {
        cout<<num<<" is a prime number"<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number"<<endl;
    }
    
    
   
    
   
    
   }

     
    return 0;
}
