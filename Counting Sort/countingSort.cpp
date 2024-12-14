///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

// Counting Sort Function
void countingSort(int inputArray[], int size) {
    // Step 1: Find the maximum value in the array
    int maxValue = *max_element(inputArray, inputArray + size);

    // Step 2: Create a count array of size maxValue + 1, initialized to 0
    int countArray[maxValue + 1] = {0};

    // Step 3: Count the occurrences of each element in the input array
    for (int i = 0; i < size; i++) {
        countArray[inputArray[i]]++; // Increment the count of the element
    }

    // Step 4: Modify the count array to store cumulative counts
    for (int i = 1; i <= maxValue; i++) {
        countArray[i] += countArray[i - 1]; // Update the countArray for cumulative counts
    }

    // Step 5: Create a temporary output array to store the sorted elements
    int outputArray[size];

    // Step 6: Place elements into the outputArray in the correct order
    for (int i = size - 1; i >= 0; i--) {
        int currentElement = inputArray[i];          // Current element
        int position = countArray[currentElement] - 1; // Correct position
        outputArray[position] = currentElement;      // Place the element
        countArray[currentElement]--;                // Decrease the count
    }

    // Step 7: Copy the sorted elements back to the original inputArray
    for (int i = 0; i < size; i++) {
        inputArray[i] = outputArray[i];
    }
}

int main() {
    // Input: Array to be sorted
    int uniqueNumbers[] = {4, 2, 2, 8, 3, 3, 1};
    int n = sizeof(uniqueNumbers) / sizeof(uniqueNumbers[0]); // Calculate size of the array

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << uniqueNumbers[i] << " ";
    }
    cout << endl;

    // Call countingSort to sort the array
    countingSort(uniqueNumbers, n);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << uniqueNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}
