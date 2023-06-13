#include <iostream>
using namespace std;

class student
{
    public:
        int id;
        double cgpa;

        void display()
        {
          cout << id << " " << cgpa <<endl;

        }
};
int main ()
{

    student fahad;
    fahad.id = 2321;
    fahad.cgpa = 3.54;
    fahad.display();

    student ahad;
    ahad.id = 221;
    ahad.cgpa = 3.34;
    ahad.display();

    student rahad;
    rahad.id = 21;
    rahad.cgpa = 3.94;
    rahad.display();
}
