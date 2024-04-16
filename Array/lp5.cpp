#include <iostream>
using namespace std;

int main() {
    int m = 4;
    int n = 5;
    int arr[4][5];
    int sum = 0;


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                sum += arr[i][j];
            }
        }
    }

    cout << sum;

    return 0;
}
