#include<iostream>
using namespace std;
class A
{
private:
   int a; 
public:
    A (int x){
a=x;
cout<<"number is "<<a<<endl;
    }
A(A &ref){
    a=ref.a;
    cout<<"after copying "<<a;
}
};

int main()
{
A ob(43);
A obj(ob);
return 0;
}