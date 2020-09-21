#include<iostream>
#include "color.h"
color::color() :
    m_r(0), m_b(0), m_g(0) {

}
color::color(int x, int y, int z) :
  m_r(x), m_b(y), m_g(z) {

}


color:: color( color_t )
{

}

int color :: invert()
{
    m_r = 255 - m_r;
    m_b = 255 - m_b;
    m_g = 255 - m_g;

    return m_r;
}


int color:: redcolor()
{

    return m_r;
}
int color :: greencolor() {
   return m_g;
}
int color:: bluecolor() {
return m_b;
}

void color:: display()
{

    std:: cout <<m_r<<m_b<<m_g<<"\n";
}
