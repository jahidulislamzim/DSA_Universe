#include <bits/stdc++.h>  // Includes most of the C++ standard library headers

using namespace std;  // Use the standard namespace

int main() {
    // ------------------------- ARITHMETIC OPERATORS -------------------------
    // Arithmetic operators are used to perform basic mathematical operations.
    // +, -, *, /, %
    // Precedence: *, /, % have higher precedence than +, -

    int a = 10, b = 5, c = 20, d = 15;
    
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl; // Add 'a' and 'b', returns the sum of a and b
    cout << "a - b = " << (a - b) << endl; // Subtract 'b' from 'a', returns the difference between a and b
    cout << "a * b = " << (a * b) << endl; // Multiply 'a' by 'b', returns the product of a and b
    cout << "a / b = " << (a / b) << endl; // Divide 'a' by 'b', returns the quotient of a divided by b
    cout << "a % b = " << (a % b) << endl; // Modulus operator, returns the remainder when 'a' is divided by 'b'
    
    cout << endl;
    
    // ------------------------- RELATIONAL OPERATORS -------------------------
    // Relational operators are used to compare two values.
    // ==, !=, >, <, >=, <=
    // Precedence: Relational operators have lower precedence than arithmetic operators
    
    cout << "Relational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl; // Check if 'a' is equal to 'b', returns true if equal, otherwise false
    cout << "a != b: " << (a != b) << endl; // Check if 'a' is not equal to 'b', returns true if not equal, otherwise false
    cout << "a > b: " << (a > b) << endl;  // Check if 'a' is greater than 'b', returns true if a is greater than b, otherwise false
    cout << "a < b: " << (a < b) << endl;  // Check if 'a' is less than 'b', returns true if a is less than b, otherwise false
    cout << "a >= b: " << (a >= b) << endl; // Check if 'a' is greater than or equal to 'b', returns true if a is greater or equal to b, otherwise false
    cout << "a <= b: " << (a <= b) << endl; // Check if 'a' is less than or equal to 'b', returns true if a is less or equal to b, otherwise false
    
    cout << endl;
    
    // ------------------------- LOGICAL OPERATORS -------------------------
    // Logical operators are used to perform logical operations on boolean values.
    // && (AND), || (OR), ! (NOT)
    // Precedence: Logical operators have lower precedence than relational operators

    bool x = true, y = false;
    
    cout << "Logical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl; // Logical AND, returns true if both x and y are true, otherwise false
    cout << "x || y: " << (x || y) << endl; // Logical OR, returns true if either x or y is true, otherwise false
    cout << "!x: " << (!x) << endl; // Logical NOT, returns the opposite of x (true becomes false, false becomes true)
    
    cout << endl;
    
    // ------------------------- BITWISE OPERATORS -------------------------
    // Bitwise operators are used to perform bit-level operations on integer data types.
    // &, |, ^, ~, <<, >>
    // Precedence: Bitwise operators have lower precedence than arithmetic and relational operators

    int p = 5, q = 3;  // p = 0101 (binary), q = 0011 (binary)
    
    cout << "Bitwise Operators:" << endl;
    cout << "p & q: " << (p & q) << endl; // Bitwise AND, performs AND operation on each bit of p and q, returns the result
    cout << "p | q: " << (p | q) << endl; // Bitwise OR, performs OR operation on each bit of p and q, returns the result
    cout << "p ^ q: " << (p ^ q) << endl; // Bitwise XOR, performs XOR operation on each bit of p and q, returns the result
    cout << "~p: " << (~p) << endl; // Bitwise NOT, inverts the bits of p, returns the complement of p
    cout << "p << 1: " << (p << 1) << endl; // Bitwise left shift, shifts the bits of p to the left by 1 position
    cout << "p >> 1: " << (p >> 1) << endl; // Bitwise right shift, shifts the bits of p to the right by 1 position
    
    cout << endl;
    
    // ------------------------- ARITHMETIC PRECEDENCE EXAMPLE -------------------------
    // Expression: a + b * (c - d) / b 
    // Step-by-step breakdown:
    // 1. Parentheses (c - d) is evaluated first -> 20 - 15 = 5
    // 2. Multiplication: b * (c - d) -> 5 * 5 = 25
    // 3. Division: 25 / b -> 25 / 5 = 5
    // 4. Addition: a + 5 -> 10 + 5 = 15
    
    cout << "Expression result (a + b * (c - d) / b): " << a + b * (c - d) / b << endl;

    // ------------------------- ASSIGNMENT OPERATORS -------------------------
    // Assignment operators are used to assign values to variables.
    // =, +=, -=, *=, /=, %=

    int z = 10;
    
    cout << "Assignment Operators:" << endl;
    cout << "z = 10: " << (z = 10) << endl; // Basic assignment, assigns the value 10 to z
    cout << "z += 5: " << (z += 5) << endl; // Add 5 to z and assign the result to z
    cout << "z -= 3: " << (z -= 3) << endl; // Subtract 3 from z and assign the result to z
    cout << "z *= 2: " << (z *= 2) << endl; // Multiply z by 2 and assign the result to z
    cout << "z /= 2: " << (z /= 2) << endl; // Divide z by 2 and assign the result to z
    cout << "z %= 3: " << (z %= 3) << endl; // Modulus operation, assign the remainder of z divided by 3 to z
    
    cout << endl;
    
    // ------------------------- CONDITIONAL (TERNARY) OPERATOR -------------------------
    // Conditional operator is a shorthand for if-else statement.
    // ? : (condition ? expr1 : expr2)

    cout << "Conditional (Ternary) Operator:" << endl;
    int max = (a > b) ? a : b;  // If 'a' is greater than 'b', 'max' will be 'a', else 'b'
    cout << "max = " << max << endl;

    cout << endl;
    
    // ------------------------- SIZEOF OPERATOR -------------------------
    // The sizeof operator returns the size (in bytes) of a variable or data type.

    cout << "Sizeof Operator:" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // Returns the size of an int in bytes
    cout << "Size of float: " << sizeof(float) << " bytes" << endl; // Returns the size of a float in bytes
    cout << "Size of double: " << sizeof(double) << " bytes" << endl; // Returns the size of a double in bytes
    cout << "Size of char: " << sizeof(char) << " bytes" << endl; // Returns the size of a char in bytes
    cout << "Size of string: " << sizeof(string) << " bytes" << endl; // Returns the size of a string object in bytes

    return 0;  // Return 0 to indicate successful execution
}
