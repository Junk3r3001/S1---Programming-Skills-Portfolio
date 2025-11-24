#include <iostream>
using namespace std;

int main() {
    // 1. Loop that counts up from 0 to 50 in increments of 1
    cout << "Counting up from 0 to 50:" << endl;
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

	/*Starts i at 0. Condition: keep looping while i<=50.
          Increment: i++ increases i by 1 each time. Prints numbers 0 1 2 .... 49 50. */

    // 2. Loop that counts down from 50 to 0 in decrements of 1
    cout << "Counting down from 50 to 0:" << endl;
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl << endl;

	/* Starts i at 50. Condition: keep looping while i>=0.
	   Decrement: i-- decreases i by 1 each time. Prints numbers 50 49 48 ... 1 0. */ 

    // 3. Loop that counts up from 30 to 50 in increments of 1
    cout << "Counting up from 30 to 50:" << endl;
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

	/* Starts i at 30. Condition: keep looping while i<=50.
	   Increment: i++ increases i by 1 each time. prints numbers 30 31 32 ... 49 50. */

    // 4. Loop that counts down from 50 to 10 in decrements of 2
    cout << "Counting down from 50 to 10 (step 2):" << endl;
    for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << endl << endl;

	/* Starts i at 50. Condition: keep looping while i>=10.
	   Decrement: i-=2 decreases i by 2 each time. Prints numbers 50 48 46 ... 12 10. */

    // 5. Loop that counts up from 100 to 200 in increments of 5
    cout << "Counting up from 100 to 200 (step 5):" << endl;
    for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << endl;

	/* Starts i at 100. Condition: keep looping while i<=200.
	   Increment: i+=5 increases i by 5 each time. prints numbers 100 105 110 ... 195 200. */

    return 0;
}
