#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    void sum(Complex o1, Complex o2);
};
class Complex
{
    int a, b;
    friend void Calculator :: sum(Complex, Complex);
public:
    void setnumbers(int x, int y)
    {
        a = x;
        b = y;
        cout << a << " + " << b << "i"<<endl;;
    }
};
void Calculator ::sum(Complex o1, Complex o2)
{
    int x = o1.a + o2.a;
    int y = o1.b + o2.b;
    cout <<x<< " + " <<y<< "i"<<endl;
};
int main()
{
    Complex num1, num2;
    num1.setnumbers(2,4);
    num2.setnumbers(2,8);
    Calculator serv;
    serv.sum(num1,num2);
    return 0;
}