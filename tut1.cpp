#include <iostream>
using namespace std;

class A
{
protected:
    int a;

public:
    void ni()
    {
        cout << "enter the no.";
        cin >> a;
    }
};
class b : public A
{
public:
    void nit()
    {
        cout << "enter the no.";
        cin >> a;
    }
};

int main()
{

    return 0;
}