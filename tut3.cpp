#include <iostream>
using namespace std;
class hlo
{
public:
   virtual void no()
    {
        cout << "class hlo" << endl;
    }
};

class hy : public hlo
{
public:
  void no()
    {
        cout << "class hy";
    }
};

int main()
{
    hy ob;
    hlo*ptr;
    ptr=&ob;
    ptr->no();
    return 0;
}