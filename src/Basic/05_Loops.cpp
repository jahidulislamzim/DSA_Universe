#include <bits/stdc++.h>  // Includes most of the C++ standard library headers
using namespace std;

int main() {

    // ------------------------- FOR LOOP -------------------------
    // The for loop is used when the number of iterations is known beforehand.
    // Syntax: for (initialization; condition; update) { ... }

    cout << "For Loop Example:" << endl;
    for (int i = 0; i < 5; i++) {
        // Code to be executed in each iteration
        cout << "Iteration " << i << endl;
    }
    cout << endl;
    
    // ------------------------- WHILE LOOP -------------------------
    // The while loop is used when the number of iterations is not known beforehand,
    // but we want to loop as long as a condition is true.
    // Syntax: while (condition) { ... }

    cout << "While Loop Example:" << endl;
    int i = 0;
    while (i < 5) {
        // Code to be executed in each iteration
        cout << "Iteration " << i << endl;
        i++;  // Increment the value of i
    }
    cout << endl;

    // ------------------------- DO-WHILE LOOP -------------------------
    // The do-while loop is similar to the while loop, except the condition is checked after the loop's body.
    // This guarantees that the loop is executed at least once.
    // Syntax: do { ... } while (condition);

    cout << "Do-While Loop Example:" << endl;
    int j = 0;
    do {
        // Code to be executed in each iteration
        cout << "Iteration " << j << endl;
        j++;  // Increment the value of j
    } while (j < 5);
    cout << endl;
    
    // ------------------------- NESTED LOOPS -------------------------
    // A nested loop is a loop inside another loop.
    // Syntax: for/while/do-while inside another for/while/do-while loop

    cout << "Nested Loop Example:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Code to be executed in nested loops
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    cout << endl;

    // ------------------------- BREAK AND CONTINUE -------------------------
    // The 'break' statement is used to exit the loop entirely, whereas 'continue' skips the current iteration and moves to the next one.

    cout << "Break and Continue Example:" << endl;
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            // Break when i equals 3
            cout << "Breaking loop when i = " << i << endl;
            break;  // Exit the loop
        }
        cout << "i = " << i << endl;
    }

    cout << endl;

    cout << "Using Continue Example:" << endl;
    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            // Skip the current iteration when i equals 3
            cout << "Skipping iteration when i = " << i << endl;
            continue;  // Skip the current iteration and move to the next
        }
        cout << "i = " << i << endl;
    }

    return 0;  // Return 0 to indicate successful execution
}
