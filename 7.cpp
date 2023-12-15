#include <iostream>
using namespace std;
int main()
{
    double decimal_number;
    cout<< " Enter a decimal number ";
    cin>>decimal_number;
    cout<<static_cast <int>(decimal_number)<<" Is nearest integer to your input"<<endl; 



    return 0;
}