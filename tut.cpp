#include <iostream>
#include <string>
using namespace std;

class nameki
{
    
public:
    string name;
    void getname()
    {
        cout << "enter the name";
        cin >> name;
    }
};
    class age : public nameki
    {
    public:
        int age;
        void getdata()
        {
            cout << "enter the age";
            cin >> age;
        }
    };
    int main()
    {
        age ob;
        ob.getdata();
        ob.getname();
        
    }