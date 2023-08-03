#include <iostream>
using namespace std;
int main ()
{
    int currentyear  ,currentmonth ,currentday;
    int birthyear ,birthmonth ,birthday ;
    int ageyear ,agemonth ,ageday;
        cout << "Please enter current year : ";
        cin >> currentyear;
        cout << "Please enter current month : ";
        cin >> currentmonth;
        cout << "Please enter current day : ";
        cin >> currentday;

        cout << "Please enter birth year : ";
        cin >> birthyear;
        cout << "Please enter birth month : ";
        cin >> birthmonth;
        cout << "Please enter birth day : ";
        cin >> birthday;


        cout << "..........calculate your age.........." << endl;

    ageyear = currentyear - birthyear;
        if (birthmonth <= currentmonth)
        {
            agemonth = currentmonth - birthmonth;
        }
        else if (currentmonth < birthmonth)
        {
           ageyear = ageyear - 1;
           birthmonth = 12 - birthmonth;
           agemonth = currentmonth + birthmonth;
        }
        if (birthday <= currentday)
        {
            ageday = currentday - birthday;
        }
        else if (currentday < birthday)
        {
           agemonth = agemonth - 1;
           birthday = birthday - 30;
           ageday = currentday - birthday;
        }
        cout << "you are "<< ageyear << " years " << agemonth << " months " << ageday << "days old";

}
