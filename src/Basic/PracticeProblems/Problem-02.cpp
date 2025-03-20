#include <bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// Macro for faster input/output
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*
    Problem: Sum of first n natural numbers

    Two Approaches:
    1. Loop Method (Time Complexity: O(n))
    2. Formula Method (Time Complexity: O(1))

    This helps to understand the difference in efficiency.
*/

/*
    Function: sumUsingLoop
    Purpose: Calculates sum of first 'n' natural numbers using a loop (O(n) time)
*/
void sumUsingLoop(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "[Loop] Sum of first " << n << " natural numbers is: " << sum << endl;
}

/*
    Function: sumUsingFormula
    Purpose: Calculates sum of first 'n' natural numbers using formula (O(1) time)
*/
void sumUsingFormula(int n) {
    long long sum = 1LL * n * (n + 1) / 2; // Using 1LL to avoid overflow for large 'n'
    cout << "[Formula] Sum of first " << n << " natural numbers is: " << sum << endl;
}

int main() {
    // optimize(); // Optimize input/output operations

    int N;
    cout << "Enter a number: ";
    cin >> N;

    // Using Loop
    sumUsingLoop(N);

    // Using Formula
    sumUsingFormula(N);

    return 0; // End of program
}
