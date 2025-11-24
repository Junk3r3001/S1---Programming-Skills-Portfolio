#include <iostream>
using namespace std;

int main() {
    const int correctPassword = 12345;   // Define the correct password (constant so it cannot be changed)
    int attempt;                         // Variable to store the user's input
    int attemptsLeft = 5;                // Maximum number of attempts allowed

    // Loop continues as long as the user still has attempts left
    while (attemptsLeft > 0) {
        cout << "Enter the password: ";  // Prompt user for input
        cin >> attempt;                  // Read the user's attempt

        // Check if the entered password matches the correct one
        if (attempt == correctPassword) {
            cout << "Welcome to the Secure Area!" << endl; // Success message
            return 0; // Exit program immediately since access is granted
        } else {
            attemptsLeft--; // Reduce the number of attempts left

            // If there are still attempts remaining, warn the user
            if (attemptsLeft > 0) {
                cout << "Incorrect password. You have "
                     << attemptsLeft << " attempts remaining." << endl;
            } else {
                // If no attempts remain, lock the user out
                cout << "Too many failed attempts! The authorities have been alerted!" << endl;
            }
        }
    }

    return 0; // End program
}
