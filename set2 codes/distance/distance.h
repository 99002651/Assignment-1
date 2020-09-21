#ifndef __DISTANCE_H
#define __DISTANCE_H

class distance {
private:
  int feet;
  int inch;
public:
  distance();
  distance(int,int);
  distance operator+(const distance&);
  distance operator-(const distance&);
  distance operator+(int);
  distance operator-(int);
  distance& operator++();
  distance operator++(int);
  bool operator==(const distance&);
  bool operator<(const distance&);
  bool operator>(const distance&);
  void display();
  int get_feet();
  int get_inch();
};

#endif

