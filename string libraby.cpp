#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char name1[] = "Fahad ";
    int len = strlen (name1) ;
            cout << "Length of string = "<<len <<endl;

    char name2[12];
        strcpy(name2,name1);
            cout << "Name : "<<name2<<endl;

    char name3[] = "Hasan";
        strcat(name1,name3);
            cout << "Full name : "<< name1 <<endl;
}
