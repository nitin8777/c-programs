#include<iostream>
using namespace std;
class A
{
private:
int a, b;    
public:
    
    A(){
        cout<<"enter the number";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
    }
    A(int x , int y){
        a=x;
        b=y;
        cout<<a<<"  "<<b<<endl;
    }
    A(A &ob){
        a=ob.a;
        b=ob.b;
        cout<<a<<" "<<b;
    }
};
int main()
{
 A obj();
 A obj2(obj);

return 0;
}