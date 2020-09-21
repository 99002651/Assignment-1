

#ifndef __FRACTION_H
#define __FRACTION_H
#endif

#include<iostream>
using namespace std;
class fraction{
private:
    int m_num;
    int m_den;
public:
    fraction():m_num(0),m_den(0){}
    fraction(int num,int den):m_num(num),m_den(den){}
    fraction(int num):m_num(num),m_den(1){}
    fraction operator+(const fraction& ref);
    fraction operator-(const fraction& ref);
    fraction operator*(const fraction& ref);
    fraction operator+(int x){;
    fraction operator-(int x);
    bool operator==(const fraction& ref);
    bool operator>(const fraction& ref);
    bool operator<(const fraction& ref);
    int simplify();

    void display();

};
