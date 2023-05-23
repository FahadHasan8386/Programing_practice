#include <iostream>
using namespace std;

int main ()
{
    int num;
        cout << "Enter a num :"<< endl;
        cin >> num;
    for (int i=1 ;i<=10 ;i++){
        cout << num << " X "<< i << "=" << (num*i) << endl;
    }
}
