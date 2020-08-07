//
// Created by caesa on 07/08/2020.
//

#include "antenna.h"

int antenna:: number_of_antenna = 0 ; //so fucking important

antenna:: antenna(){

    size = 10 ;
    direction = 0 ;
    number_of_antenna++ ;
}


antenna:: antenna(int new_direction , double new_size){
    size = new_size ;
    direction = new_direction ;
    number_of_antenna++  ;
}

double antenna :: get_size(){

    return size ;
}

int antenna::get_direction() {

    return direction ;
}

void antenna::set_direction(int new_direction) {
    direction = new_direction ;
}

int antenna::get_number_of_antenna(){

    return number_of_antenna ;
}







