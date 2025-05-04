/// IN the name of Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 4, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1;

    int target;
    cin >> target;

    int inx = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            inx = mid;          // mark it as a candidate
            low = mid + 1;     // keep searching right for last occurrence
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (inx != -1)
    {
        cout << "last occurrence at index: " << inx << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}
