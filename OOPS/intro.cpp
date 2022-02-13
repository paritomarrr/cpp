#include <iostream>
using namespace std;
class Student
{
public:
    char name[100] = "Pari";
    int age = 19;
    char course[100] = "Btech";
};
int main()
{
    Student Pari;
    cout << "Name is " << Pari.name << endl;
    cout << "Age is " << Pari.age << endl;
    return 0;
}