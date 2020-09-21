#ifndef __COMPLEX_H
#define __COMPLEX_H

#endif
class Complex {
private:
 int m_real,m_imag;

 public:
     Complex();
     Complex(int,int);
     Complex(int);

     Complex operator +(const Complex &);
     Complex operator -(const Complex &);
     Complex operator *(const Complex &);
     Complex& operator ++();
     Complex operator ++(int);
     bool operator==(const Complex &);
     void display();
     int getReal();
     int getImag();
};


