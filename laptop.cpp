//
// Created by caesa on 06/08/2020.
//

#include "laptop.h"


laptop::laptop(){
    size = 1 ;
}


laptop:: laptop(int new_size){

    size = new_size ;
}

int laptop::get_size() {
    return size ;
}


void laptop:: set_size(int new_size) {

    size = new_size ;
}

