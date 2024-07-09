// Celsius to Fahrenheit
// This program produces a table of celsius and fahrenheit equivalent temperatures from 0 - 20 degrees Celsius.

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  const int MIN_CELSIUS = 0;
  const int MAX_CELSIUS = 20;
  double fahrenheit;

  cout << "Temperature in Celsius and Fahrenheit" << endl;
  cout << "Celsius     Fahrenheit" << endl;
  cout << "----------------------" << endl;
  cout << fixed << setprecision(1) << showpoint;
  for (int c = MIN_CELSIUS; c <= MAX_CELSIUS; c++)
  {
    fahrenheit = 9. / 5. * c + 32;
    cout << setw(4) << c << setw(14) << fahrenheit << endl;

  }

  return(0);
}