#include <iostream>
using namespace std;
int main() {
    const int SIZE = 10;
    int inputArray[SIZE] = {-1, 2, -3, -4, -5, -6 , 2, -2 , -3, 9};
    int positiveIndex = 0, negativeIndex = SIZE - 1;

    while (positiveIndex < negativeIndex) {
        while (inputArray[positiveIndex] >= 0 && positiveIndex < SIZE) {
            cout<<"HELLO"<<endl;
            ++positiveIndex;
        }

        while (inputArray[negativeIndex] < 0 && negativeIndex != 0) {
            
            --negativeIndex;
        }

        if (positiveIndex < negativeIndex) {
         swap(inputArray[positiveIndex] , inputArray[negativeIndex]);
            
        }
    }

    cout << "Separated Array: [ ";
    for (int i = 0; i < SIZE; ++i) {
       cout << inputArray[i] << " ";
    }
    cout<<"]";
   cout << endl;

    return 0;
}
