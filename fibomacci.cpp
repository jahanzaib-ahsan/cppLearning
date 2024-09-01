#include <iostream>
using namespace std;
int main()

{
    int num1 = 0, num2 = 1;
    int next_num;
    int n;

    cout << " Enter the number you want fibbonacci series upto : ";
    cin >> n;
    cout << num1 << " " << num2<<" ";
    for (int i = 0; i < n; i++)
    {

        next_num = num1 + num2;
        cout << next_num << " " ;
        num1 = num2;
        num2 = next_num;
        
    }

    return 0;
}