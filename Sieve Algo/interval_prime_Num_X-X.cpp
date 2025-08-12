/// In the name of Allah

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return primes;
}

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> primes = sieve(b);

    for (int p : primes) {
        if (p >= a) {
            cout << p << " ";
        }
    }
    cout << endl;

    return 0;
}
