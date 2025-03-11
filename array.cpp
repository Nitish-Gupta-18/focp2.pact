

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// #include <iostream>
// using namespace std;
// int main ()
// {
//     int arr[]={2,4,234,4,3,4};
//     int n = sizeof(arr)/4;
//     int sum = 0;
//     for (int i = 0 ; i<n ; i++)
// {
//     sum = sum + arr[i];

// }
// cout<<sum;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {-34, -14, -14, -12, -3};
//     int n = sizeof(arr) / 4;
//     int mx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, arr[i]);
//     }
//     cout << mx; // cout<<INT_MIN:
// }
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {-34, -14, -14, -12, -3};
//     int n = sizeof(arr) / 4;
//     int mx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx, arr[i]);
//     }
//     int smx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//        if(arr[i]!=mx) smx = max(mx, arr[i]);
//     }
//     cout<<smx;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,3,23,24};
    int n = sizeof(arr) / 4;
    int b[n];
    for (int i=0 ; i<n;i++)
    {
      b[i]= arr[n-1-i];
      cout<<b[i]<<" ";

    }
}