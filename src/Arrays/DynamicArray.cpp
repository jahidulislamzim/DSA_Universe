#include <bits/stdc++.h>
using namespace std;

int* arr = nullptr; // Pointer to hold dynamic array globally
int capacity = 2;   // Initial capacity
int currentSize = 0; // Current number of elements (renamed from 'size')

// Function to add a value
void add(int value) {
    // Check if resize is needed
    if (currentSize >= capacity) {
        // Double the capacity
        capacity *= 2;

        // Create new larger array
        int* newArr = new int[capacity];

        // Copy old data
        for (int i = 0; i < currentSize; i++) {
            newArr[i] = arr[i];
        }

        // Delete old array
        delete[] arr;

        // Point arr to new array
        arr = newArr;
    }

    // Add value
    arr[currentSize] = value;
    currentSize++;
}

// Function to print all elements
void traversal() {
    cout << "Array elements: ";
    for (int i = 0; i < currentSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    arr = new int[capacity]; // Allocate initial array
    
    int value;

    // Take a single input value from the user
    cout << "Enter value: ";
    cin >> value;

    add(value); // Add value to array

    // Show all values
    traversal();

    // Free memory
    delete[] arr;

    return 0;
}
