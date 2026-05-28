#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    int speed;
    void show(){
        cout<<"Brnad:"<<brand<<endl;
        cout<<"speed:"<<speed<<endl;
    }
};
int main(){
    car c1;
    c1.brand = "bmw";
    c1.speed=200;
    c1.show();
    return 0;
}
