#include<iostream>
using namespace std;
class A
{
private:
    
public:
    A(){
        cout<<"constructor"<<endl;
    }
    ~A(){
        cout<<"distructor";
    }
};

int main()
{
A ob;
ob.A::A();
return 0;
}