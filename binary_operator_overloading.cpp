#include <iostream>
#include <string>

class MyString {
    std::string s;
public:
    MyString(const std::string& str = "") : s(str) {}
    MyString& operator+=(const MyString& rhs) { s += rhs.s; return *this; }
    friend MyString operator+(MyString lhs, const MyString& rhs) { lhs += rhs; return lhs; }
    friend std::ostream& operator<<(std::ostream& os, const MyString& ms) { os << ms.s; return os; }
};

int main() {
    MyString a("Hello, ");
    MyString b("World!");
    MyString c = a + b;
    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';
    std::cout << "c = a + b -> " << c << '\n';

    a += MyString(" Have a nice day.");
    std::cout << "a after += -> " << a << '\n';

    MyString d = a + b + MyString(" :)");
    std::cout << "d = a + b + \":)\" -> " << d << '\n';
    return 0;
}