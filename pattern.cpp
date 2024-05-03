#include <iostream>
using namespace std;
//4.1 Awesome Pattern Questions -1
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
    cout<< "invereted half pyramid\n";
    //int r3,c3;
    int c3;
    //cout << "enter the row nmbr : ";
    //cin>>r3;
    cout << "enter the col nmbr : ";
    cin>>c3;
    //c3==r3;
    for(int i = 1;i<=c3;i++){
        for (int j= i;j<=c3;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<< "half pyramid after 180 deg rotation\n";
    int n;
    cout << "enter a nmbr : ";
    cin>>n;

     for(int i = 1;i<=n;i++){
        for (int j= n;j>=1;j--){
                if(j>i){
                    //cout << "-";
                    cout << " ";
                }
                else{
                    //cout<<"*"<<" ";
                    cout<<"*";
                }
        }
        cout<<endl;
    }

    cout<< "half pyramid using numbers\n";
    int n2;
    cout << "enter a nmbr for half pyramid: ";
    cin>>n2;
    for(int i = 1;i<=n2;i++){
        for (int j= 1;j<=i;j++){
                cout << i<<" ";
        }
        cout<<endl;
    }

    cout<< "floyds triangle\n";
    //16 min
    int k =1 ;
     for(int i = 1;i<=5;i++){
        for (int j= 1;j<=i;j++){
                cout <<k<<" ";
                k++;
        }

        cout<<endl;
    }

    cout<< "butterFly pattern\n";
      for(int i = 1;i<=4;i++){
        for (int j= 1;j<=8;j++){
                if(j<=i || j>8-i){
                        cout<< "*";
                }
                else{
                    cout<< " ";
                }
        }
        cout<<endl;
      }

    for(int i=4;i>=1;i--){
        for (int j= 1;j<=8;j++){
                if(j<=i || j>8-i){
                        cout<< "*";
                }
                else{
                    cout<< " ";
                }
        }
        cout<<endl;
      }

    cout<< "butterFly pattern again\n";
    int n3;
    cout << "enter a nmbr for butterfly pattern : ";
    cin>>n3;
    for(int i=1;i<=n3;i++){
        for(int j =1;j<=i;j++){
            cout << "*";
        }
        int space = 2*n3-2*i;
        for(int k =1;k<=space;k++){
            cout << " ";
        }
          for(int j =1;j<=i;j++){
            cout << "*";
        }
        cout<<endl;
    }
     for(int i=n3;i>=1;i--){
        for(int j =1;j<=i;j++){
            cout << "*";
        }
        int space = 2*n3-2*i;
        for(int k =1;k<=space;k++){
            cout << " ";
        }
          for(int j =1;j<=i;j++){
            cout << "*";
        }
        cout<<endl;
    }




    return 0;
}
