// Sales Bar Chart. 
// This program reads sales data for a number
// of stores from a data file. It creates a bar chart that
// displays a row of stars where each star represents $100 in sales

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int AMOUNT_PER = 100.;

    int storeNumber = 1, storeSales, numStars;
    string fileName;
    ifstream infile;

    cout << "Please enter the name of the data file: ";
    cin >> fileName;

    infile.open(fileName);
    if (infile.fail())
    {
        cout << "Could not open file " << fileName << endl;
        return(1);
    }

    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;
    //Use nested loops
    while (infile >> storeSales)
    {
        cout << "Store " << storeNumber++ << ": ";
        numStars = storeSales / AMOUNT_PER;
        for (int j = 0; j < numStars; j++)
            cout << "*";
        cout << endl;
    }

    infile.close();

    return(0);

}