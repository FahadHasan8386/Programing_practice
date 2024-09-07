///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cout << "Enter the value of N : " ;
    cin >> n;

    vector<bool>isPrime(n+1 ,true);
    vector<int>vec;

    for(int i = 2 ; i < n ;++i)
    {
        if(isPrime[i] == true )
        {
            vec.push_back(i);
            for(int j = i + i ; j < n ;j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    cout << "Prime number up to " << n << " : ";

    for(int prime : vec)
    {
        cout << prime << " ";
    }
    cout << "\n";
}
