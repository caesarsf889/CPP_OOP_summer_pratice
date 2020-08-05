#include <iostream>
#include  "Fan.h"

using std:: cout ;
using std:: cin ;
using std:: endl ;


int main() {
    Fan xiao_mi( 3, true, 10  ) ;
    Fan hua_wei( 2, false, 5 ) ;
    cout<< "xiaomi's state:  " <<endl ;
    cout<< xiao_mi.get_state() << endl ;
    cout<< xiao_mi.get_speed() <<endl ;
    cout<< xiao_mi.get_radius() <<endl ;

    cout<<"hua_wei's state : " <<endl ;
    cout<< hua_wei.get_state() <<endl ;
     hua_wei.set_state(true)  ;
    cout<< hua_wei.get_state() <<endl ;
    


    system("pause") ;

    return 0;
}
