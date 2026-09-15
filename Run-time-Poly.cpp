#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "Base";
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived";
    }
};
int main()
{
    Derived obj;
    Base *ptr = &obj;
    ptr->show();
    return 0;
}