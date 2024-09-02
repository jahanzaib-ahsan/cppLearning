#include <iostream>
using namespace std;

int main()
{
    int n, target, low, high, mid;
    int currentElement, previousElement = -1;
    bool found = false;

    cout << "Enter the number of elements: ";
    cin >> n;

    low = 0;
    high = n - 1;
    mid = 0;

    int sortedElements[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> currentElement;

        if (currentElement < previousElement)
        {
            cout << "The list is not sorted. Binary search cannot be performed." << endl;
            return 0;
        }
        previousElement = currentElement;
        sortedElements[i] = currentElement;
    }

    cout << "Enter the number to search: ";
    cin >> target;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (sortedElements[mid] == target)
        {
            cout << "Element found at position: " << (mid + 1) << endl;
            found = true;
            break;
        }
        else if (sortedElements[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Element not found in the list." << endl;
    }

    return 0;
}
