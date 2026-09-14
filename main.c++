#include <iostream>
using namespace std;

int main(){
    int y = 23;
    int *ptr = &y;

    cout<<ptr<<endl<<&y<<endl<<&ptr;
}