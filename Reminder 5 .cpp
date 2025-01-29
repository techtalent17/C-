
// C++ program to find quotient
// and remainder
#include <iostream>
using namespace std;

// Driver code
int main()
{
    int Dividend, Quotient, Divisor, Remainder;

    cout << "Enter Dividend & Divisor: ";
    cin >> Dividend >> Divisor;

    // Check for division by zero
    if (Divisor == 0) {
        cout << "Error: Divisor cannot be zero." << endl;
    } else {
        Quotient = Dividend / Divisor;
        Remainder = Dividend % Divisor;

        cout << "The Quotient = " << Quotient << endl;
        cout << "The Remainder = " << Remainder << endl;
    }
    return 0;
}
