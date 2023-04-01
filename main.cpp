//5.3
#include <iostream>
using namespace std;
class alpha {
public:
    alpha(int a) {
        cout << "Constructing alpha class." << endl;
        x = a;
    }
    void printX() {
        cout << "Value of x in alpha class: " << x << endl;
    }
private:
    int x;
};

class beta {
public:
    beta(float b) {
        cout << "Constructing beta class." << endl;
        y = b;
    }
    void printY() {
        cout << "Value of y in beta class: " << y << endl;
    }
private:
    float y;
};

class gamma : public alpha, public beta {
public:
    gamma(int a, float b, int c, float d) : alpha(a), beta(b) {
        cout << "Constructing gamma class." << endl;
        m = c;
        n = d;
    }
    void printM() {
        cout << "Value of m in gamma class: " << m << endl;
    }
    void printN() {
        cout << "Value of n in gamma class: " << n << endl;
    }
private:
    int m;
    float n;
};

int main() {
    gamma obj(1, 2.5, 3, 4.5);

    obj.printX();
    obj.printY();
    obj.printM();
    obj.printN();

    return 0;
}
