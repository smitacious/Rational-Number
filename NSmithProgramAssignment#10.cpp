/* Norris Smith
   2/19/16
   Programming Assignment # 10
   Program that uses the class RationalNumber, which will have the following capabilites, creates a constructor
   that will division by zero, reduces the fractions that are not in their simplest form to their simplest form,
   and lastly will avoid the use of negative denominators. The constructor will also complete simple
   overloading of the addition,subtraction, multiplication and division of the fractions and will overload the
   relational and equality operators for the class.
*/

#include <iostream>
#include "RationalNumber.h"
#include "RationalNumber.cpp"

using namespace std;

int main()
{
    RationalNumber c( 6, 3 ), d( 3, 12 ), x;

    c.printRational();
    cout << " + " ;
    d.printRational();
    cout << " = ";
    x = c + d; // tests overloaded operators + and =
    x.printRational();

    cout << '\n';
    c.printRational();
    cout << " - " ;
    d.printRational();
    cout << " = ";
    x = c - d; // tests overloaded operators - and =
    x.printRational();

    cout << '\n';
    c.printRational();
    cout << " * " ;
    d.printRational();
    cout << " = ";
    x = c * d; // tests overloaded operators * and =
    x.printRational();

    cout << '\n';
    c.printRational();
    cout << " / " ;
    d.printRational();
    cout << " = ";
    x = c / d; // tests overloaded operators / and =
    x.printRational();

    cout << '\n';
    c.printRational();
    cout << " is:\n";

    // test overloaded greater than operator
    cout << ( ( c > d ) ? "  > " : "  <= " );
    d.printRational();
    cout << " according to the overloaded > operator\n";

    // tests overloaded less than operator
    cout << ( ( c < d ) ? "  < " : "  >= " );
    d.printRational();
    cout << " according to the overloaded < operator\n";

    // tests overloaded greater than or equal to operator
    cout << ( ( c >= d ) ? "  >= " : "  < " );
    d.printRational();
    cout << " according to the overloaded >= operator\n";

    // tests overloaded less than or equal to operator
    cout << ( ( c <= d ) ? "  <= " : "  > " );
    d.printRational();
    cout << " according to the overloaded <= operator\n";

    // tests overloaded equality operator
    cout << ( ( c == d ) ? "  == " : "  != " );
    d.printRational();
    cout << " according to the overloaded == operator\n";

    // tests overloaded inequality operator
    cout << ( ( c != d ) ? "  != " : "  == " );
    d.printRational();
    cout << " according to the overloaded != operator" << endl;
} // ends main

/* Header file that I used to test program

#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

class RationalNumber
{
    public:
        RationalNumber( int = 0, int = 1 ); // default constructor
        RationalNumber operator+( const RationalNumber & ); // addition
        RationalNumber operator-( const RationalNumber & ); // subtraction
        RationalNumber operator*( const RationalNumber & ); // multiplication
        RationalNumber operator/( const RationalNumber & ); // division

    // relational operators
    bool operator<( const RationalNumber & ) const;
    bool operator>( const RationalNumber & ) const;
    bool operator<=( const RationalNumber & ) const;
    bool operator>=( const RationalNumber & ) const;

    // equality operators
    bool operator==( const RationalNumber & ) const;
    bool operator!=( const RationalNumber & ) const;

    void printRational() const; // display rational number
        private:
            int numerator; // private variable numerator
            int denominator; // private variable denominator
    void reduction(); // function for fraction reduction
}; // end class RationalNumber

#endif
*/

