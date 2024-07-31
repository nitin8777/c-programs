// overloading & over raiding
#include <iostream>
using namespace std;
class A
{
public:
  virtual  void hi()
    {
        cout <<"class A"<< endl;
    }
};
class B : public A
{
    public:
    void hi()
    {
        cout <<"class B"<< endl;
    }
};
int main()
{
    A *ptr;
    B ob;
    ptr=&ob;
    ptr->hi();
    return 0;
}