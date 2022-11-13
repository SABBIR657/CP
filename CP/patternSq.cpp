#include <iostream>

using namespace std;

int main()
{

    int row;
    int col;

    cout << "row number = ";
    cin >> row;
    cout << "column number= ";
    cin >> col;

    for (int i = 0; i <= row; i++)
    {
        for (int j = 0; j <= col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}