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

};

Fraction Fraction::mul(Fraction f){

    numerator = numerator * f.numerator;
    denominator = denominator * f.denominator;

    return f;
}

Fraction Fraction::sub(Fraction b) {
    denominator = denominator * b.denominator;
    numerator = (numerator*b.denominator) -  (b.numerator*denominator);
    return this;
}

int main(){

}