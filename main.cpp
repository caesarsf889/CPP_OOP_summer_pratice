#include <iostream>
#include "antenna.h"

using std::cout ;
using std:: cin ;
using std:: endl ;



int main() {

    cout<< "number of antenna created: " << antenna:: get_number_of_antenna() <<endl ;

    antenna dong_feng_1 ;
    cout<< "the data field of dong_feng-1  is : " << dong_feng_1.get_direction() <<"  "
        << dong_feng_1.get_size() <<endl  ;

    cout<< "number of object: " << antenna::get_number_of_antenna() <<endl ;

    cout<< "get number of antenna by dong_feng-1 : " << dong_feng_1.get_number_of_antenna() <<endl ;





    system("pause") ;
    return 0;
}
