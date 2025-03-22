#include <bits/stdc++.h>
using namespace std;



// Problem: Given an array of integers, swap every two adjacent elements. For example, the element at index 0 should swap with the element at index 1, the element at index 2 should swap with the element at index 3, and so on. If there is an odd number of elements, the last element remains unchanged.

// Input: [1, 2, 3, 4, 5]
// Output: [2, 1, 4, 3, 5]



void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void swapElements(int arr[], int size){
    
    for(int i=0; i<size; i+=2){
        if(i+1 < size){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}


int main(){

    int even[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    swapElements(even, 8);
    printArray(even, 8);

    return 0;
}