#include <iostream>
#include "missile.h"

using std:: cout ;
using std:: cin ;
using std:: endl ;

int main() {
    cout<< "number of missile " << missile::get_number_of_missile() <<endl ;
    missile xiong3  ;
    cout<< "number of missile : " << missile::get_number_of_missile() <<endl ;
    xiong3.set_direction(69) ;
    xiong3.set_distance(12000.7824) ;
    cout<< "data field of xiong3 : " << xiong3.get_distance() << "   " << xiong3.get_direction() <<endl ;

    system("pause") ;
    return 0;
}
