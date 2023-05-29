#include <iostream>
using namespace std;

int main ()
{
    int A [2][3];
        A [0][0] = 20;
        A [0][1] = 130;
        A [0][2] = 103;
        A [1][0] = 133;
        A [1][1] = 103;
        A [1][2] = 102;

            for (int row=0; row<2 ;row++){
                for(int col=0 ;col<3 ;col++){
                    cout << A[row][col] << " ";
                }
                    cout<<endl;
            }
}
