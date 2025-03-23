#include <iostream>
using namespace std;

// Function to perform Linear Search
// Parameters:
// arr[] - the array to search
// size  - number of elements in the array
// key   - the element to search for
int linearSearch(int arr[], int size, int key) {
    // Step 1: Loop through each element of the array
    for (int i = 0; i < size; i++) {
        // Step 2: Check if current element matches the key
        if (arr[i] == key) {
            // Step 3: If found, return the index
            return i; // Element found at index i
        }
    }
    // Step 4: If loop finishes without finding key, return -1
    return -1; // Element not found
}

int main() {
    // Step 1: Declare and initialize the array
    int arr[] = {10, 20, 30, 40, 50};
    
    // Step 2: Calculate size of array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Step 3: Input the element to search
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    // Step 4: Call linearSearch function
    int result = linearSearch(arr, size, key);

    // Step 5: Display result
    if (result != -1) {
        cout << "Element " << key << " found at index " << result << "." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}
