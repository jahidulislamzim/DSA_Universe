#include <iostream>
using namespace std;

// Function to display all elements of the array
// It prints each element separated by space
void displayArray(int arr[], int size) {
    cout << "Current Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at the start of the array
// This shifts all elements one position to the right and inserts the new element at index 0
void insertAtStart(int arr[], int &size, int element, int capacity) {
    // Check if array has space for new element
    if (size >= capacity) {
        cout << "Array is full. Cannot insert at start." << endl;
        return;
    }

    // Shift all elements to the right by one position
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element at index 0
    arr[0] = element;
    size++; // Increase array size by 1

    cout << "Inserted " << element << " at start." << endl;
    displayArray(arr, size); // Display updated array
}

// Function to insert an element at the end of the array
// It directly places the element at the last index (size position)
void insertAtEnd(int arr[], int &size, int element, int capacity) {
    // Check if array has space
    if (size >= capacity) {
        cout << "Array is full. Cannot insert at end." << endl;
        return;
    }

    // Insert element at the end
    arr[size] = element;
    size++; // Increase size

    cout << "Inserted " << element << " at end." << endl;
    displayArray(arr, size); // Display updated array
}

// Function to insert an element at a specific position (0-based index)
// Shifts elements to the right from the given position and inserts the new element there
void insertAtPosition(int arr[], int &size, int position, int element, int capacity) {
    // Check if array has space
    if (size >= capacity) {
        cout << "Array is full. Cannot insert at position." << endl;
        return;
    }

    // Check if position is valid (0 <= position <= size)
    if (position < 0 || position > size) {
        cout << "Invalid position. Cannot insert." << endl;
        return;
    }

    // Shift elements to the right starting from the position
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert new element at the specific position
    arr[position] = element;
    size++; // Increase size

    cout << "Inserted " << element << " at position " << position << "." << endl;
    displayArray(arr, size); // Display updated array
}

int main() {
    const int capacity = 10; // Maximum capacity of the array
    int arr[capacity] = {10, 20, 30, 40, 50}; // Initial elements of the array
    int size = 5; // Current number of elements in the array

    // Display the initial array
    cout << "Initial Array: ";
    displayArray(arr, size);

    // Inserting element at the start of the array
    insertAtStart(arr, size, 5, capacity);

    // Inserting element at the end of the array
    insertAtEnd(arr, size, 60, capacity);

    // Inserting element at a specific position (example: position 3)
    insertAtPosition(arr, size, 3, 25, capacity);

    return 0;
}