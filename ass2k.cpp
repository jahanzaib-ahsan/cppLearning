#include <iostream>
using namespace std;
int main()
{
    int withdrawl_Amount;
    cout << "Enter amount you want to withdraw greater than 0 : ";
    do
    {
        cin >> withdrawl_Amount;
    } while (withdrawl_Amount < 0);

    int note1 = withdrawl_Amount / 100;
    int remainder = withdrawl_Amount % 100;
    cout << "Number of notes of 100 : " << note1 << endl;
    int note2 = remainder / 50;
    remainder = withdrawl_Amount % 50;
    cout << "Number of notes of 50 : " << note2 << endl;
    int note3 = remainder / 10;
    remainder = withdrawl_Amount % 10;
    cout << "Number of notes of 10 : " << note3 << endl;
    return 0;
}