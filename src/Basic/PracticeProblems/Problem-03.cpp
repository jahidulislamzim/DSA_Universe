#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// Macro for faster input/output operations
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*
    Problem: Print the multiplication table of a given number up to 10.

    Approach:
    - Take an integer input from the user.
    - Use a loop to multiply the input number by 1 to 10.
    - Print each result in the format: i x n = result
*/

/*
    Function: multiplicationTable
    Purpose: Prints the multiplication table of 'n' from 1 to 10.
    Parameter:
        - int n: The number whose multiplication table is to be printed.
*/
void multiplicationTable(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << n << " = " << i * n << endl;
    }
}

int main() {
    // optimize(); // Optimize input/output operations (good practice even for small programs)

    int N;
    cout << "Enter the number: ";
    cin >> N; // Taking input

    // Print multiplication table
    multiplicationTable(N);

    return 0; // End of program
}
