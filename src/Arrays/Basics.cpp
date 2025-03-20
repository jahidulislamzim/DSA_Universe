#include <iostream>
using namespace std;

int main() {
    // -----------------------------
    // What is an array?
    // -----------------------------
    // An array is a collection of elements of the same data type.
    // It stores multiple values in a single variable, instead of declaring separate variables for each value.

    // -----------------------------
    // Array syntax:
    // -----------------------------
    // data_type array_name[size];
    
    // -----------------------------
    // Array declaration:
    // -----------------------------
    int numbers[5]; // Declaring an integer array of size 5
    
    // -----------------------------
    // Array initialization:
    // -----------------------------
    // There are two ways to initialize an array
    
    // 1. Initialize all values at once
    int marks[5] = {90, 80, 85, 70, 95}; 
    
    // 2. Initialize specific values later
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // -----------------------------
    // What is the index of an array?
    // -----------------------------
    // Index is the position number of each element in the array.
    // In C++, array index starts from 0.
    // Example:
    // marks[0] = 90 (first element)
    // marks[1] = 80 (second element) and so on...

    // -----------------------------
    // Access value with index:
    // -----------------------------
    cout << "First value of marks array: " << marks[0] << endl; // prints 90
    cout << "Third value of numbers array: " << numbers[2] << endl; // prints 30
    
    // -----------------------------
    // Add value in array with index:
    // -----------------------------
    // Changing/updating value using index
    numbers[1] = 25; // Changing second value from 20 to 25
    
    cout << "Updated second value of numbers array: " << numbers[1] << endl; // prints 25
    
    // -----------------------------
    // Displaying all elements of an array:
    // -----------------------------
    cout << "All values of numbers array: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
