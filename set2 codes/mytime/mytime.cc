
#include <iostream>
#include "mytime.h"
using namespace std;

  MyTime :: MyTime(): m_hh(0),m_mm(0),m_ss(0) { }
  MyTime :: MyTime(int h, int m,int s) : m_hh(h), m_mm(m),m_ss(s) {}
  MyTime :: MyTime(int h, int m) : m_hh(h), m_mm(m) {}

 MyTime  MyTime :: operator+(const MyTime& rhs){
      int nmins = m_mm + rhs.m_mm;
      int thrs = m_hh + rhs.m_hh;
      int tsecs = m_ss + rhs.m_ss;
      return MyTime(thrs,nmins,tsecs);
  }
 MyTime  MyTime ::operator-(const MyTime& rhs){
      int nmins = m_mm - rhs.m_mm;
      int thrs = m_hh - rhs.m_hh;
      int tsecs = m_ss - rhs.m_ss;
      return MyTime(thrs,nmins,tsecs);
  }
 MyTime MyTime ::  operator+(int nmins) {
    int tmins = (m_hh*60+m_mm)+ nmins; // TODO: tmins > 60
    int thrs = tmins / 60;
    tmins = tmins % 60;
    int tsecs = m_ss;
    return MyTime(thrs, tmins,tsecs);
}
    MyTime MyTime :: operator-(int nmins) {
    int tmins = (m_hh*60+m_mm)- nmins; // TODO: tmins > 60
    int thrs = tmins / 60;
    tmins = tmins % 60;
    int tsecs = m_ss;
    return MyTime(thrs, tmins,tsecs);
  }
   MyTime& MyTime :: operator++(){
      ++m_hh;
      ++m_mm;
      ++m_ss;
      return *this;

  }


   MyTime  MyTime :: operator++(int dummy){
      MyTime orig(*this);
      ++m_hh;
      ++m_mm;
      ++m_ss;
      return orig;

  }

 MyTime&   MyTime :: operator+=(const MyTime& ref){
      m_hh += ref.m_hh;
      m_mm += ref.m_mm;
      m_ss+= ref.m_ss;
      return *this;
  }

  bool  MyTime :: operator==(const MyTime& ref){
      return (m_hh == ref.m_hh && m_mm == ref.m_mm && m_ss == ref.m_ss);

  }

  bool  MyTime :: operator<(const MyTime& ref){
      if (m_hh < ref.m_hh) return true;
      if (m_mm < ref.m_mm)return true;
      if (m_ss < ref.m_ss) return true;
      else return false;
  }
  bool  MyTime :: operator>(const MyTime& ref){
      if (m_hh > ref.m_hh) return true;
      if (m_mm > ref.m_mm)return true;
      if (m_ss > ref.m_ss) return true;
      else return false;
  }

  void  MyTime :: display() const {
       cout << m_hh << ":" << m_mm << ":" << m_ss << "\n";
  }



