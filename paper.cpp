#include <iostream>
using namespace std;

int main()
{
    int num;

    int arr[10] = {1, 2, 1};

    cout << "Reversed number: ";
    for (int i = 2; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}
