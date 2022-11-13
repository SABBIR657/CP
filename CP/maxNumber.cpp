#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 30;
    int c = 20;

    if (a > b)
    {
        if (a > c)
        {

            cout << "maximum value: " << a;
        }
        else
        {
            cout << "minimum value";
        }
    }
    else if (b > c)
    {
        if (b > a)
        {
            cout << "maximum value: " << b;
        }
        else
        {
            cout << "minimum value";
        }
    }
    else
    {
        cout << "maximum value: " << c;
    }
}