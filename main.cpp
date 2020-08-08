#include <iostream>
#include "Space_X.h"

using std:: cout ;
using std::cin ;
using std:: endl ;

int main() {

    cout<<"this is SPACAE-X  we will test the Falcon-9 and the Star-ship  " <<endl ;
    cout<< "Current num of rocket " << Space_X:: get_number_of_rocket() <<endl ;

    Space_X Falcon_9 ;
    Space_X Star_ship(18,66.5) ;
    cout<<"current num of rocket : " <<Space_X::get_number_of_rocket()<<endl  ;
    cout<<"''detail of star_ship : " <<Star_ship.get_code() <<"   " << Star_ship.get_shot_height() <<endl ;
    cout<< "detail of falcon-9 : " <<Falcon_9.get_code() <<"   " << Falcon_9.get_shot_height() <<endl ;
    cout<<"current num of rocket : " <<Space_X::get_number_of_rocket() <<endl  ;


    system("pause")  ;
    return 0;
}
