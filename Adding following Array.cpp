#include <iostream>
using namespace std;

int main() {

  // initialize an array without specifying size
  double numbers[] = {10, 10, 10, 2, 5};

  double sum = 0;
  double count = 0;
  double average;

  cout << "The numbers are: ";

  //  print array elements
  // use of range-based for loop
  for (const double &n : numbers) {
    cout << n << "  ";

    //  calculate the sum
    sum += n;

    // count the no. of array elements
    ++count;
  }

  // print the sum
  cout << "\nTheir Sum = " << sum << endl;

  // find the average
  average = sum / count;
  cout << "Their Average = " << average << endl;

  return 0;
}
