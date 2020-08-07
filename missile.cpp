//
// Created by caesa on 07/08/2020.
//

#include "missile.h"

int missile:: number_of_missile = 0 ;

missile:: missile() {
    direction = 0 ;
    shot_distance = 0 ;
    number_of_missile++ ;
}

missile ::missile(int new_direction, double new_distance) {

    direction = new_direction  ;
    shot_distance = new_distance ;
    number_of_missile++ ;
}

int missile:: get_direction() const {

    return direction ;
}

double missile::get_distance() const {

    return shot_distance ;
}

void missile::set_direction(int new_direction) {

    direction = new_direction ;
}

void missile::set_distance(double new_shot_distance) {
    shot_distance = new_shot_distance ;
}


int missile::get_number_of_missile() {

    return number_of_missile ;
}








