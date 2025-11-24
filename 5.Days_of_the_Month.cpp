#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "Enter a month number (1-12): ";
    cin >> month;

    switch (month) {
		 // Will check the number entered by the user 

        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "This month has 31 days." << endl;
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "This month has 30 days." << endl;
            break;

        case 2:  // February
            cout << "This month has 28 days (29 in a leap year)." << endl;
            break;
		 // Prints 28 days, with a note about the leap years.

		 // Months with the same number of days are grouped together tp avoid repetition

        default:
            cout << "Invalid month number! Please enter a value between 1 and 12." << endl;
		 // Default will handle invalids inputs, any numbers outside 1 to 12.
    }

    return 0;
}