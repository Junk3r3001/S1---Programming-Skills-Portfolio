#include <iostream>  
#include <string>   
using namespace std;  

// Function that checks if a number is even or odd
// Takes an integer as input and returns a descriptive message as a string
string checkEven(int num) {
    if (num % 2 == 0) {                     // If the number is divisible by 2
        return "The provided number is even"; // Return this message
    } else {                                // Otherwise (not divisible by 2)
        return "The provided number is odd";  // Return this message
    }
}

int main() {
    int value;  // Variable to store the number entered by the user

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> value;  // Read the number from console input

    // Call the function with the user's number and store the returned message
    string result = checkEven(value);

    // Output the message returned by the function
    cout << result << endl;

    return 0;  
}
