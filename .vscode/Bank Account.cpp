#include<iostream>
using namespace std;

class BankAccount
{
private:
    int balance;

public:
    BankAccount()
    {
        balance = 0;
    }

    BankAccount(int b)
    {
        balance = b;
    }

    void show()
    {
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;
    BankAccount b2(5000);

    b1.show();
    b2.show();
}