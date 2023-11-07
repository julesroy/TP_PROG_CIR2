class Fraction {
private:
	int num;
	int den;

public:
	Fraction();
	Fraction(int, int);
	void print();
	Fraction operator+(const Fraction&);
	Fraction operator+(const int&);
	Fraction operator-(const Fraction&);
	Fraction operator-(const int&);
	Fraction operator*(const Fraction&);
	Fraction operator*(const int&);
	Fraction operator/(const Fraction&);
	Fraction operator/(const int&);
	Fraction operator+=(const Fraction&);
	Fraction operator+=(const int&);
	bool operator==(const Fraction& other);
	bool operator>(const Fraction& other);
	bool operator<(const Fraction& other);
	bool operator>=(const Fraction& other);
	bool operator<=(const Fraction& other);
};