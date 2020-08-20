//
// Created by caesa on 20/08/2020.
//

#include "Rational.h"
#include <cmath>
#include <sstream>


Rational::Rational() {

    numerator = 0 ;
    denominator = 1 ;

}


Rational::Rational(int numerator, int denominator) {

    int factor = gcd(numerator,denominator) ;
    this->numerator = ((denominator>0) ? 1:-1) *numerator / factor ;
    this->denominator = abs(denominator) / factor ;

}


int Rational::get_numerator() const {

    return numerator ;
}

int Rational::get_denominator() const {

    return denominator ;
}

Rational Rational::add(const Rational& second_rational)const{

    int n = numerator* second_rational.get_denominator() +second_rational.get_numerator()*denominator ;
    int d = denominator*second_rational.get_denominator() ;

    return Rational(n,d) ;
}

Rational Rational::subtract(const Rational &second_rational) const {

    int n = numerator* second_rational.get_denominator()  -  second_rational.get_numerator()*denominator ;
    int d = denominator* second_rational.get_denominator() ;

    return Rational(n,d) ;
}


Rational Rational::multiply(const Rational &second_rational) const {

    int n = numerator* second_rational.get_numerator() ;
    int d = denominator* second_rational.get_denominator() ;

    return Rational(n,d) ;
}

Rational Rational::divide(const Rational &second_rational) const {

    int n = numerator* second_rational.get_denominator() ;
    int d = denominator* second_rational.get_numerator() ;

    return Rational(n,d) ;
}



int Rational::gcd(int n, int d) {

    int n1  = abs(n) ;
    int n2 = abs(d) ;
    int gcd = 1 ;

    for(int k=1 ; k<= n1 && k<= n2 ; k++){

        if(n1 % k==0 && n2 % k==0)
            gcd = k  ;


    }
    return gcd ;
}

int Rational::compare_to(const Rational& second_rational) const {

    Rational reg_Rational = subtract(second_rational) ;
    if(reg_Rational.get_numerator() < 0 )
        return -1 ;
    else if (reg_Rational.get_numerator() ==0 )
        return 0  ;
    else
        return 1  ;



}


bool Rational::equal(const Rational &second_rational) const {

    if(compare_to(second_rational) ==0 )
        return true ;

    else
        return false ;

}

int Rational:: int_value()const{

    return get_numerator() / get_denominator() ;
}

double Rational::double_value() const {

    return 1.0* get_numerator() / get_denominator() ;
}

std::string Rational::to_string() const {

    std::stringstream  ss ;
    ss << numerator ;

    if(denominator > 1)
        ss << "/" <<denominator ;


    return ss.str() ;
}

bool Rational::operator<(const Rational &second_rational) const {

    if(compare_to(second_rational) <0 )
        return true ;
    else
        return false ;


}

Rational Rational:: operator+(const Rational& second_rational )const{

    return add(second_rational) ;
}

int& Rational::operator[](int index){

    if(index ==0)
        return numerator ;
    else
        return denominator ;

}

Rational& Rational::operator+=(const Rational& second_rational){

    (*this) = add(second_rational) ;
    return *this ;
}

Rational Rational::operator-(){

    return Rational(-numerator,denominator) ;

}

Rational& Rational::operator++(){

    numerator += denominator ;
    return *this ;
}


Rational Rational::operator++(int dummy){

    Rational reg(numerator,denominator) ;
    numerator += denominator ;

    return reg ;
}



