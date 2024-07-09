// Square
// This program makes a square out of Xs of an arbitrary size provided by the user. The length is restricted to 15 or less.
#include <iostream>
using namespace std;

int main()
{
  const int MAX_LENGTH = 15;
  int length;

  cout << "What is the length of a side of the square? ";
  cin >> length;
  while (length > MAX_LENGTH)
  {
    cout << "Length must be less than " << MAX_LENGTH << " try again.";
    cin >> length;
  }

  // Outer loop, makes the rows
  for (int i = 0; i < length; i++)
  {
    // Inner loop, writes the stars
    for (int j = 0; j < length; j++)
      cout << 'X';
    cout << endl;
  }

  return(0);
}
