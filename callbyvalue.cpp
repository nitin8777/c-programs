#include<iostream>
using namespace std;
void nitin(int a){
    a++;
    cout<<"in function"<<a<<endl;
}
int main()
{
int b=10;
cout<<"b is "<<b<<endl;
nitin(b);
cout<<"b is "<<b<<endl;
return 0;
}