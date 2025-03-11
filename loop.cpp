// #include<iostream>
//  using namespace std;
// int main(){
// int n;
// cout<<"enter n";
// cin>>n;
//  for (int i=1 ; i<=2*n-1 ; i+=2)
//  {
//     cout<<i<<" ";
//  }
//  return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    bool flag = true; // true means prime
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = false; //

            break; // to get out of the loop}
        }
    }
    if (flag == true)
        cout << "Prime";
    else
        cout << "Composite";
}
