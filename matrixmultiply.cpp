#include <iostream>
using namespace std;
int a[10][10],  r1, c1,i, j, k;
void output(){
           cout << "Output Matrix: " << endl;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1;j++)
        { 
            cout << a[j][i] << "\t";
        }
        cout << endl;
    }

}
int main()
{

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout<< "Enter elements of matrix 1:" << endl;
    for (i = 0; i < r1;i++)
        for (j = 0; j < c1;j++)
        {
            cin >> a[i][j];
        }
        output();
    return 0;
}  