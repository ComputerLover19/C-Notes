#include <iostream>
using namespace ::std;
class Employee
{
private:
    int id, balance;

public:
    string name;
    string role;
    int setprvtvar(int a, int b)
    {
        id = a;
        balance = b;
    };
    int print()
    {
        cout << "The balance is : " << balance << endl
             << "The id is : " << id << endl;
    };
};
int main()
{
    Employee abdullah;
    abdullah.name = "Abdullah";
    Employee ayesha;
    abdullah.name = "Ayesha";
    abdullah.setprvtvar(14, 4000);
    ayesha.setprvtvar(12, 69999);
    abdullah.print();
    ayesha.print();
    // Memory allocation for objects
    cout << &abdullah << endl;
    cout << &abdullah.name;
    return 0;
}
