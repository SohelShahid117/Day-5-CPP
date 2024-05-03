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
    int r2,c2;
    cout << "enter the row nmbr : ";
    cin>>r2;
    cout << "enter the col nmbr : ";
    cin>>c2;

    for (int i = 1; i <= r2; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            if(i==1 || i == r2){
                    cout << "*";
            }
            else{
                if(j==1 || j==c2){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    //invereted half pyramid
    //7 min
    cout<< "invereted half pyramid";
    return 0;
}
