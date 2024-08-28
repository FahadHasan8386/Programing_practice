///In the name of Allah

#include <bits/stdc++.h>
using namespace std ;

int binarysearch(int arr[] ,int left ,int right ,int num)
{
    while(left <= right)
    {
        int mid = left + (right - left) /2;

        if(arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] < num)
        {
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
}

int main ()
{
    int num;
    int arr[10];
    int output;

    cout <<"Enter 10 integers in acending number :" <<endl;
    for(int i = 1 ; i <= 10 ;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number that you want to search in the array : " <<endl;
    cin >> num;

    output = binarysearch(arr, 0 , 9 , num);

    if(output == -1)
    {
        cout << "No match found" <<endl;
    }
    else{
        cout << "Match found at index position :" << output <<endl;
    }
 }
