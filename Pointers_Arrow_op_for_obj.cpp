#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    void setdata(int x, int y){
        a = x;
        b = y;
    }
    void getdata(){
        cout<<a<<"+"<<b<<"i";
    }
};
int main() {
    Complex c1;
    Complex *ptr = &c1;
    // //* derefernce operator
    // (*ptr).setdata(1,2);
    // (*ptr).getdata();
    // ARROW OPERATOR (->)
    ptr->setdata(1,2);
    ptr->getdata();
    return 0;
}