#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, num5;


    cout << "Enter five numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    int numbers[] = {num1, num2, num3, num4, num5};


    int maxNum = numbers[0];
    int secondMax = INT_MIN;
    int thirdMax = INT_MIN;

    for (int i = 1; i < 5; ++i) {

        if (numbers[i] > maxNum) {

            thirdMax = secondMax;
            secondMax = maxNum;
            maxNum = numbers[i];
        } else if (numbers[i] > secondMax) {

            thirdMax = secondMax;
            secondMax = numbers[i];
        } else if (numbers[i] > thirdMax) {

            thirdMax = numbers[i];
        }
    }

    cout << "The third largest number is: " << thirdMax << endl;

    return 0;
}
