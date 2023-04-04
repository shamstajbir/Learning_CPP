#include <iostream>
using namespace std;
class Student
{
public:
    int uid;
    string name;
    void in()
    { cout << "Enter uid: ";
        cin >> uid;
        cout << "Enter name: ";
        cin >> name; } };
class subjects : virtual public Student
{
public:
    float m1;
    void inn()
    { cout << "Enter marks in 5 subjects(out of 500): ";
        cin >> m1; } };
class sports : virtual public Student
{
public:
    int m2;
    void innn()
    {cout << "Enter marks in sports: ";
        cin >> m2; }};
class result : public subjects, public sports
{
public:
    void out()
    { cout << endl
           << "uid: " << uid << endl
           << "Name: " << name << endl
           << "Academic Marks: " << m1/5 << endl
           << "Sports marks: " << m2 << endl
           << "Final Result(out of 100): " << float(((m1/5) + m2)) / 2.00; }};
int main()
{ result a;
    a.in();
    a.inn();
    a.innn();
    a.out();
}