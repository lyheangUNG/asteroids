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
    Fraction f2;

    f.numerator = f.numerator * f2.numerator;
    f.denominator = f.denominator * f2.denominator;

    return f;
}

int main(){

}