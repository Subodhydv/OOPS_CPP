#include<iostream>
using namespace std;
class student{
    private:
    int age;
    public:
    student(){
        age=20;
    }
    void show(){
        cout<<"age:"<<age<<endl;
    }
    };
    int main(){
        student s1;
        s1.show();
        return 0;
    }


