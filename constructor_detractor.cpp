#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;
    Demo obj;
    cout << "Object in use." << endl;
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}