#include <iostream>
using namespace std;

int main()
{
    int n, target, currentElement;
    bool found = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> currentElement;
    }

    cout << "Enter the number to search: ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (currentElement == target)
        {
            cout << "Element found at position: " << (i + 1) << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found in the list." << endl;
    }

    return 0;
}
