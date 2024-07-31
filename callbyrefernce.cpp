#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    int &ref = a;
    cout << "number a is " << a << endl;
    ref = ref + 10;
    cout << "number   is " << ref << endl;

    cout << "number a is " << a << endl;
    return 0;
}