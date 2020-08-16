#include <iostream>
#include "TV.h"
#include <string>
using std:: cout;
using std::endl ;
using std::string ;

int main() {

    cout<< TV::get_total() <<endl ;
    TV msi ;
    msi.set_code(69) ;
    cout<<msi.get_code()<<endl ;

    TV Samsung(89,45) ;

    TV* p_tv = new TV ;
    TV* p_msi = new TV(152,69) ;
    cout<<p_tv <<endl ;

    cout<< (*p_msi).get_size() <<endl ;
    cout<<(*p_tv).get_size() <<endl ;

    cout<< p_msi->get_code() <<endl ;
    cout<<(*p_tv).get_code() <<endl ;
    cout<<p_tv->get_code() <<endl ;

    delete p_tv ;

    TV* pfuck_tv = new TV(69,96) ;
    cout<<(*pfuck_tv).get_code() <<endl ;
    cout<<pfuck_tv->get_code() <<endl ;

    system("pause") ;
    return 0;
}
