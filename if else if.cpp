#include <iostream>
using namespace std;

int main ()
{
    int num;
        cin >> num;
    if (num > 0){
        cout << "possitive";
    }
    else if (num < 0){
        cout << "negative";
    }
    else if (num == 0){
        cout << "zero";
    }
}
