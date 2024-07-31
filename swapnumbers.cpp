#include<iostream>
using namespace std;
class swapnumbers
{
private:
    int a,b,c;
public:
    void input(){
        cout<<"enter the no. to swap"<<endl;
        cin>>a>>b;
    }
    void swap(){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void display(){
        cout<<"after swaping"<<endl;
        cout<<"a = "<<a<<"\t"<<"b = "<<b;
    }
};
int main()
{
swapnumbers b;
b.input();
b.swap();
b.display();
return 0;
}