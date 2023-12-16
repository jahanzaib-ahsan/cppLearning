// In a right triangle, the square of the length of one side is equal to the sum
// of the squares of the lengths of the other two sides. Write a program that
// prompts the user to enter the lengths of three sides of a triangle and then
// outputs a message indicating whether the triangle is a right triangle
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the value of side a : ";
    cin>>a;
    cout<<"Enter the value of side b : ";
    cin>>b;
    cout<<"Enter the value of side c : ";
    cin>>c;
    if (((a*a)==(b*b)+(c*c))||((b*b)==(a*a)+(c*c))||((c*c)==(a*a)+(b*b)))
    {
        cout<<" Triangle is right angled ";
    }
    else 
    cout<<" Triangle is not right angl ed ";

    return 0;
}