#include <iostream>

using namespace std;

int main()
{
   char c[100];
    cout << "Enter a string: ";
    cin.getline(c,100);
    cout << c << endl;
     
    int i = 0;
    while (c[i] != '\0')
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 32;
        }
        else if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = c[i] + 32;
        }
        i++;
    }
    cout << c;
    return 0;
}