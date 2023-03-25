#include <iostream>
using namespace std;
class parent{
public:
    int x;
    void pfx(){
        cout<<"enter the value of x";
        cin>>x;
    }
};
class child : public parent {
public:
    int y;
    void cfx() {
        cout << "enter the value of y";
        cin >> y;
    }
    void display() const {
        cout <<x + y;
    }
};

int main() {
    child obj{};
    obj.pfx();
    obj.cfx();
    obj.display();
    return 0;
}