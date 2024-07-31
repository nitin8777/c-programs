// average of three number
#include <iostream>
using namespace std;

int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    cout << "enter the number";
    cin >> *ptr1;
    cout << "enter the number";
    cin >> *ptr2;
    cout << "enter the number";
    cin >> *ptr3;
    delete ptr1;
    delete ptr2;
    delete ptr3;

    int c = (*ptr1 + *ptr2 + *ptr3) / 3;
    cout << "average is :" << c;
    return 0;
}