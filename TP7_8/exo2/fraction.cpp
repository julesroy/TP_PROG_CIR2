#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;
#include "fraction.hpp"

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

Fraction Fraction::simplifier() {
	int resultat = gcd(num, den);
	this->num = this->num / resultat;
	this->den = this->den / resultat;
	return *this;
}

//+
Fraction Fraction::operator+(const Fraction& other)
{
	cout << "Fraction + Fraction" << endl;
	Fraction result;
	result.num = this->num * other.den + this->den * other.num;
	result.den = this->den * other.den;

	return result.simplifier(); // peut être simplifié
};

Fraction Fraction::operator+(const int& i) {
	Fraction result;
	result.num = this->num + this->den * i;
	result.den = this->den;
	return result.simplifier();
}

//-
Fraction Fraction::operator-(const Fraction& other)
{
	cout << "Fraction - Fraction" << endl;
	Fraction result;
	result.num = this->num * other.den - this->den * other.num;
	result.den = this->den * other.den;
	return result.simplifier(); // peut être simplifié
};

Fraction Fraction::operator-(const int& i) {
	Fraction result;
	result.num = this->num - this->den * i;
	result.den = this->den;
	return result.simplifier();
}

//*
Fraction Fraction::operator*(const Fraction& other)
{
	cout << "Fraction * Fraction" << endl;
	Fraction result;
	result.num = this->num * other.num;
	result.den = this->den * other.den;
	return result.simplifier(); // peut être simplifié
};

Fraction Fraction::operator*(const int& i) {
	Fraction result;
	result.num = this->num * i;
	result.den = this->den;
	return result.simplifier();
}

// /
Fraction Fraction::operator/(const Fraction& other)
{
	cout << "Fraction / Fraction" << endl;
	Fraction result;
	result.num = this->num * other.den;
	result.den = this->den * other.num;
	return result.simplifier(); // peut être simplifié
};

Fraction Fraction::operator/(const int& i) {
	Fraction result;
	result.num = this->num;
	result.den = this->den * i;
	return result.simplifier();
}

//+=
Fraction Fraction::operator+=(const Fraction& other)
{
	cout << "Fraction += Fraction" << endl;
	//Fraction result;
	this->num = this->num * other.den + this->den * other.num;
	this->den = this->den * other.den;
	return this->simplifier(); // peut être simplifié
};

Fraction Fraction::operator+=(const int& i) {
	this->num = this->num + this->den * i;
	this->den = this->den;
	return this->simplifier();
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