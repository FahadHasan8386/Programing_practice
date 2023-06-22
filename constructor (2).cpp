#include <iostream>
using namespace std;
class student
{
public:
    int addmissionFee;

    student (int x)
    {
        addmissionFee = x;
        cout << "Addmission Fee = "<< x <<endl;
    }
};
int main ()
{
    student s1 (12000);
}
