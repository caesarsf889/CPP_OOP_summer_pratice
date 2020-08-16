//
// Created by caesa on 16/08/2020.
//

#include "Keyboard.h"

int Keyboard::num_of_keyboard = 0  ;


Keyboard::Keyboard(){

    code = 1;
    size = 70 ;
    wireless = true ;
    num_of_keyboard++ ;
}

Keyboard:: Keyboard(int code, int size, bool wireless) {

    this->code = code ;
    (*this).size = size ;
    (*this).wireless = wireless ;
    num_of_keyboard++ ;
}


Keyboard::~Keyboard(){

    num_of_keyboard-- ;
}




int Keyboard::get_code() const {

    return code ;
}


int Keyboard::get_size() const {

    return  size ;
}



bool Keyboard::get_wireless() const {


    return wireless ;
}


void Keyboard::set_code(int new_code) {

    (*this).code = ( code >=0 ) ? code:0 ;

}

int Keyboard::get_num_of_keyboard() {



    return num_of_keyboard ;
}











