///In the name of Allah

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int target = 8;

    int arr[7] = {1, 2, 3, 5,7, 7,9};
    int left = 0;
    int right = 6;

    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum == target )
        {
            cout << "Pair : " <<arr[left] << "+" <<arr[right] << " = " <<target << endl;
            left++;
            right--;
        }
        else if(target > sum)
        {
            left++;
        }else{
            right--;
        }
    }
    return 0;
}
