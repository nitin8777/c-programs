#include<iostream>
using namespace std;
int fun(int a){
    if(a==0){
        return 1;
    }
  return a*(fun(a-1));
}
int main()
{
    int b;
printf("enter the number");
cin>>b;
cout<<fun(b);
return 0;
}