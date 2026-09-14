#include <iostream>
using namespace std; // Removed the unnecessary "::"

class Company {
    int id;
    int salary; // Note: This is declared but never used
    static int count;

public:
    void setdata() {
        salary = 1200;
        cout << "Enter employee id: " << endl;
        cin >> id;
        count++;
    } // Removed unnecessary semicolon

    void givedata() {
        cout << "The id of employee is : " << id << endl;
        cout << "The total employees : " << count << endl;
    } // Removed unnecessary semicolon
};

// Initialize static member variable (defaults to 0)
int Company::count;

int main() {
    // Array of 3 Company objects
    Company fb[3];
    
    
    for (int i = 0; i < 3; i++) {
        fb[i].setdata();
        fb[i].givedata();
    }

    return 0;
}