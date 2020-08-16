#include <iostream>
#include "TV.h"
#include <string>
using std::cout ;
using std::endl ;
using std::string ;

int main() {

    TV* p_msi = new TV(69,96) ;

    cout<<"the number of object has been build: " << TV::get_total() <<endl ;


    delete p_msi ;

    cout<<"total: " <<TV::get_total() <<endl ;


    string* p_fuck_string = new string("fuck") ;

    cout<<(*p_fuck_string).size() <<endl ;
    cout<<p_fuck_string->size() <<endl ;


    system("pause") ;
    return 0;
}
