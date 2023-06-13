#include <iostream>
using namespace std;

class student
{
    public:
        int id ;
        double cgpa;
};




int main ()
{
    student fahad;
    fahad.id = 2350;
    fahad.cgpa = 3.01;
    cout << fahad.id << " " << fahad.cgpa;

}
