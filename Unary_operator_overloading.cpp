#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int value = 0) : x(value) {}

    
    Number operator-() const {
        return Number(-x);
    }

    void display() const {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Number n1(25);

    cout << "Before applying unary -:" << endl;
    n1.display();

    Number n2 = -n1; 

    cout << "After applying unary - (new object):" << endl;
    n2.display();

    cout << "Original object remains:" << endl;
    n1.display();

    return 0;
}
