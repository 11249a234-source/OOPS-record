#include<iostream>
using namespace std;
class Complex
{
    private: 
    float real, imag;
    public: 
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }
};
int main(){
    Complex c1(3,2), c2(1,7), c3;
    c3 = c2.add(c1);
    cout << "1st C.N: ";
    c1.display();
    cout << "2nd C.N: ";
    c2.display();
    cout << "sum: ";
    c3.display();
}