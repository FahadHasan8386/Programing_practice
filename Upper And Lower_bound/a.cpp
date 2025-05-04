/// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Step 1: Input array size
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (sorted or unsorted): ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 2: Sort the array (necessary for lower_bound / upper_bound)
    sort(arr.begin(), arr.end());

    cout << "\nSorted Array: ";
    for(int val : arr) cout << val << " ";
    cout << "\n\n";

    // Test values
    vector<int> test_values = {3, 4, 5, 7};

    // Step 3: Use lower_bound and upper_bound on each test value
    for (int val : test_values) {
        cout << "Searching for value: " << val << "\n";

        // lower_bound: First element >= val
        auto low = lower_bound(arr.begin(), arr.end(), val);
        // upper_bound: First element > val
        auto up = upper_bound(arr.begin(), arr.end(), val);

        // Print values or "Not found"
        if (low != arr.end()) {
            cout << "Lower Bound value: " << *low << " at index: " << (low - arr.begin()) << "\n";
        } else {
            cout << "Lower Bound: No element ≥ " << val << "\n";
        }

        if (up != arr.end()) {
            cout << "Upper Bound value: " << *up << " at index: " << (up - arr.begin()) << "\n";
        } else {
            cout << "Upper Bound: No element > " << val << "\n";
        }

        // Count of elements <= val = index of upper_bound
        int countLessOrEqual = up - arr.begin();
        cout << "Count of elements ≤ " << val << " = " << countLessOrEqual << "\n";

        // Count of elements == val
        int exactCount = up - low;
        cout << "Count of elements == " << val << " = " << exactCount << "\n";

        cout << "--------------------------\n";
    }

    return 0;
}
