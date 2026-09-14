#include <iostream>
using namespace std;
class Employee
{
public:
    int salary;
    int id;
    string name;
    Employee(string a, int b, int c)
    {
        name = a;
        id = b;
        salary = c;
    }
    void display()
    {
        cout << "The name is " << name << endl
             << "Id is " << id << endl
             << "Salary is " << salary << endl;
    }
};
// Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }
// Default Visibility mode is Private
// Public visibility mode :
//      1. Public members of Parent become Public members of Child class
//      2. Protected members of Parent become Protected members of Child class
// Private visibility mode :
//      1. Public members of Parent become Private members of Child class
//      2. Protected members of Parent become Private members of Child class
// NOTE : Private members can never inherit from base class
class Programmer : public Employee
{
public:
    string language = "Java";
    Programmer(string a, int b, int c) : Employee(a, b, c)
    {
    }
    void display()
    {
        cout << "The name is " << name << endl
             << "Id is " << id << endl
             << "Salary is " << salary << endl
             <<"Language is "<<language<<endl;
    }
};
int main()
{
    Employee amna("Amna", 1, 100), abdullah("abdullah", 2, 1200);
    // amna.display();
    Programmer ayesha("Ayesha", 3, 2000);
    ayesha.display();
    return 0;
};
