//
// Created by caesa on 08/08/2020.
//

#include "Space_X.h"

int Space_X::number_of_rocket = 0 ;


Space_X:: Space_X() {

    code  = 0   ;
    shot_height = 0  ;
    number_of_rocket++ ;
}

Space_X::Space_X(int new_code , double new_shot_height) {

    code = new_code ;
    shot_height = new_shot_height ;
    number_of_rocket++ ;
}


int Space_X:: get_code() const {

    return code ;
}

double Space_X:: get_shot_height() const {

    return shot_height ;
}

void Space_X:: set_code(int new_code) {

    code = new_code ;
}

void Space_X:: set_shot_height(double new_shot_height) {

    shot_height = new_shot_height ;
}

int Space_X:: get_number_of_rocket() {

    return number_of_rocket ;
}





