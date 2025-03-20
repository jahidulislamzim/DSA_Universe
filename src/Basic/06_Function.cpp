#include <iostream>
using namespace std;

// ------------------------- 1. Basic Function Syntax -------------------------
// A basic function to add two integers and return the result.
int add(int a, int b) {
    return a + b;  // Return the sum of a and b
}

// ------------------------- 2. Function with 'void' Return Type -------------------------
// Function with void return type that prints a greeting message.
void greet() {
    cout << "Hello, World!" << endl;  // This function doesn't return anything
}

// ------------------------- 3. Function with Multiple Parameters -------------------------
// Function to calculate the average of three numbers
float average(float a, float b, float c) {
    return (a + b + c) / 3.0;  // Return the average of a, b, and c
}

// ------------------------- 4. Function Overloading -------------------------
// Overloaded function to add two floats
float add(float a, float b) {
    return a + b;  // Return the sum of two floats
}

// ------------------------- 5. Default Arguments -------------------------
// Function with default argument values
void printMessage(string msg = "Hello, C++!") {
    cout << msg << endl;  // Print the message
}

// ------------------------- 6. Pass by Value -------------------------
// Function to demonstrate pass by value
void passByValue(int num) {
    num = num + 10;  // Modify the local copy
    cout << "Inside passByValue function: " << num << endl;
}

// ------------------------- 7. Pass by Reference -------------------------
// Function to demonstrate pass by reference
void passByReference(int &num) {
    num = num + 10;  // Modify the original variable
    cout << "Inside passByReference function: " << num << endl;
}

int main() {
    // ------------------------- Calling Functions -------------------------
    // Calling the basic add function
    int result = add(10, 20);
    cout << "Sum: " << result << endl;  // Output: Sum: 30

    // Calling the void function
    greet();  // Output: Hello, World!

    // Calling the average function
    float avg = average(10.5, 20.5, 30.5);
    cout << "Average: " << avg << endl;  // Output: Average: 20.5

    // Calling overloaded add function (with integers)
    int intSum = add(5, 10);
    cout << "Integer sum: " << intSum << endl;  // Output: Integer sum: 15

    // Calling overloaded add function (with floats)
    float floatSum = add(5.5f, 10.5f);
    cout << "Float sum: " << floatSum << endl;  // Output: Float sum: 16.0

    // Calling function with default argument
    printMessage();  // Uses the default argument
    printMessage("Custom message");  // Uses the provided argument

    // ------------------------- Pass by Value Example -------------------------
    int x = 50;
    cout << "Before passByValue function: " << x << endl;
    passByValue(x);  // Pass by value
    cout << "After passByValue function: " << x << endl;  // x remains unchanged

    // ------------------------- Pass by Reference Example -------------------------
    int y = 50;
    cout << "Before passByReference function: " << y << endl;
    passByReference(y);  // Pass by reference
    cout << "After passByReference function: " << y << endl;  // y is changed

    return 0;
}
