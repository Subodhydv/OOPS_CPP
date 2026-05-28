#include<iostream>
using namespace std;
class BankAccount{
    private:
    int balance =0;
    public:
    string name;
    void deposit(int amount ){
        balance+=amount;
    }
    void withdraw(int amount){
        balance-=amount;
    }
     void show(){
        cout<<"balace:"<<balance<<endl;
        cout<<"name:"<<name<<endl;
     }
    };
    int main(){
    BankAccount b1;
    b1.deposit(1000);
    b1.withdraw(500);
    b1.name="subodh";
    b1.show();
    return 0;
    }
