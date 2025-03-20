#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// Macro for faster input/output
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*
    Problem: Print numbers from 1 to 10 (or any range given)
*/

/*
    Function: printNumbers
    Purpose: Prints all numbers from 'a' to 'z' inclusive.
    Parameters:
        - int a: Starting number
        - int z: Ending number
*/
void printNumbers(int a, int z) {
    for (int i = a; i <= z; i++) {
        cout << i << endl;
    }
}

int main() {
    optimize(); // Optimizes input/output operations
    
    // Call the function to print numbers from 1 to 10
    printNumbers(1, 10);

    return 0; // End of program
}
