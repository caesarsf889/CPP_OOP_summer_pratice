#include <iostream>
#include "Rational.h"

using std::endl ;
using std::cout ;
using std::string ;


int main() {

    Rational ra(4,2) ;
    Rational qwe(2,3) ;

    /*
    cout<<"ra < qwe is : " << (ra.operator<(qwe) ?  "ture":"false" ) <<endl ;

    cout<<"\nra < qwe is : " <<( (ra < qwe) ?  "true": "false"       )  <<endl ;

    cout<< "\nqwe < ra is : " << ( (qwe.operator<(ra) ) ?    "ture" :" false" ) <<endl ;

    cout<<"\nqwe < ra is : " << ((qwe.operator<(ra)) ?  "true" : "false" ) <<endl ;
    cout<<"\nra + qwe  = " <<(ra+qwe).to_string() <<endl ;
    */

    cout<<ra[0] <<endl ;
    cout<<qwe[0] <<endl ;

    ra[0] = 5 ;
    cout<<ra[0] <<endl ;








    return 0;
}
