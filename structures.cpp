#include <iostream>
using namespace std;
int swap(int a, int b){
   int c = a + b;
   a = c - a;
   b = c- b;
   cout<<"The value of a = "<< a<<endl<<"address of a is "<<&a;
   cout<<"The value of b = "<< b<<endl<<"address of b is "<<&b;
};
int main(){
    swap(4,5);

}
    