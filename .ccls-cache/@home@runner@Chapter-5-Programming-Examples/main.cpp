// The Greatest and Least of These
// This program finds the largest and smallest number in a series of numbers entered by the user. 
#include <iostream>

using namespace std;

int main()
{
    const int SENTINEL = -99;
    int minNumber, maxNumber, number;

    cout << "Enter a series of numbers." << endl;
    cout << "Type -99 to the series." << endl;
    cin >> number;
    minNumber = number;
    maxNumber = number;
    while (number != SENTINEL)
    {
        if (number < minNumber)
            minNumber = number;
        if (number > maxNumber)
            maxNumber = number;
        cin >> number;
    }

    cout << "The smallest number in the series was: " << minNumber << endl;
    cout << "The largest number in the series was: " << maxNumber << endl;

    return (0);
}
