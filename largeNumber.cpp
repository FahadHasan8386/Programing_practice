#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> numbers(5);

    cout << "Enter five numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end(), greater<int>());

    int thirdLargest = numbers[2];

    cout << "The third largest number is: " << thirdLargest << endl;

    return 0;
}
