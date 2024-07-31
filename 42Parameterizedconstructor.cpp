#include<iostream>
using namespace std;
class A
{
private:
    int a,b;
public:
A (int x,int y){
    a=x,b=y;
}
A(A &ob){
    a=ob.a;
    b=ob.b;
}
   void show(){
    cout<<a<<" "<<b<<endl;
   } 
};
int main()
{
    A obj(29,8);
    obj.show();
    A obj2=obj;
    obj2.show();

return 0;
}