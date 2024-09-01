#include <iostream>
using namespace std;
int main()
// program to calculate gross salary
{

    float salary, dearness_Allowance, house_Allowance, gross_Salary;
    cout << "Enter Ramesh's basic salary" << endl;
    cin >> salary;
    dearness_Allowance = 0.4 * salary;
    house_Allowance = 0.2 * salary;
    gross_Salary = salary + dearness_Allowance + house_Allowance;
    cout << "Ramesh's dearness allowance is : " << dearness_Allowance << endl;
    cout << "Ramesh's house rent allowance is : " << house_Allowance << endl;
    // gross salary is total salary without any deductions
    cout << "Ramesh's gross salary is : " << gross_Salary << endl;

    return 0;
}