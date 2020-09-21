#include <iostream>
#include "complex.h"
using namespace std;
Complex::Complex(): m_real(0), m_imag(0){}

Complex::Complex(int x, int y): m_real(x), m_imag(y){}

Complex :: Complex(int t): m_real(t) {}

Complex Complex::operator+ (const Complex &ref)
{

    int imag = m_imag + ref.m_imag;
    int real = m_real + ref.m_real;
    return Complex(imag,real);
}

Complex Complex::operator- (const Complex &ref)
{

    int imag = m_imag - ref.m_imag;
    int real = m_real - ref.m_real;
    return Complex(imag,real);
}

Complex Complex::operator* (const Complex &ref)
{

    int imag = m_imag * ref.m_imag;
    int real = m_real * ref.m_real;
    return Complex(imag,real);
}

Complex& Complex::operator++(){

    ++m_real;
    return *this;
}

Complex Complex :: operator ++(int num)
{

    Complex orig(*this);
    ++m_real;
    return orig;
}

bool Complex :: operator == (const Complex &ref)
{

    return m_real == ref.m_real && m_imag == ref.m_imag;

}

void Complex :: display ()
{

    std::cout<<m_real<<"+"<< "i" << m_imag<<"\n";
}
int Complex :: getReal()
{

    return m_real;
}
int Complex :: getImag()
{

    return m_imag;
}
