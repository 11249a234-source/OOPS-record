
#include <iostream>

class Time {
    int h, m, s;
    static int to_seconds(int hh, int mm, int ss) {
        return hh * 3600 + mm * 60 + ss;
    }
public:
    Time(int hh = 0, int mm = 0, int ss = 0) : h(hh), m(mm), s(ss) {
        int total = to_seconds(h, m, s);
        if (total < 0) total = 0;
        h = total / 3600;
        m = (total % 3600) / 60;
        s = total % 60;
    }

    friend std::ostream& operator<<(std::ostream& os, const Time& t) {
        if (t.h < 10) os << '0';
        os << t.h << ':';
        if (t.m < 10) os << '0';
        os << t.m << ':';
        if (t.s < 10) os << '0';
        os << t.s;
        return os;
    }

    friend bool operator==(const Time& a, const Time& b) {
        return to_seconds(a.h, a.m, a.s) == to_seconds(b.h, b.m, b.s);
    }
    friend bool operator<(const Time& a, const Time& b) {
        return to_seconds(a.h, a.m, a.s) < to_seconds(b.h, b.m, b.s);
    }
    friend bool operator!=(const Time& a, const Time& b) { return !(a == b); }
    friend bool operator>(const Time& a, const Time& b) { return b < a; }
    friend bool operator<=(const Time& a, const Time& b) { return !(b < a); }
    friend bool operator>=(const Time& a, const Time& b) { return !(a < b); }
};

int main() {
    Time t1(9, 30, 15);
    Time t2(10, 5, 0);
    Time t3(9, 30, 15);

    std::cout << "t1 = " << t1 << '\n';
    std::cout << "t2 = " << t2 << '\n';
    std::cout << "t3 = " << t3 << '\n';

    std::cout << std::boolalpha;
    std::cout << "t1 == t2: " << (t1 == t2) << '\n';
    std::cout << "t1 != t2: " << (t1 != t2) << '\n';
    std::cout << "t1 <  t2: " << (t1 <  t2) << '\n';
    std::cout << "t1 <= t3: " << (t1 <= t3) << '\n';
    std::cout << "t2 >  t1: " << (t2 >  t1) << '\n';
    std::cout << "t2 >= t3: " << (t2 >= t3) << '\n';

    return 0;
}