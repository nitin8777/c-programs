#include <iostream>
using namespace std;

class nitin
{
private:
    int a = 2, b = 23;

public:
    int c = 43, d = 12;
    void setdata(int c, int d);
};
class nitin::setdata(int c, int d)
{
    a = c;
    b = d;
    cout << a << endl;
    cout << b << endl;
}
int main()
{
    nitin h;
    h.setdata();
    cout << h.c << endl;
    cout << h.d << endl;

    return 0;
}
