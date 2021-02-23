#include <iostream>
using namespace std;
class Account
{
public:
    int accNo;
    float balance;

public:
    void displayInfo()
    {
        cout << "Account Number " << accNo << endl;
        cout << "Account balance " << balance << endl;
    }
};
int main()
{
    Account muddasir;
    muddasir.accNo = 101;
    muddasir.balance = 100000.01;
    muddasir.displayInfo();
    Account aiman;
    aiman.accNo = 102;
    aiman.balance = 500000;
    aiman.displayInfo();
    return 0;
}