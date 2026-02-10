#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;

    Student(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
    void hello()
    {
        cout << "hello from " << name<< endl;
    }
};

int main()
{

    Student shakib("A.H Shakib", 10);
    shakib.hello();
    Student Rakib("Rakib Raj", 20);
    Rakib.hello();

    return 0;
}