// Numeric Processing
// This program reads random numbers from a file and displays the count of numbers on the file, the sum of the numbers
// and the average of the numbers.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const string filename = "Random.txt";

    ifstream infile;
    // Initialize counter and accumulator to 0
    int count = 0, sum = 0, number;
    double average;

    infile.open(filename);
    if (infile.fail())
    {
        cout << "Could not find " << filename << endl;
        return(1);
    }

    while (infile >> number)
    {
        sum += number;
        count++;
    }

    average = static_cast<double>(sum) / count;

    cout << "Count of numbers on file: " << count << endl;
    cout << "Sum of the numbers: " << sum << endl;
    cout << "Average of the numbers: " << average << endl;
}
