#include <iostream>  
#include <string>  // Will allow us to use the string type for text
#include <algorithm>   // Will provide algorithms like transform, witch is used here convert text to lowercase
using namespace std;  // Will save us from using std::cout or std::string every time

int main() {
    string answer;  // Will declare a variable to store the user's response

    cout << "What is the capital of France? ";  // Will print the question to the console
    getline(cin, answer);  // Will allow us to read the entire line of input even including spaces
   
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        /*Transform will applie a function to each element in range, 
        Where it takes the string from answer.begin() to answer.end() and applies ::tolower to each character,
        Storing the result back into answer.
	This will ensure case-insensitive comparison (so "Paris", "paris", "PaRiS" all become "paris"). */

  

    if (answer == "paris") {  // Will check if the normalized input matches "paris"
        cout << "Correct!" << endl;
    } else {
        cout << "Wrong!" << endl;
    }

    return 0;
}
