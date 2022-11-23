// OperatorOvrloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) { real = r;   imag = i; }

    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const& obj) {
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print() { std::cout << real << " + " << imag << "i" << '\n'; }
};

int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print();
}
