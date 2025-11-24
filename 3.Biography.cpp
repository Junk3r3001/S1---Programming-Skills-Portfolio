#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string hometown;
    int age;

    // Request user input
    cout << "Enter your full name: ";
    getline(cin, name);      
    // If you use cin>>name , program will stop at the first space,
    // The fix will be to to use getline(cin,name) to capture the entire line, including spaces./*	
    cout << "Enter your hometown: ";
    getline(cin, hometown);
    // The same is valid for the home town aswell, if the name is composed of two words

    cout << "Enter your age: ";
    cin >> age;

    // Output all values with a single cout
    cout << name << endl
         << hometown << endl
         << age << endl;

    return 0;
}
