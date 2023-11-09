#include <iostream>
using namespace std;
#include "exo2.hpp"

Fraction::Fraction() {

}

Fraction::Fraction(int n1, int n2) {
	num = n1;
	den = n2;
}

void Fraction::print() {
	cout << num << "/" << den << endl;
}

void Fraction::setNum(int n1) {
	num = n1;
}

void Fraction::setDen(int n2) {
	den = n2;
}

//+
Fraction Fraction::operator+(const Fraction& other)
{
	cout << "Fraction + Fraction" << endl;
	Fraction result;
	result.num = this->num * other.den + this->den * other.num;
	result.den = this->den * other.den;
	return result; // peut être simplifié
};

Fraction Fraction::operator+(const int& i) {
	Fraction result;
	result.num = this->num + this->den * i;
	result.den = this->den;
	return result;
}

//-
Fraction Fraction::operator-(const Fraction& other)
{
	cout << "Fraction - Fraction" << endl;
	Fraction result;
	result.num = this->num * other.den - this->den * other.num;
	result.den = this->den * other.den;
	return result; // peut être simplifié
};

Fraction Fraction::operator-(const int& i) {
	Fraction result;
	result.num = this->num - this->den * i;
	result.den = this->den;
	return result;
}

//*
Fraction Fraction::operator*(const Fraction& other)
{
	cout << "Fraction * Fraction" << endl;
	Fraction result;
	result.num = this->num * other.num;
	result.den = this->den * other.den;
	return result; // peut être simplifié
};

Fraction Fraction::operator*(const int& i) {
	Fraction result;
	result.num = this->num * i;
	result.den = this->den;
	return result;
}

// /
Fraction Fraction::operator/(const Fraction& other)
{
	cout << "Fraction / Fraction" << endl;
	Fraction result;
	result.num = this->num * other.den;
	result.den = this->den * other.num;
	return result; // peut être simplifié
};

Fraction Fraction::operator/(const int& i) {
	Fraction result;
	result.num = this->num;
	result.den = this->den * i;
	return result;
}

//+=
Fraction Fraction::operator+=(const Fraction& other)
{
	cout << "Fraction / Fraction" << endl;
	//Fraction result;
	this->num = this->num * other.den + this->den * other.num;
	this->den = this->den * other.den;
	return *this; // peut être simplifié
};

Fraction Fraction::operator+=(const int& i) {
	this->num = this->num + this->den * i;
	this->den = this->den;
	return *this;
}

//==
bool Fraction::operator==(const Fraction& other) {
	return (this->num * other.den == this->den * other.num);
}

//>
bool Fraction::operator>(const Fraction& other) {
	return (this->num * other.den > this->den * other.num);
}

//<
bool Fraction::operator<(const Fraction& other) {
	return (this->num * other.den < this->den * other.num);
}

//>=
bool Fraction::operator>=(const Fraction& other) {
	return (this->num * other.den >= this->den * other.num);
}

//<=
bool Fraction::operator<=(const Fraction& other) {
	return (this->num * other.den <= this->den * other.num);
}

//<<
ostream& operator<<(ostream& os, const Fraction& other) {
	os << other.num << "/" << other.den << endl;
	return os;
}

//>>
istream& operator>>(istream& is, Fraction& other) {
	int num, den;
	is >> num >> den;
	other.setNum(num);
	other.setDen(den);
	return is;
}

int main()
{
	Fraction f1(1, 2);
	Fraction f2(1, 3);
	int n = 5;
	cout << f1;
	/*cout << "f1: "; f1.print();
	cout << "f2: "; f2.print();*/

	//if (f1 == f2) {
	//	cout << "vrai" << endl;
	//}
	//else {
	//	cout << "faux" << endl;
	//}
}
