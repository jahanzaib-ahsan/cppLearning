#include <iostream>
using namespace std;
int main()
{
    float marks_1, marks_2, marks_3, marks_4, marks_5, aggregate, percentage;
    cout << "Enter marks in English : " << endl;
    cin >> marks_1;
    cout << "Enter marks in Maths : " << endl;
    cin >> marks_2;
    cout << "Enter marks in Urdu : " << endl;
    cin >> marks_3;
    cout << "Enter marks in Islamiat : " << endl;
    cin >> marks_4;
    cout << "Enter marks in Biology : " << endl;
    cin >> marks_5;
    aggregate = marks_1 + marks_2 + marks_3 + marks_4 + marks_5;
    cout << "Your Aggregate is : " << aggregate << endl;
    percentage = (aggregate / 500) * 100;
    cout << "Your percentage is : " << percentage << endl;

    return 0;
}