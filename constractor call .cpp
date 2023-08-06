#include <iostream>
using namespace std;
class employee{
    public:
    string Name ;
    string Company;
    int Id;

    void introyouself ()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Id - " << Id << endl;
    }
    employee(string name,string company,int id)
    {
        Name = name ;
        Company = company;
        Id = id;
    }
};

int main ()
{
    employee employee1 = employee("Fahad","Youtube",3333);
    employee1.introyouself();
    employee employee2 = employee("Tanvir","Facebook",98876);
    employee2.introyouself();
    employee employee3 = employee("Sadman","Funtube",88336833);
    employee3.introyouself();
    employee employee4 = employee("Ahad","Tube",6633);
    employee4.introyouself();
}
