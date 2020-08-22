//
// Created by caesa on 22/08/2020.
//

#ifndef CH14_12_FULL_CLASS_APPLICATION_PRACTICE_MY_RATIONAL_H
#define CH14_12_FULL_CLASS_APPLICATION_PRACTICE_MY_RATIONAL_H

#include <string>
#include <iostream>

using std::cout ;
using std::string ;
using std::endl ;



class My_rational {


public:
    //
    My_rational() ;
    My_rational(int numerator,  int denominator) ;
    int get_numerator()const ;
    int get_denominator()const ;
    My_rational add(const My_rational& second_rational)const ;
    My_rational subtract(const My_rational& second_rational)const  ;
    My_rational multiply(const My_rational& second_rational)const ;
    My_rational divide(const My_rational& second_rational)const  ;


    //
    int compare_to(const My_rational& second_rational)const ;
    bool equal(const My_rational& second_rational) const  ;

    //
    int int_value()const ;
    double double_value()const ;
    string to_string()const ;

    //
    My_rational(int numerator) ;

    //
    My_rational& operator+=(const My_rational& second_rational) ;
    My_rational& operator-=(const My_rational& second_rational) ;
    My_rational& operator*=(const My_rational& second_rational) ;
    My_rational& operator/=(const My_rational& second_rational) ;

    //
    int& operator[](int index) ;

    //
    My_rational& operator++() ;
    My_rational& operator--() ;



    //
    My_rational operator++(int dummy) ;
    My_rational operator--(int dummy) ;


    //
    My_rational operator+() ;
    My_rational operator-() ;


    friend std::ostream& operator<<(std::ostream& , const My_rational& ) ;
    friend std::istream& operator>>(std::istream& , const  My_rational&) ;

private:

    int numerator ;
    int denominator ;
    static int gcd(int n, int d) ;


};

//
bool operator<(const My_rational& r1 , const My_rational& r2 ) ;
bool operator<=(const My_rational& r1 , const My_rational& r2 ) ;
bool operator>(const My_rational& r1 , const My_rational& r2 ) ;
bool operator>=(const My_rational& r1 , const My_rational& r2 ) ;
bool operator==(const My_rational& r1 , const My_rational& r2 ) ;
bool operator!=(const My_rational& r1 , const My_rational& r2 ) ;

//
My_rational operator+(const My_rational& r1, const My_rational& r2) ;
My_rational operator-(const My_rational& r1, const My_rational& r2) ;
My_rational operator*(const My_rational& r1, const My_rational& r2) ;
My_rational operator/(const My_rational& r1, const My_rational& r2) ;





#endif //CH14_12_FULL_CLASS_APPLICATION_PRACTICE_MY_RATIONAL_H
