#include <iostream>
using namespace std;

int main()
{
    int a=5,b=5,c=5;
    if ((a<b)&&(a<c)){
        cout<<a<<" ";
        if (b<c)
        {
            cout<<b<<" "<<c<< endl;
        }
        else
        cout<<c<<" "<<b<<endl;
    }
    else if ((c<b)&&(c<a))
    {
        cout<<c<<" ";
        if (b<a)
        {
            cout<<b<<" "<<a<<endl;
        }
        else
        cout<<a<<" "<<b<<endl;
        
    }
     else if ((b<a)&&(b<c))
    {
        cout<<b<<" ";
        if (c<a)
        {
            cout<<c<<" "<<a<<endl;
        }
        else
        cout<<a<<" "<<c<<endl;
        
    }
    else if (a==b&&b==c&&a==c)
    {
        cout<<" All are equal"<<endl;
    }
    

    
    
    return 0;
}