#include<iostream>
using namespace std;
class student{
    public:
    student(){
        cout<<"constructor"<<endl;
    }
    ~student(){
        cout<<"destructor"<<endl;
    }
};
int main(){
    student s1;
    student s2;
    return 0;
}