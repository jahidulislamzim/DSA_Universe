#include <iostream>
using namespace std;

// Function to display the current array elements
void displayArray(int arr[], int size) {
    cout << "Current Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;
}

// Function to update the element at a specific position
void updateAtPosition(int arr[], int size, int position, int newValue) {
    // Check if position is valid (0 <= position < size)
    if (position < 0 || position >= size) {
        cout << "Invalid position! Cannot update." << endl;
        return;
    }

    // Update the element at the given position
    arr[position] = newValue; // Assign new value to the specified position

    cout << "Updated element at position " << position << " to " << newValue << "." << endl;
    displayArray(arr, size); // Display updated array
}

int main() {
    // Initial array with some elements
    int arr[10] = {10, 20, 30, 40, 50};

    // Current size of array (number of valid elements)
    int size = 5;

    // Display initial state of array
    cout << "Initial Array: ";
    displayArray(arr, size);

    // Update element at position 2 (indexing starts from 0)
    updateAtPosition(arr, size, 2, 100);  // Update element at index 2 with 100

    // Update element at position 4 (last element)
    updateAtPosition(arr, size, 4, 200);  // Update element at index 4 with 200

    // Try updating an element at an invalid position
    updateAtPosition(arr, size, 5, 300);  // Invalid position (out of range)

    return 0;
}
