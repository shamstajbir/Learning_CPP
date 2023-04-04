//5.1
#include <iostream>
using namespace std;
class Teacher
{
public:
    string tid;
    string name;
    string pub;
    void get1()
    {
        cout << "Enter Tacher code: ";
        cin >> tid;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter publication: ";
        cin >> pub;
    }
};
class Officer
{
public:
    string ocode;
    string oname;
    string grade;
    void get2()
    {
        cout << "Enter officer code : ";
        cin >> ocode;
        cout << "Enter officer name : ";
        cin >> oname;
        cout << "Enter grade : ";
        cin >> grade;
    }
};
class Typist
{
public:
    string tcode;
    string tname;
    int wage;
    void get3()
    {
        cout << "Enter Typist Code: ";
        cin >> tcode;
        cout << "Enter typist name: ";
        cin >> tname;
        cout << "Enter wage: ";
        cin >> wage;
    }
};
class show : public Teacher, public Officer, public Typist
{
public:
    void put()
    {
        cout << endl
             << "Teacher's details are: " << endl
             << tid << endl
             << name << endl
             << pub << endl
             << endl
             << "Details of officer are :" << ocode << endl
             << oname << endl
             << grade << endl
             << endl
             << "Details of typist are :" << endl
             << tcode << endl
             << tname << endl
             << wage;
    }
};
int main()
{
    show s;
    s.get1();
    s.get2();
    s.get3();
    s.put();
}