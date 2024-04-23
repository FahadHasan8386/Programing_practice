#include <iostream>
using namespace std;

int placeAvengers(int A, int B) {

    return (A * B + 1) / 2;
}
int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) {
        int A, B;
        cin >> A >> B;
        int maxAvengers = placeAvengers(A, B);
        cout << "Case " << i << ": " << maxAvengers << endl;
    }
    return 0;
}
