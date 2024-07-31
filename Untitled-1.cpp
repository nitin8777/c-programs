#include <iostream>
using namespace std;

class nitin
{
private:
    int a = 2, b = 23;

public:
    int c = 43, d = 12;
    void setdata();
};
class nitin::setdata(int a1,int b1)
{
    a=a1;
    b=b1;
    cout << a << endl;
    cout << b << endl;
}
int main()
{
    class nitin h;
    h.setdata();
    cout << h.c << endl;
    cout << h.d << endl;

    return 0;
}