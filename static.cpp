#include <iostream>
using namespace std;
class A
{
private:
    int a;
    static int b;

public:
    void input(int x, int y)
    {
        a = x;
        b = y;
    }
    void out()
    {
        cout << a << "___" << b << endl;
    }
};
int A::b = 0;
int main()
{
    A ob, obj, obj3;
    ob.input(10, 5);
    obj.input(4, 7);
    obj3.input(1, 9);
    ob.out();
    obj.out();
    obj3.out();
    return 0;
}