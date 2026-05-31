#include<iostream>
using namespace std;
class rect{
    public:
    int length;
    int breadth;
    rect(int l, int b){
        length=l;
        breadth=b;
    
    } 
    void area(){
       cout<<length*breadth<<endl;

    }


    };
    int main() {
        rect r1(10,20);
        r1.area();

        return 0;
    }

