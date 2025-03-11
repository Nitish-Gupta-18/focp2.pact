// #include <iostream>
// #include <cmath>
// using namespace std;
//  int main ()

//  {
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     cout<<sqrt(n);
//  }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout << "enter x";
//     cin >> x;
//     int y;
//     cout << "enter y";
//     cin >> y;

//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
//     cout << x << y << endl;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using namespace std;
void swap(int &x, int &y)
{

    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x;
    cout << "enter x";
    cin >> x;
    int y;
    cout << "enter y";
    cin >> y;

    swap(x, y);
    cout << x << y << endl;
}