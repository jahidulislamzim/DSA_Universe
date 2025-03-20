#include <bits/stdc++.h>  // Includes most of the C++ standard library headers

using namespace std;  // Use the standard namespace

int main() {
    // ------------------------- IF-ELSE STATEMENTS -------------------------
    // The if-else statement is used to execute code based on a condition.

    int x = 20, y = 10;
    
    // Basic if-else statement to check if x is greater than y
    if (x > y) {
        cout << "x is greater than y" << endl;  // Executes if x > y
    } else {
        cout << "x is not greater than y" << endl;  // Executes if x is not greater than y
    }

    cout << endl;
    
    // ------------------------- ELSE IF STATEMENT -------------------------
    // The else-if statement checks multiple conditions sequentially.
    if (x == y) {
        cout << "x is equal to y" << endl;  // Executes if x equals y
    } else if (x > y) {
        cout << "x is greater than y" << endl;  // Executes if x is greater than y
    } else {
        cout << "x is less than y" << endl;  // Executes if none of the above conditions are true
    }

    cout << endl;
    
    // ------------------------- NESTED IF-ELSE -------------------------
    // Nested if-else checks conditions inside another if block.

    if (x > y) {
        // First condition: Check if x is greater than y
        cout << "x is greater than y" << endl;

        // Second condition: Check if x is greater than 15, but only if the first condition is true
        if (x > 15) {
            cout << "x is also greater than 15" << endl;  // This code executes only if x > 15
        }
    } else {
        // Executes if the first condition (x > y) is false
        cout << "x is not greater than y" << endl;
    }

    cout << endl;
    
    // ------------------------- SWITCH CASE -------------------------
    // The switch-case statement is used to perform one of many actions based on different conditions.
    
    int choice = 2;
    
    switch(choice) {
        case 1:
            cout << "You selected option 1" << endl;  // Executes if choice is 1
            break;
        case 2:
            cout << "You selected option 2" << endl;  // Executes if choice is 2
            break;
        case 3:
            cout << "You selected option 3" << endl;  // Executes if choice is 3
            break;
        default:
            cout << "Invalid option" << endl;  // Executes if no cases match
    }

    cout << endl;
    
    // ------------------------- TERNARY OPERATOR -------------------------
    // The ternary operator is a shorthand for if-else. The syntax is:
    // condition ? expr1 : expr2
    
    int largest = (x > y) ? x : y;  // If x > y, largest is x; otherwise, largest is y
    cout << "The largest value is: " << largest << endl;

    return 0;  // Return 0 to indicate successful execution
}
