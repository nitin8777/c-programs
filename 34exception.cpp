#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int numerator = 10;
    int denominator = 0;
    int res;
    try
    {
        if (denominator == 0)
        {
            throw "error";
        }
        else
        {
            res = numerator / denominator;
            cout << "Result after division: " << res << endl;
        }
    }
    catch (const char *massage)
    {
        cerr << "Exception " <<massage<< endl;
    }

    return 0;
}