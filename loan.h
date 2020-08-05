//
// Created by caesa on 05/08/2020.
//

#ifndef CH9_9_11_LOAN_LOAN_H
#define CH9_9_11_LOAN_LOAN_H


class Loan{

public:
    Loan() ;
    Loan(double , int ,double) ;

    double get_annual_interest_rate()  ;
    int get_number_of_year() ;
    double get_loan_amount() ; 
    void set_annual_interest_rate(double) ;
    void set_number_of_year(int) ;
    void set_loan_amount(double) ;

    double get_monthly_payment() ;
    double get_total_payment() ;


private:
    double annual_interest_rate ;
    int number_of_year ;
    double loan_amount ;

};








#endif //CH9_9_11_LOAN_LOAN_H
