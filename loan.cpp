//
// Created by caesa on 05/08/2020.
//
#include "loan.h"
#include <cmath>

Loan:: Loan() {

    annual_interest_rate = 9.5 ;
    number_of_year = 30 ;
    loan_amount = 100000 ;
}

Loan:: Loan(double rate ,int year ,double amount){
    annual_interest_rate  = rate ;
    number_of_year =  year ;
    loan_amount =  amount ;

}

double Loan:: get_annual_interest_rate() {

    return annual_interest_rate ;
}


int Loan:: get_number_of_year(){

    return number_of_year ;
}

double Loan:: get_loan_amount() {

    return loan_amount ;
}

void  Loan:: set_loan_amount(double amount) {

    loan_amount = amount ;
}


void Loan:: set_annual_interest_rate(double rate){
    annual_interest_rate = rate ;
}

void Loan::set_number_of_year(int year) {

    number_of_year = year ;
}


double Loan:: get_monthly_payment() {

    double monthly_interest_rate = annual_interest_rate / 1200 ;
    return loan_amount* monthly_interest_rate /
        (1-(pow( 1 / (1 + monthly_interest_rate ) , number_of_year *12  ))) ;
}


double Loan:: get_total_payment() {

    return get_monthly_payment() * number_of_year * 12 ;
}



