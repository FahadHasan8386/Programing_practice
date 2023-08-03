#include <iostream>
using namespace std;
int main ()
{
    int password ;
    string name [10];
        cout << "Your Name :"  << endl;
        cin >> name[0];
    int id ;
        cout << "Your id :"  << endl;
        cin >> id ;
        cout << "What is your password :"<<endl;
        cin >> password;

    if (password == 1234)
    {
        cout <<"Login Sucecful" << endl;
    }
    else {
        cout <<"Cannot login" << endl;
    }

}
