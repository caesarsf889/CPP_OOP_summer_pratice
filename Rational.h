//
// Created by caesa on 21/08/2020.
//

#ifndef CH14_10_AND_11_REVIEW_RATIONAL_H
#define CH14_10_AND_11_REVIEW_RATIONAL_H

#include <string>
#include <iostream>

using std::string ;

class Rational {


public:

    Rational() ;
    Rational(int numerator , int denominator ) ;

    int get_numerator()const ;
    int get_denominator()const ;

    Rational add(const Rational& second_rational )const ;

    Rational subtract(const Rational& second_rational)const ;

    Rational multiply(const Rational& second_rational)const ;

    Rational divide(const Rational& second_rational )const  ;

    int compare_to(const Rational& second_rational)const ;

    bool equal(const Rational& second_rational)const ;

    int int_value()const ;

    double double_value()const ;

    string to_string()const ;


    bool operator<(const Rational& second_rational ) const  ;



    int& operator[](int index) ;

    Rational& operator+=(const Rational& second_rational) ;

    Rational operator-() ;

    Rational& operator++() ;

    Rational operator++(int dummy) ;

    friend std::ostream& operator<<(std::ostream& out, const Rational& rational  ) ;
    friend std::istream& operator>>(std::istream& in , Rational& rational) ;


    //Rational(int numerator) ;
    //operator double() ;
    Rational(int numerator) ;



private:

    int numerator ;
    int denominator ;

    static int gcd(int n ,int d)  ;





};


Rational operator+(const Rational& rr1  , const Rational& rr2) ;




#endif //CH14_10_AND_11_REVIEW_RATIONAL_H
