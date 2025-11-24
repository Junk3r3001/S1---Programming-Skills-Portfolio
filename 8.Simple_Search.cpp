#include <iostream>
#include <string>
using namespace std;

int main() {
      // Declare and initialize the array
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};  // Creates an array of strings with 6 elements: "Jake", "Zac", "Ian", "Ron", "Sam", "Dave".
    string searchTerm;  // Variable used to store the name the user wants to search for.
    bool found = false;  // Flag to track whether the name is found. Starts as false.

    // Ask user for input
    cout << "Enter a name to search: ";
    cin >> searchTerm;  // Reads the user’s input into the variable searchTerm.

    // Loop through the array
    for (int i = 0; i < 6; i++) { // Loops through each index of the array (0 to 5)
        if (names[i] == searchTerm) {  // Checks if the current element matches the user’s input.
            found = true;  // Sets the flag to true.
            break;  // Exits the loop early (no need to keep searching).
        }
    }

    // Output result
    if (found) {
       cout << searchTerm << " was found in the array!" << endl;  // Prints that the name was found.
    } else {
       cout << searchTerm << " was NOT found in the array." << endl;  // Prints that the name was not found.
    }

    return 0; 
}


