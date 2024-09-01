#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int temp = 0;
int num;
int count;
cin >> temp;
for (int count = 0; count <= 3; count++)
{
cout << temp << " ";
cin >> num;
temp = temp + num * (count - 1);
}
cout << endl;
return 0;
}