#include <iostream>

class Complex {
    double re, im;
public:
    Complex(double r = 0.0, double i = 0.0) : re(r), im(i) {}

    Complex& operator+=(const Complex& rhs) {
        re += rhs.re;
        im += rhs.im;
        return *this;
    }

    friend Complex operator+(Complex lhs, const Complex& rhs) {
        lhs += rhs;
        return lhs;
    }

    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.re;
        if (c.im >= 0) os << '+';
        os << c.im << 'i';
        return os;
    }
};

int main() {
    Complex a(2.0, 3.0);
    Complex b(1.0, -4.0);

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    Complex c = a + b;
    std::cout << "c = a + b -> " << c << '\n';

    a += b;
    std::cout << "a after a += b -> " << a << '\n';

    Complex d = a + b + Complex(0, 1);
    std::cout << "d = a + b + (0+1i) -> " << d << '\n';
    return 0;
}