#include <iostream>
using namespace std;

class student
{
    public:
        int id ;
        double cgpa;
     void display()
     {
         cout << id << " " << cgpa <<endl;
     }
     student(int x ,double y)
     {
         x = id;
         y = cgpa;
     }
     student()
     {
         cout << "Default constructor" << endl;
     }
};
int main ()
{
    student ob;

    student fahad(22,3.66);
    fahad.display();

}
