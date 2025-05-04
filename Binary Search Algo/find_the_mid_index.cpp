///IN the name of Allah
#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int arr []= {1 ,2 ,3 ,4,5 , 6};

    int low = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int high = n-1;

    int target;
    cin >> target;
    bool flag = 0;
    while(low <= high)
    {
        int mid = (low + high ) /2;

        if(arr[mid] == target)
        {
            flag = 1;
            cout << mid << endl;//print index value
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid +1;
        }
        else{
            high = mid -1;
        }

    }
    if(flag == true )cout << "YES" << endl;
    else cout << "NO" << endl;
}
