/// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Step 1: Input vector size
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter " << n << " elements (can be unsorted): ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    // Step 2: Sort the vector (Required for binary search)
    sort(v.begin(), v.end());

    cout << "\nSorted Vector: ";
    for (int val : v) cout << val << " ";
    cout << "\n\n";

    // Step 3: Test with different values
    vector<int> queries = {2, 4, 5, 6, 10};

    for (int x : queries) {
        cout << "🔍 Searching for: " << x << endl;

        // Step 4: Using lower_bound and upper_bound
        auto lb = lower_bound(v.begin(), v.end(), x);
        auto ub = upper_bound(v.begin(), v.end(), x);

        // Step 5: Checking and printing result
        if (lb != v.end()) {
            cout << "Lower Bound (≥ " << x << "): " << *lb << " at index " << (lb - v.begin()) << "\n";
        } else {
            cout << "Lower Bound: No element ≥ " << x << "\n";
        }

        if (ub != v.end()) {
            cout << "Upper Bound (> " << x << "): " << *ub << " at index " << (ub - v.begin()) << "\n";
        } else {
            cout << "Upper Bound: No element > " << x << "\n";
        }

        // Step 6: Count elements ≤ x
        int countLessOrEqual = ub - v.begin();
        cout << "Count of elements ≤ " << x << " = " << countLessOrEqual << "\n";

        // Step 7: Count of exact matches
        int countEqual = ub - lb;
        cout << "Count of elements == " << x << " = " << countEqual << "\n";

        cout << "--------------------------------------\n";
    }

    return 0;
}
