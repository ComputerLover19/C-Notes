#include <iostream>
using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setdata(int x, float y)
    {
        id = x;
        price = y;
    }
    void getdata()
    {
        cout << "Id : " << id << endl
             << "Price : " << price << endl;
    }
};
int main()
{
    int n, a;
    float b;
    cout << "Enter no of products : ";
    cin >> n;
    Shop *ptr = new Shop[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Enter id : ";
        cin >> a;
        cout << "Enter Price : ";
        cin >> b;
        (ptr + i)->setdata(a, b);
    }
    for (int i = 0; i < n; i++)
    {
        (ptr + i)->getdata();
    }

    return 0;
}