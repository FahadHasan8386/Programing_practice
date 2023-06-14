#include <iostream>
using namespace std;

class student
{
    public:
        int id;
        double cgpa;

    void display()
    {
        cout << id << " " << cgpa << endl;
    }
    student(int x , double y)
    {
        id = x;
        cgpa = y;
    }
};
int main ()
{
    student fahad (33,3.34);
    fahad.display();

    student rahad (45,3.89);
    rahad.display();
}
