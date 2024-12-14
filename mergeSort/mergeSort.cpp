/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // Temporary arrays left and right side
    int left[n1], right[n2];

    // Copy data to temporary array for left side
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    // Copy data to temporary array for right side
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    // Merge the temporary arrays (left ,right)
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of left side
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right side
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2; // Avoid overflow

        // Sort first and second halves
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        // Merge the element left and right
        Merge(arr, l, mid, r);
    }
}

int main() {
    // Example array
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Given array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
