#include <iostream>
using namespace std;

class student
{
    public:
        int id;
        double cgpa;
void display ()
{
    cout << id << " " << cgpa << endl;
}
void setvalue (int x ,double y)
{
    id = x;
    cgpa = y;
}
};
int main()
{
    student fahad,rahat;
    fahad.setvalue(22,3.44);
    fahad.display();

    rahat.setvalue(123,3.56);
    rahat.display();


}
