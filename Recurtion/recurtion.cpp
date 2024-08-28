#include <bits/stdc++.h>
using namespace std;

int calfactorial(int n)  // Return type is added here
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    int fac_nm1 = calfactorial(n - 1);
    int fact = n * fac_nm1;
    return fact;  // Return the correct factorial value
}

int main()
{
    int n;
    cin >> n;

    int ans = calfactorial(n);
    cout << ans;
}
