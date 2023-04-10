#include <iostream>
#include <cassert>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int _numerator, int _denominator) {
        assert((_numerator == (int)_numerator) && (_denominator == (int)_denominator));
        assert(_denominator != 0);
        numerator = _numerator;
        denominator = _denominator;
    }

    void reduce() {
        int gcd = getGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    friend ostream& operator<<(ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }

    friend Fraction operator+(const Fraction& frac1, const Fraction& frac2) {
        int num = (frac1.numerator * frac2.denominator) + (frac2.numerator * frac1.denominator);
        int den = frac1.denominator * frac2.denominator;
        Fraction result(num, den);
        result.reduce();
        return result;
    }

    int getGCD(int x, int y) {
        return y == 0 ? x : getGCD(y, x % y);
    }
};

int main() {
    Fraction o1(3, 4);
    Fraction o2(1, 2);
    Fraction o3 =o1 + o2;
    cout << o1 << " + " << o2 << " = " << o3 << endl;
    return 0;
}


