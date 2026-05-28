#include<iostream>
using namespace std;
class mobile{
    public:
    string brand;
    int price;
    void display(){
        cout<<"brand:"<<brand<<endl;
        cout<<"price:"<<price<<endl;
    }
};
int main() {
    mobile m1;
    mobile m2;
    m1.brand="iphone";
    m1.price=100000;
    m2.brand="samsung";
    m2.price=999999;
    m1.display();
    m2.display();
    
    return 0;
}

