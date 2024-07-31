//divide error
#include <iostream>
using namespace std;

int main()
{
    try
    {
    int a=10,b=0;
    
    if (b==0)
    {
        throw runtime_error("denominator not b zero");
    }
    int c=a/b;
    cout<<"divide is "<<c<<endl;    
    }
    catch(exception& e)
    {
        cout <<"exception"<< e.what() << '\n';
    }
    
    return 0;
}