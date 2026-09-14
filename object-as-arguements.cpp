#include <iostream>
using namespace std;
class Complexnumber
{
    int a;
    int b;

public:
    void setdata(int num1, int num2)
    {
        a = num1;
        b = num2;
        showdata();
    }
    void showdata()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    static void sum(Complexnumber o1, Complexnumber o2)
    {
        int c, d;
        c = o1.a + o2.a;
        d = o1.b + o2.b;
        cout << "Your sum is : " << c << " + " << d << "i" << endl;
    }
};
int main()
{
    Complexnumber obj1, obj2;
    int num1, num2;
    cout << "Enter your Re number :" << endl;
    cin >> num1;
    cout << "Enter your img number :" << endl;
    cin >> num2;
    obj1.setdata(num1, num2);
    cout << "Enter your Re number :" << endl;
    cin >> num1;
    cout << "Enter your img number :" << endl;
    cin >> num2;
    obj2.setdata(num1, num2);
    Complexnumber ::sum(obj1, obj2);
    return 0;
}