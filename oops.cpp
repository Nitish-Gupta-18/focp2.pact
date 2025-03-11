// #include <iostream>
// #include <string> 
// using namespace std;
// class Employee{
// public:
//     int E_id;
//     string name;
//     int base_salary,travel_allowance,dearness_allowance;
//     int monthly,annual;
//     void input(){
//         cout << "Provide Employ Id";
//         cin >> E_id;
//         cin.ignore();
//         cout << "Enter Name: ";
//         getline(cin, name);
//         cout << "Base Salary";
//         cin>>base_salary;
//         cout<<"Dearness Allowance";
//         cin>>dearness_allowance;
//         cout<<"Travel Allowance";
//         cin>>travel_allowance;
//     }
//     void calculation(){
//         monthly=base_salary+dearness_allowance+travel_allowance;
//         annual=monthly*12;
//     }
//     void display(){
//         cout << "\nEmp_Id: " <<E_id;
//         cout << "\nName: " << name;
//         cout << "\nMonthly Salary "<<monthly;
//         cout << "\nAnnualy Salary "<<annual;
//         cout << endl;
//     }
// };
// int main(){
//     Employee e;
//     e.input();
//     e.calculation();
//     e.display();
//     return 0;
// }

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~



#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    int roll_no;
    string name;
    int marks[5];
    void input(){
        cout << "Provide Roll no: ";
        cin >> roll_no;
        cin.ignore();
        
        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter 5 marks: ";
        for (int i = 0; i < 5; i++){
            cin >> marks[i];
        }
    }
    void display(){
        cout << "\nRoll No: " << roll_no;
        cout << "\nName: " << name;
        cout << "\nMarks: ";
        for (int i = 0; i < 5; i++){
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    Student s;
    s.input();
    s.display();
    return 0;
}
