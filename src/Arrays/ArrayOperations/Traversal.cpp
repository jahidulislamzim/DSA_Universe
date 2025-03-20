#include <iostream> 
using namespace std;

// Function to traverse (print) the array from start to end
void traverseFromStart(int arr[], int size) {
    cout << "Traversing from start to end: ";
    // Loop starts from index 0 and goes till the last index (size - 1)
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl; // For new line after printing
}

// Function to traverse (print) the array from end to start
void traverseFromEnd(int arr[], int size) {
    cout << "Traversing from end to start: ";
    // Loop starts from last index (size - 1) and goes backward to index 0
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " "; // Print each element
    }
    cout << endl; // For new line after printing
}

int main() {
    // ------------------------
    // Array Declaration & Initialization
    // ------------------------
    // Declaring and initializing an integer array
    int numbers[] = {10, 20, 30, 40, 50}; // Array with 5 elements

    // ------------------------
    // Finding Size of Array
    // ------------------------
    // sizeof(numbers) gives total size in bytes
    // sizeof(numbers[0]) gives size of one element (int = 4 bytes)
    // Dividing total size by size of one element gives total number of elements
    int size = sizeof(numbers) / sizeof(numbers[0]); 
    
    // Print the calculated size of the array
    cout << "Size of the array: " << size << endl;

    // ------------------------
    // Traversing the array from start to end
    // ------------------------
    traverseFromStart(numbers, size);

    // ------------------------
    // Traversing the array from end to start
    // ------------------------
    traverseFromEnd(numbers, size);

    return 0; 
}