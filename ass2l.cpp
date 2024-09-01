//program to find cost price of single item 
#include <iostream>
using namespace std;
int main()
{
    float cost_Price, selling_Price, profit;
    do
    {
        cout << "Enter selling price of 15 items : ";
        cin >> selling_Price;
    } while (selling_Price < 0);
    do
    {
        cout << "Enter profit earned on 15 items : ";
        cin >> profit;
    } while (profit < 0);
    cost_Price = (selling_Price - profit) / 15;
    cout << "Cost price of single item is : " << cost_Price;

    return 0;
}