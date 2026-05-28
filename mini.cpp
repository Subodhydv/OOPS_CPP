#include<iostream>
using namespace std;
class bank{
    private:
    int pin;
    public:
    void set_pin(int p){
        pin =p;

    }
    void showpin(){
        cout<<"pin:"<<pin<<endl;
    }

};
int main(){
    bank b1;
    b1.set_pin(1234);
    b1.showpin();
    return 0;

}