// #include <iostream>
// using namespace std;
// int main()

// {
//     string s;
//     cout<<"enter a string";
//     getline(cin,s);
//     cout<<s;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// #include <iostream>
// using namespace std;
// int main()

// {
//     string s = "jod";

//     cout << s.length();
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// #include <iostream>
// using namespace std;
// int main()

// {
//     string s = "what are you doing";

//     int count = 0;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
//         {
//             count++;
//         }
//     }
//     cout << count;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include <iostream>
using namespace std;
int main()

{
    string s="yo bro";
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    
}