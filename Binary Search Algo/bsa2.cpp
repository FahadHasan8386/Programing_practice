#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> find(vector<int> arr, int x) {
        vector<int> result(2, -1);  // Initialize result with -1 for both indices
        int left = 0, right = arr.size() - 1;

        // First occurrence of x
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == x) {
                result[0] = mid;
                right = mid - 1;  // Continue searching in the left half
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Reset left and right for the second search
        left = 0;
        right = arr.size() - 1;

        // Last occurrence of x
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == x) {
                result[1] = mid;
                left = mid + 1;  // Continue searching in the right half
            } else if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;

    vector<int> result = solution.find(arr, x);
    cout << "First occurrence of " << x << " is at index: " << result[0] << endl;
    cout << "Last occurrence of " << x << " is at index: " << result[1] << endl;

    return 0;
}
