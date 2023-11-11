using namespace std;

class Fraction {
private:
	int num;
	int den;

public:
	Fraction();
	Fraction(int, int);
	void print();
	void setNum(int);
	void setDen(int);
	Fraction simplifier();
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
	friend ostream& operator<<(ostream& os, const Fraction& other);
	friend istream& operator>>(istream& is, const Fraction& other);
};