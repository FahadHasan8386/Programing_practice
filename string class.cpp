#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string name1 = "Fahad";
    string name2 = "Hasan";
    string name3 ;

    name3 = name1;
        cout << "name3 :"<< name3 << endl;

    name3 = name1+name2;
        cout << "Name1+Name2 ="<< name3 << endl;

    int len = name3.size();
        cout << "String of length ="<< len << endl;
}
