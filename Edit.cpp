#include <iostream>

using namespace std;

class Fraction{
private:
    int numerator;
    int denominator;
public:
    Fraction(int,int);
    Fraction add(Fraction);
    Fraction sub(Fraction);
    Fraction mul(Fraction);
    Fraction div(Fraction);
    friend int gcd(int,int);
};

Fraction Fraction::sub(Fraction b){
    denominator = denominator * b.denominator;
    numerator = (numerator*b.denominator) -  (b.numerator*denominator);
    return this;
}

Fraction Fraction::mul(Fraction f) {
    numerator = numerator * f.numerator;
    denominator = denominator * f.denominator;

    return f;
}

Fraction Fraction::div(Fraction b) {
    denominator = denominator*b.numerator;
    numerator = numerator*b.denominator;
    return this;
}

int gcd(int a, int b) {
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

int main() {

}