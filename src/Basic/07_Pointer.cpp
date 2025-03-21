#include <iostream>
using namespace std;

// Function to swap values using pointers
void swapValues(int* x, int* y) {
    int temp = *x;  // Dereference x to get the value and store it in temp
    *x = *y;        // Dereference y to get its value and store it in x's memory location
    *y = temp;      // Store the temp value in y's memory location (swapping the values)
}

void pointerBasics() {
    int num = 10;            // A normal integer variable
    int* ptr = &num;         // A pointer that holds the address of num

    cout << "Pointer Basics:" << endl;
    cout << "Value of num: " << num << endl;          // Display value of num
    cout << "Address of num: " << &num << endl;        // Display address of num (memory location)
    
    // Using pointer to access value
    cout << "Pointer ptr holds address: " << ptr << endl;  // Display address stored in pointer ptr
    cout << "Value at address ptr: " << *ptr << endl;       // Dereferencing ptr to get the value stored at the address
}

void pointerArithmetic() {
    int arr[] = {10, 20, 30, 40, 50};   // An array of integers
    int* ptr = arr;                     // Pointer pointing to the first element of the array

    cout << "\nPointer Arithmetic:" << endl;

    // Accessing array elements using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " ";   // Dereferencing with pointer arithmetic (ptr + i moves to next element)
    }
    cout << endl;
}

void pointerWithFunctions() {
    int a = 5, b = 10;

    cout << "\nPointer with Functions:" << endl;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Calling swapValues and passing the addresses of a and b
    swapValues(&a, &b);  // Pass by reference (passing the address of a and b)

    cout << "After swapping: a = " << a << ", b = " << b << endl;  // Values after swap
}

void pointerToPointer() {
    int num = 5;
    int* ptr = &num;     // Pointer to an integer
    int** ptr2 = &ptr;    // Pointer to pointer (pointer that holds the address of ptr)

    cout << "\nPointer to Pointer:" << endl;
    cout << "Value using ptr: " << *ptr << endl;        // Dereferencing ptr to get the value of num
    cout << "Value using ptr2: " << **ptr2 << endl;     // Dereferencing ptr2 twice (pointer to pointer)
}

void pointerToArray() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;   // Pointer pointing to the first element of the array

    cout << "\nPointer to Array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " ";   // Dereferencing pointer to access array elements using pointer arithmetic
    }
    cout << endl;
}

void pointerToConstant() {
    const int num = 10;   // Constant integer value
    const int* ptr = &num;     // Pointer to a constant integer (value cannot be changed via pointer)

    cout << "\nPointer to Constant:" << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereferencing ptr to access the value
}

void constantPointer() {
    int num = 10;
    int* const ptr = &num;     // Constant pointer (pointer itself cannot point to a different location)

    cout << "\nConstant Pointer:" << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereferencing the constant pointer to access the value

    // Uncommenting the line below will cause an error as the pointer is constant:
    // ptr = nullptr;  // Error: cannot change the address stored in a constant pointer
}

void nullPointer() {
    int* ptr = nullptr;  // Null pointer (points to nothing)

    cout << "\nNull Pointer:" << endl;
    if (ptr == nullptr) {  // Check if pointer is null
        cout << "Pointer is null." << endl;
    }
}

int main() {
    // Call each function to demonstrate different pointer concepts
    pointerBasics();        // Basic pointer concepts
    pointerArithmetic();    // Pointer arithmetic with arrays
    pointerWithFunctions(); // Passing pointers to functions to modify values
    pointerToPointer();     // Pointer to pointer (multiple levels of pointers)
    pointerToArray();       // Pointer accessing array elements
    pointerToConstant();    // Pointer to constant (value cannot be changed via pointer)
    constantPointer();      // Constant pointer (pointer itself cannot be changed)
    nullPointer();          // Null pointer (pointer points to nothing)

    return 0;
}
