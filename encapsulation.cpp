#include <iostream>
using namespace std;

class student
{
    private :
        string name ;
        int id;

    public:
        void setname (string x)
        {
            name = x;
        }


        string getname ()
        {
            return name;
        }
};


int main ()
{
    student s1;
    s1.setname ("Fahad");
    //s1.id (222);
    cout << s1.getname();
}
