#include <iostream>
using namespace std;

int main ()
{
    int mark;
        cout << "Mark = " << endl;
        cin >> mark;
    if (mark >= 80){
        cout << "A+";
    }
    //nested if
    else if (mark >= 70){
        cout << "A";
    }
    else if (mark >= 60){
        cout << "B";
    }
    else if (mark >= 50){
        cout << "C";
    }
    else {
        cout << "Better luck next time ";
    }
}
