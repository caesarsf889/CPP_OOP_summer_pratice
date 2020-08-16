//
// Created by caesa on 16/08/2020.
//

#include "TV.h"


int TV::total = 0 ;

TV:: TV(){

    size = 1 ;
    code = 1 ;
    total++ ;
}



TV::TV(int new_code, int new_size){

    this->size = new_size ;
    this->code  = new_code ;
    total++  ;
}

int TV::get_code() const {


    return code ;

}


int TV::get_size() const {


    return size ;

}


void TV::set_code(int new_code) {

    this->code = new_code ;
    //(*this).code = new_code ;

}


int TV:: get_total(){


    return total ;
}

TV::~TV(){

    total-- ;

}