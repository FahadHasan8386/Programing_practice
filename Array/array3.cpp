#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int mimo[10] = {32,4,5,12,5,54,6,23,3,5};
    int n;
        cout << "Enter the number to be searched: " <<endl;
        cin >> n;
    for(int i = 0; i < 10; i++){
	    if (n == mimo[i]){
	    cout << n << " was found in index " << i << " of the array." <<endl;
	    }
    }
}
