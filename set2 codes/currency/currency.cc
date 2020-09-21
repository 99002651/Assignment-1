#include "currency.h"
#include <iostream>

Currency::Currency() :m_rupees(0), m_paise(0) {}
Currency::Currency(int a, int b):m_rupees(a),m_paise(b){}
Currency::Currency(int a) {
	m_paise= m_paise + a;
	m_rupees = 0;
	if (m_paise > 99) {
		m_rupees += 1;
		m_paise = m_paise - 100;
	}
}

Currency Currency::operator+(const Currency& ref) {
	int rup = m_rupees + ref.m_rupees;
	int pai = m_paise + ref.m_paise;
	return Currency(rup, pai);
}
Currency Currency::operator-(const Currency& ref) {
	int rup = m_rupees - ref.m_rupees;
	int pai = m_paise - ref.m_paise;
	return Currency(rup, pai);
}
Currency Currency::operator+(int n) {
	int rup = m_rupees;
	int pai = m_paise + n;
	if (pai > 99) {
		rup += 1;
		pai -= 100;
	}
	return Currency(rup, pai);
}
Currency Currency::operator-(int n) {
	int rup = m_rupees;
	int pai = m_paise - n;
	if (pai < 0) {
		rup -= 1;
		pai += 100;
	}
	return Currency(rup, pai);
}
Currency& Currency:: operator ++ ()
{
	Currency temp;
	if (temp.m_paise > 99) {
		temp.m_rupees = temp.m_rupees + 1;
		temp.m_paise = temp.m_paise - 100;
	}
	temp.m_rupees += m_rupees ;
	temp.m_paise = m_paise + 1;

	return temp;
}

Currency Currency:: operator ++ (int dummy)
{
	Currency temp;
	temp.m_rupees = m_rupees;
	temp.m_paise = m_paise++;
	if (temp.m_paise > 99) {
		temp.m_rupees += 1;
		temp.m_paise -= 100;
	}
	return temp;
}

bool Currency ::   operator== (const Currency &ref_val){
	return m_rupees == ref_val.m_rupees && m_paise == ref_val.m_paise;
}
bool Currency::operator< (const Currency& ref) {
	return m_rupees < ref.m_rupees && m_paise < ref.m_paise;
}
bool Currency::operator> (const Currency& ref) {
	return m_rupees > ref.m_rupees && m_paise > ref.m_paise;
}
void Currency::display() const{
	std::cout << m_rupees << "'" << m_paise ;
}
