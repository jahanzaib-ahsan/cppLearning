#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float currentYear[12], previousYear[12], totalCurrent = 0, totalPrevious = 0;
    float averageCurrent, averagePrevious;
    int i;

    // Input rainfall data for 12 months
    cout << "Input Yearly Rainfall statistics in pair (current year previous year) for the 12 months: " << endl;
    for (i = 0; i < 12; i++) {
        cout << (char)('A' + i) << ": ";
        cin >> currentYear[i] >> previousYear[i];
        totalCurrent += currentYear[i];
        totalPrevious += previousYear[i];
    }

    // Display table of monthly rainfall
    cout << "\nTable of monthly rainfall is as follows: " << endl;
    cout << "This year\tLast year" << endl;
    for (i = 0; i < 12; i++) {
        cout << setw(4) << currentYear[i] << "\t" << setw(4) << previousYear[i] << endl;
    }

    // Display summary statistics
    cout << "\nTotal rainfall this year: " << totalCurrent;
    cout << "\nTotal rainfall last year: " << totalPrevious << endl;
    averageCurrent = totalCurrent / 12;
    averagePrevious = totalPrevious / 12;
    cout << setprecision(2) << fixed;
    cout << "\nAverage monthly rainfall for this year: " << averageCurrent;
    cout << "\nAverage monthly rainfall for last year: " << averagePrevious << endl;

    // Find highest rainfall and months with no rain
    int noRainCurrent = 0, noRainPrevious = 0, highCurrent = 0, highPrevious = 0;
    for (i = 0; i < 12; i++) {
        if (currentYear[i] == 0) {
            noRainCurrent++;
        }
        if (previousYear[i] == 0) {
            noRainPrevious++;
        }
        if (currentYear[i] > highCurrent) {
            highCurrent = currentYear[i];
        }
        if (previousYear[i] > highPrevious) {
            highPrevious = previousYear[i];
        }
    }
    cout << "\nHighest Rainfall this year: " << highCurrent << " in ";
    for (i = 0; i < 12; i++) {
        if (currentYear[i] == highCurrent) {
            cout << (char)('A' + i) << " ";
        }
    }
    cout << endl;
    cout << "Highest Rainfall last year: " << highPrevious << " in ";
    for (i = 0; i < 12; i++) {
        if (previousYear[i] == highPrevious) {
            cout << (char)('A' + i) << " ";
        }
    }
    cout << endl;
    cout << "Month having no rain this year: ";
    for (i = 0; i < 12; i++) {
        if (currentYear[i] == 0) {
            cout << (char)('A' + i) << " ";
        }
    }
    cout << endl;
    cout << "Month having no rain last year: ";
    for (i = 0; i < 12; i++) {
        if (previousYear[i] == 0) {
            cout << (char)('A' + i) << " ";
        }
    }
    cout << endl;

    // Display chart of monthly rainfall
    cout << "\nRain (in inches) for each year: " << endl;
    for (i = 0; i < 12; i++) {
        cout << (char)('A' + i) << " ";
        for (int j = 0; j < currentYear[i] / 0.5; j++) {
            cout << "*";
        }
        cout << "\t";
        for (int j = 0; j < previousYear[i] / 0.5; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}