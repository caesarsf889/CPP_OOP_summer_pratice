#include <iostream>
#include "loan.h"
#include  <iomanip>
using std:: cout ;
using std:: cin ;
using std:: endl ;

int main() {

    cout<< "enter year interest rate ,for eg:8.69 : " ;
    double annual_interest_rate ;
    cin>> annual_interest_rate ;

    cout<< "enter number of years as an integer like : 6 " ;
    int number_of_year  ;
    cin>> number_of_year ;

    cout<< "enter loan amount  like : 120000.95" ;
    double loan_amount ;
    cin >> loan_amount ;

    Loan Honda_CBR150(annual_interest_rate, number_of_year, loan_amount) ;

    cout<< std::fixed << std:: setprecision(2) ;
    cout<< "the monthly payment is : "<<endl ;
    cout<< Honda_CBR150.get_monthly_payment() <<endl ;
    cout<< "the total payment is : "  ;
    cout<< Honda_CBR150.get_total_payment() << endl  ;


    system("pause") ;

    return 0;
}
