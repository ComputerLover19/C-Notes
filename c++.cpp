#include <iostream>
using namespace::std;

int main(){
    int a;
    cin>>a;
    for (int i = 1; i < a;)
    {
        static int a= 1+i;
        a++;
        cout<<a<<endl;
    }
    
}
