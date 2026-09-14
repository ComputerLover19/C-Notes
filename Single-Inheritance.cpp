#include <iostream>
using namespace std;
class Base
{
private:
    int data1;

public:
    int data2;
    int data3;
    void setdata();
    int getdata();
};
void Base ::setdata(void)
{
    data1 = 20;
    data2 = 30;
};
// As private members are not inheritable but we can acess data1 using getdata()
int Base ::getdata()
{
    return data1;
};
class Derived : public Base
{
public:
    void process();
    void display();
};
void Derived ::process()
{
    data3 = getdata() + data2;
};
void Derived ::display()
{
    cout << "The Sum is : " << data3 << endl;
};
int main()
{
    Derived a;
    a.setdata();
    a.process();
    a.display();
    return 0;
}