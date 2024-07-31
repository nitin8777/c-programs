#include <iostream>
#include<string>
using namespace std;
int main()
{
    
    int a;
    cout << "enter the value of a";
    cin >> a;
    try
    {
        if (a == 0)
        {
            throw(a);
        }
        if (a == 1)
            throw(12.3);
        if (a == 2)
            throw('E');
    }
    catch (...)
    {
        cout << "error" << a;
    }
    return 0;
}