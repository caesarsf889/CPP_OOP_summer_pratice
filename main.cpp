#include <iostream>
#include "Rational.h"

using std::string ;
using std::cout ;
using std::endl ;




int main() {
    Rational r1(4,2) ;
    Rational r2(2,3) ;
    cout<< r1.to_string() << " + " <<r2.to_string() <<" = " <<r1.add(r2).to_string()<<endl ;

    cout<<r1.to_string() <<" - " << r2.to_string()  << " = " <<r1.subtract(r2).to_string() <<endl ;

    cout<<r1.to_string() << " * " <<r2.to_string() <<" = " << r1.multiply(r2).to_string() <<endl ;

    cout<< r1.to_string() << " / " <<r2.to_string() <<" = " << r1.divide(r2).to_string() <<endl ;

    cout<<r1.int_value() <<endl ;
    cout<<r2.double_value() <<endl ;

    cout<<r1.compare_to(r2) <<endl ;
    cout<<r2.compare_to(r1) <<endl ;

    cout<<(r1.equal(r2)? "true" : "false") <<endl ;



    return 0;
}
