#include "fraction.h"
#include<iostream>
using namespace std;

    fraction():m_num(0),m_den(0){}
    fraction(int num,int den):m_num(num),m_den(den){}
    fraction(int num):m_num(num),m_den(1){}
    fraction operator+(const fraction& ref){
         m_num = (m_num/m_den)+(ref.m_num/ref.m_den);
         return m_num;
    }
    fraction operator-(const fraction& ref){
         m_num = (m_num/m_den)-(ref.m_num/ref.m_den);
         return m_num;
    }
    fraction operator*(const fraction& ref){
         m_num = (m_num/m_den)*(ref.m_num/ref.m_den);
         return m_num;
    }
    fraction operator+(int x){
         m_num = (m_num/m_den)+ x;
         return m_num;
    }
    fraction operator-(int x){
         m_num = (m_num/m_den)- x;
         return m_num;
    }
    bool operator==(const fraction& ref){
      return(m_num==ref.m_num && m_den==ref.m_den);
    }
    bool operator>(const fraction& ref){
       if((m_num/m_den)>((ref.m_num/ref.m_den))){return true;}
       else {return false;}
    }
    bool operator<(const fraction& ref){
       if((m_num/m_den)<((ref.m_num/ref.m_den))){return true;}
       else {return false;}
    }
    int simplify(){
        while(m_num!= m_den){
            if(m_num>m_den){
                m_num = m_num - m_den;
            }
            else{
                m_den = m_den- m_num;
            }
        }
        cout<<m_num<<endl;;
    }


    void display(){
       cout<<m_num<<endl;
    }
