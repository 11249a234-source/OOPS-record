#include <iostream>
#include <string>

class Student {
    std::string name;
    double height;
public:
    Student(const std::string& n = "", double h = 0.0) : name(n), height(h) {}

    friend std::ostream& operator<<(std::ostream& os, const Student& s) {
        os << s.name << " (" << s.height << " cm)";
        return os;
    }

    friend bool operator==(const Student& a, const Student& b) { return a.height == b.height; }
    friend bool operator!=(const Student& a, const Student& b) { return !(a == b); }
    friend bool operator<(const Student& a, const Student& b) { return a.height < b.height; }
    friend bool operator>(const Student& a, const Student& b) { return b < a; }
    friend bool operator<=(const Student& a, const Student& b) { return !(b < a); }
    friend bool operator>=(const Student& a, const Student& b) { return !(a < b); }
};

int main() {
    Student s1("Alice", 165.5);
    Student s2("Bob",   172.0);
    Student s3("Carol", 165.5);

    std::cout << "Students:\n";
    std::cout << s1 << '\n' << s2 << '\n' << s3 << "\n\n";

    std::cout << std::boolalpha;
    std::cout << s1 << " == " << s3 << " : " << (s1 == s3) << '\n';
    std::cout << s1 << " != " << s2 << " : " << (s1 != s2) << '\n';
    std::cout << s1 << " <  " << s2 << " : " << (s1 <  s2) << '\n';
    std::cout << s2 << " >  " << s3 << " : " << (s2 >  s3) << '\n';
    std::cout << s1 << " <= " << s3 << " : " << (s1 <= s3) << '\n';
    std::cout << s2 << " >= " << s1 << " : " << (s2 >= s1) << '\n';
    return 0;
}