#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;
    int sum = 0;
    int realNumber = n;

    // int lastdigit;

    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3);
        n = n / 10;
    }
    if (sum == realNumber)
    {
        cout << "armstrong number";
    }
    else
    {
        cout << "not  armstrong";
    }
}