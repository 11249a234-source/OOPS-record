// ...existing code...
#include <iostream>

class Number {
    int value;
public:
    Number(int v = 0) : value(v) {}

    // Prefix increment
    Number& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment
    Number operator++(int) {
        Number tmp = *this;
        ++value;
        return tmp;
    }

    // Prefix decrement
    Number& operator--() {
        --value;
        return *this;
    }

    // Postfix decrement
    Number operator--(int) {
        Number tmp = *this;
        --value;
        return tmp;
    }

    int get() const { return value; }

    friend std::ostream& operator<<(std::ostream& os, const Number& n) {
        os << n.value;
        return os;
    }
};

int main() {
    Number a(5);
    std::cout << "Initial a = " << a << '\n';

    std::cout << "Prefix ++a -> " << ++a << " (a = " << a << ")\n";
    std::cout << "Postfix a++ -> " << a++ << " (after call a = " << a << ")\n";

    std::cout << "Prefix --a -> " << --a << " (a = " << a << ")\n";
    std::cout << "Postfix a-- -> " << a-- << " (after call a = " << a << ")\n";

    return 0;
}