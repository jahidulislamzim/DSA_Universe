#include <iostream>
using namespace std;

// Function to display current array elements
void displayArray(int arr[], int size) {
    cout << "Current Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl;
}

// Function to delete element from start of the array
void deleteFromStart(int arr[], int &size) {
    // Check if array is already empty
    if (size == 0) {
        cout << "Array is empty. Nothing to delete." << endl;
        return;
    }

    // Shift all elements one position to the left
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Move each element to previous index
    }

    size--; // Reduce array size by 1 after deletion
    cout << "Deleted element from start." << endl;
    displayArray(arr, size); // Display updated array
}

// Function to delete element from end of the array
void deleteFromEnd(int arr[], int &size) {
    // Check if array is already empty
    if (size == 0) {
        cout << "Array is empty. Nothing to delete." << endl;
        return;
    }

    size--; // Just decrease size by 1 (last element is ignored)
    cout << "Deleted element from end." << endl;
    displayArray(arr, size); // Display updated array
}

// Function to delete element from a specific position
void deleteFromPosition(int arr[], int &size, int position) {
    // Check if array is empty
    if (size == 0) {
        cout << "Array is empty. Nothing to delete." << endl;
        return;
    }

    // Validate position: must be between 0 and size-1
    if (position < 0 || position >= size) {
        cout << "Invalid position! No deletion done." << endl;
        return;
    }

    // Shift all elements after position one step left
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Move next element to current index
    }

    size--; // Reduce size after deletion
    cout << "Deleted element from position " << position << "." << endl;
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

    // Delete element from start (index 0)
    deleteFromStart(arr, size);

    // Delete element from end (last index)
    deleteFromEnd(arr, size);

    // Delete element from specific position (for example, position 1)
    deleteFromPosition(arr, size, 1);

    return 0;
}
