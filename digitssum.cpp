#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sales[10];
    int index;
    double largestSale, sum, average;
    for (index = 0; index < 10; index++)
        cin >> sales[index];
    for (index = 0; index < 10; index++)
    {
        cout << sales[index] << " ";
    }
    cout << endl;
    sum = 0;
    for (index = 0; index < 10; index++)
        sum = sum + sales[index];
    cout << "Sum of all inputs is : " << sum << endl;
    ;
    average = sum / 10;
    cout << "Average is : " << average << endl;
    ;
    int maxIndex = 0;
    for (index = 0; index < 10; index++){
        if (sales[maxIndex] < sales[index])
    
        {
            maxIndex = index;
        }
    }
                    cout << "Max index is : " << maxIndex << endl;
    
    largestSale = sales[maxIndex];
    cout << "Largest sale is :" << largestSale;

    return 0;
}