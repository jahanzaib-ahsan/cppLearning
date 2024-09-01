//program which converts temprature from fahrenheit to centigrade
#include <iostream>
using namespace std;
int main()

{
    float temp_Fahrenheit,temp_Centigrade;
    cout<<"Enter temprature of city in Fahrenheit : ";
    cin>>temp_Fahrenheit;
    cout<<"Temprature of city in centigrades is : "<<(temp_Fahrenheit-32)*5/9;
    return 0;
}