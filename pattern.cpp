#include <iostream>
using namespace std;
int main()
{
    // 4.1 Awesome Pattern Questions -1 | Guaranteed Placement Course

    // cout << "hello world";
    // rectangle pattern
    cout << "rectangle pattern\n";
    int r, c;
    cout << "enter the row nmbr : ";
    cin >> r;
    cout << endl;
    cout << "enter the col nmbr : ";
    cin >> c;
    cout << endl;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 4 min
    cout << "hollow rectangle pattern\n";

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    //
    return 0;
}