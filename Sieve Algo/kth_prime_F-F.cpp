/// In the name of Allah
#include <bits/stdc++.h>
using namespace std;

const int n = 1e8;  // 10^8
vector<bool> isPrime(n + 1, true);
vector<int> primes;

void sieve()
{
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * 1LL * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    sieve();
    for (int i = 0; i < primes.size(); i += 100)
    {
        cout << primes[i] << "\n";
    }
    return 0;
}
