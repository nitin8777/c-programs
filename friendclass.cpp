#include <iostream>
using namespace std;
class A
{
private:
    int a = 10, b = 9;

public:
    friend class B;
};
class B
{
private:
public:
    void show(A ref)
    {
        cout << ref.a << " " << ref.b << endl;
    }
};

int main()
{
    A obj2;
    B obj;
    obj.show(obj2);
    return 0;
}