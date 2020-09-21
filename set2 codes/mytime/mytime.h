
#ifndef __MYTIME_H_
#define __MYTIME_H_
#endif
#include <iostream>
class MyTime {
private:
  int m_hh;
  int m_mm;
  int m_ss;

public:
  MyTime();
  MyTime(int,int,int);
  MyTime(int,int);
  MyTime operator+(const MyTime&);
  MyTime operator-(const MyTime&);
  MyTime operator+(int);
  MyTime operator-(int);
  MyTime& operator++();
  MyTime operator++(int);
  MyTime& operator+=(const MyTime&);
  bool operator==(const MyTime&);
  bool operator<(const MyTime&);
  bool operator>(const MyTime&);
  void display() const;

};

