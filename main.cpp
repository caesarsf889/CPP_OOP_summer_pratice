#include <iostream>
#include "Rational.h"

using std::cout ;
using std::endl ;
using std::string ;
using std::cin ;

int main() {

    Rational qwe(2,3) ;
    Rational r1,r2 ;
    cout<<"enter first rational number : " <<endl ;
    cin>> r1 ;

    cout<<"enter second rational number: " <<endl ;
    cin>>r2 ;



    cout<<r1 <<" + " <<r2 <<" =  "<< r1+r2 <<endl ;

    return 0;
}
