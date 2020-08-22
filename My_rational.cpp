//
// Created by caesa on 22/08/2020.
//

#include "My_rational.h"
#include <cstdlib>
#include <sstream>

My_rational::My_rational() {

    numerator = 0 ;
    denominator = 1 ;
}

My_rational::My_rational(int numerator, int denominator) {


    int divide_gcd = gcd(numerator,denominator) ;
    this->numerator = ((denominator >0) ? 1 :-1 ) * numerator / divide_gcd ;
    this->denominator = abs(denominator) / divide_gcd  ;

}

int My_rational::gcd(int n, int d) {

    int n1  = abs(n) ;
    int n2 = abs(d) ;

    int gcd = 1 ;

    for(int i =1 ; i <=n1 && i<=n2 ;i ++){

        if(n1%i==0 && n2%i==0)
            gcd = i  ;

    }

    return gcd ;
}


int My_rational::get_denominator() const {
    return denominator ;
}

int My_rational::get_numerator() const {
    return numerator  ;
}


My_rational My_rational::add(const My_rational &second_rational) const {

    int new_n  = numerator*second_rational.get_denominator() +denominator* second_rational.get_numerator() ;
    int new_d = denominator * second_rational.get_denominator();

    return My_rational(new_n,new_d) ;
}

My_rational My_rational::subtract(const My_rational &second_rational) const {
    int new_n  = numerator*second_rational.get_denominator()  - denominator* second_rational.get_numerator() ;
    int new_d = denominator * second_rational.get_denominator();

    return My_rational(new_n,new_d) ;
}

My_rational My_rational::multiply(const My_rational &second_rational) const {

    int new_n = numerator*second_rational.get_denominator() ;
    int new_d = denominator* second_rational.get_denominator() ;
    return My_rational(new_n,new_d) ;
}

My_rational My_rational::divide(const My_rational &second_rational) const {

    int new_n = numerator*second_rational.get_denominator() ;
    int new_d = denominator* second_rational.get_numerator() ;
    return My_rational(new_n , new_d) ;
}


int My_rational::compare_to(const My_rational &second_rational) const {

    My_rational reg = subtract(second_rational) ;
    if(reg.get_numerator()<0)
        return -1 ;
    else if(reg.get_numerator()==0)
        return 0 ;
    else
        return 1 ;

}


bool My_rational::equal(const My_rational &second_rational) const {

    if(compare_to(second_rational)==0)
        return true ;
    else
        return false ;
}

int My_rational::int_value() const {

    return  get_numerator() / get_denominator() ;
}


double My_rational::double_value() const {

    return 1.0 * get_numerator() / get_denominator() ;
}

string My_rational::to_string() const {

    std::stringstream my_string ;
    my_string << numerator ;

    if(denominator > 1)
        my_string <<" / " <<denominator ;

    return my_string.str() ;
}



My_rational::My_rational(int numerator){

    this->numerator = numerator ;
    this-> denominator = 1 ;
}

My_rational& My_rational::operator+=(const My_rational& second_rational){

    *this = add(second_rational) ;
    return *this ;
}

My_rational& My_rational::operator-=(const My_rational &second_rational) {

    *this = subtract(second_rational) ;
    return *this ;
}


My_rational& My_rational::operator*=(const My_rational& second_rational) {

    *this = multiply(second_rational);
    return *this;
}


My_rational& My_rational::operator/=(const My_rational &second_rational) {

    *this = divide(second_rational) ;
    return  *this ;
}



int& My_rational::operator[](int index) {

    if(index == 0)
        return numerator ;
    else
        return denominator ;
}


My_rational& My_rational::operator++(){

    numerator += denominator ;
    return *this ;
}


My_rational& My_rational::operator--(){

    numerator -= denominator ;
    return *this ;
}




My_rational My_rational::operator++(int dummy){

    My_rational reg(numerator,denominator) ;
    numerator += denominator ;
    return reg ;
}

My_rational My_rational::operator--(int dummy) {

    My_rational reg(numerator,denominator) ;
    numerator -= denominator ;
    return  reg ;
}

My_rational My_rational::operator+(){

    return *this ;
}

My_rational My_rational::operator-(){

    return My_rational(-numerator,denominator) ;
}



std::ostream& operator<<( std::ostream& out , const My_rational& rational){

    if(rational.denominator==1)
        out<<rational.numerator ;
    else
        out<<rational.numerator <<" / " <<rational.denominator  ;


    return out ;
}

std::istream& operator>>(std::istream& in, const My_rational& rational){

    cout<<"enter numerator: " ;
    in >>rational.numerator ;

    cout<<"enter denominator: " ;
    in>>rational.denominator ;

    return in ;
}


bool operator<(const My_rational& r1 , const My_rational& r2){

    return r1.compare_to(r2) < 0 ;
}


bool operator<=(const  My_rational& r1 , const My_rational& r2){

    return r1.compare_to(r2) <= 0 ;
}

bool operator>(const My_rational& r1 , const My_rational& r2 ){

    return r1.compare_to(r2) >0 ;
}


bool operator>=(const My_rational& r1 , const My_rational& r2 ){

    return r1.compare_to(r2) >= 0 ;
}

bool operator==(const My_rational& r1 , const My_rational& r2 ){

    return r1.compare_to(r2) ==0 ;
}


bool operator!=(const My_rational& r1 , const My_rational& r2 ){

    return r1.compare_to(r2) != 0  ;
}


My_rational operator+(const My_rational& r1 , const My_rational& r2){


    return r1.add(r2) ;
}


My_rational operator-(const My_rational& r1 , const My_rational& r2){

    return r1.subtract(r2) ;
}

My_rational operator*(const My_rational& r1, const My_rational& r2){

    return r1.multiply(r2) ;
}


My_rational operator/(const My_rational& r1, const My_rational& r2){

    return r1.divide(r2) ;
}




