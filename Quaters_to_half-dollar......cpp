//Header file
#include <iostream>
using namespace std;
//Named constants
const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
int main()
{
//Declare variable
int change;
//Statements: Step 1 – Step 12
cout << "Enter change in cents: "; //Step 1
cin >> change; //Step 2
cout << endl;
cout << "The change you entered is " << change
<< endl; //Step 3
cout << "The number of half-dollars to be returned "
<< "is " << change / HALF_DOLLAR
<< endl; //Step 4

cout << "The number of nickels to be returned is "
<< change / NICKEL << endl;


cout << "The number of pennies to be returned is "
<< change << endl;

change = change % HALF_DOLLAR; //Step 5
cout << "The number of quarters to be returned is "
<< change / QUARTER << endl; //Step 6
change = change % QUARTER; //Step 7
cout << "The number of dimes to be returned is "
<< change / DIME << endl; //Step 8
change = change % DIME; //Step 9
cout << "The number of nickels to be returned is "
<< change / NICKEL << endl; //Step 10
change = change % NICKEL; //Step 11
cout << "The number of pennies to be returned is "
<< change << endl; //Step 12
return 0;
}