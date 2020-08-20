#include <iostream>
#include "Rational.h"

using std::endl ;
using std::cout ;
using std::string ;


int main() {

    Rational ra(2,3)  ;
    Rational qwe = -ra ;

    cout<<"ra is : " <<ra.to_string() <<endl ;
    cout<<"qwe is : " << qwe.to_string() <<endl ;

    Rational iu(2,3) ;
    cout<<iu.to_string() <<endl ;
    Rational unea = iu++;



    cout<<"iu is :" <<iu.to_string() <<endl ;
    cout<<"unea is : " <<unea.to_string() <<endl  ;



    return 0;
}
