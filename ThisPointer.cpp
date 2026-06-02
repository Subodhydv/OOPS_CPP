#include<iostream>
using namespace std;

class Student
{
public:

    int age;

    Student(int age)
    {
        this->age = age;
    }

    void show()
    {
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1(20);
    Student s2(30);

    s1.show();
    s2.show();

    return 0;
}