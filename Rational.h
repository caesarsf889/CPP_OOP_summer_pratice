//
// Created by caesa on 18/08/2020.
//

#ifndef CH14_RATIONAL_RATIONAL_H
#define CH14_RATIONAL_RATIONAL_H

#include <string>
using std::string ;

class Rational {

public:
    Rational() ;
    Rational(int numerator , int denominator ) ;

    int get_numerator()const ;
    int get_denominator()const ;

    Rational add(const Rational& second_rational )const ;

    Rational subtract(const Rational& second_rational)const  ;

    Rational multiply(const Rational& second_rational)const ;

    Rational divide(const Rational& second_rational )const  ;

    int compare_to(const Rational& second_rational)const ;

    bool equal(const Rational& second_rational)const ;

    int int_value()const ;

    double double_value()const ;

    string to_string()const ;


private:

    int numerator ;
    int denominator ;

    static int gcd(int n ,int d)  ;




};


#endif //CH14_RATIONAL_RATIONAL_H
