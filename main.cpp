#include <iostream>
#include "Rational.h"

using std::endl ;
using std::cout;
using std:: string ;
//augmented assignment operator

int main() {


    Rational qwe(2,4) ;
    Rational ra = qwe += Rational(2,3) ;
    cout<< "qwe is " <<qwe.to_string() <<endl ;
    cout<<"ra is " <<ra.to_string() <<endl ;







    return 0;
}
