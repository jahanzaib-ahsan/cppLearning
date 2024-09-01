#include <iostream>
#include<iomanip>

using namespace std;
int main()
//program to convet distance in kilometers to meters,feet,inches,centimeter
{
    float distance,meters,feet,inches,centimeter;
    cout<<"Enter distance between two cities in kilometers  : ";
    cin>>distance;
    cout<<"Distance in meters is : " << setprecision(10) <<distance*100<<endl;
    cout<<"Distance in feet is : "<<distance*3280.8399<<endl;
    cout<<"Distance in inches is : "<<distance*39370.0787<<endl;
    cout<<"Distance in centimeters is : "<<distance*100000<<endl;

    return 0;
}