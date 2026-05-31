#include<iostream>
using namespace std;

class Student
{
private:
    int age;

public:
    Student()
    {
        age = 18;
    }

    Student(int a)
    {
        age = a;
    }

    void show()
    {
        cout << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2(25);

    s1.show();
    s2.show();
}