#include<iostream>
using namespace std;
class sumit;
class vashu
{protected:
    int a=10;
    friend void nitin(sumit,vashu);
    // {
    //     cout<<r1.a+r2.a;
    // }
};
class sumit
{
    protected:
    int a=20;
    friend void nitin(sumit r1,vashu r2)
    {
        cout<<r1.a+r2.a;
    }
}; 
int main()
{
 sumit obj;
 vashu ob;
 void nitin();
return 0;
}