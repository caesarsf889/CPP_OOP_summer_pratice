#include <iostream>
#include "Keyboard.h"


using std::cout ;
using std::endl ;
using std::string ;

int main() {


    Keyboard* p_for_keyboard_msi  = new Keyboard() ;
    cout<< Keyboard::get_num_of_keyboard() <<endl ;

    delete p_for_keyboard_msi ;

    cout<< Keyboard::get_num_of_keyboard() <<endl ;

    Keyboard* p_for_keyboard_samsung = new Keyboard(69, 100, true) ;
    cout<< Keyboard::get_num_of_keyboard() <<endl ;

    cout<< (*p_for_keyboard_samsung).get_wireless() <<endl ;
    cout<<p_for_keyboard_samsung->get_code() <<endl ;




    system("pause") ;
    return 0;
}
