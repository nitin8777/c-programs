//polymorphism is a concept in which an object can be treated in different ways 
// it means that objects of a class can be used as object of their derived class.
#include<iostream>
using namespace std;
void show (){
    cout<<"hlo"<<endl;
}
void show(int a){
    cout<<"in 2nd function "<<a<<endl;
}
void show(string name){
    cout<<"in 3rd function "<<name;
}
int main()
{
show();
show(23);
show("nitin"); 
return 0;
}