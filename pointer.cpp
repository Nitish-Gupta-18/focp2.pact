// #include <iostream>
// using namespace std;
// void swap(int* x, int* y)
// {

//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int x;
//     cout << "enter x";
//     cin >> x;
//     int y;
//     cout << "enter y";
//     cin >> y;

//     swap(&x, &y);
//     cout << x << y << endl;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// #include <iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout << "enter x";
//     cin >> x;

//     int *ptr = &x;
//     cout << x << endl;

//     *ptr = 10;
//     cout << x << endl;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


#include <iostream>
using namespace std;
int max(int a , int b)
{
   
    if (a>b)
    return a;
    else
     return b;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;  

    cout << "Maximum: " << max(a, b) << endl; 

    return 0;
}