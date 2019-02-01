#include<iostream>

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
};

Fraction::Fraction add(Fraction f)
{
	Fraction f1;
	f1 = numerator * f.denominator + f.numerator * denominator;
	return f1;
}

Fraction Fraction::div(Fraction b){
    denominator = denominator*b.numerator;
    numerator = numerator*b.denominator;
    return this;
}

main(){
}
