// encapsulation means binding data and methods within a class, providing control over the accessibility
// it prevent external code form directly modifying the internal data of an object.
#include<iostream>
#include<string>
using namespace std;
class A
{
private:
    
    int a;
public:
    string name="nitin";
void no(int x){ 
    a=x;
    cout<<"number is "<<a;
}

};
int main()
{
A obj;
cout<<obj.name<<endl;
obj.no(43);
return 0;
}