#include <iostream>
using namespace std;
int main()
{
    char text[];
    int count=0;
    char alpha[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    cout<<"Enter text you want to encrypt : ";
    for (int i = 0; i < 28; i++)
    {
      cin>>text[i];
      text[i]=text[i+1];
      cout<<text[i];
    }
    
    
    return 0;
}