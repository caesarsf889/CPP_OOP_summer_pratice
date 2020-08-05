//
// Created by caesa on 05/08/2020.
//

#include "Fan.h"
#include <iostream>
using std:: cout ;
using std:: endl  ;

Fan:: Fan(){
    speed = 1 ;
    on = false ;
    radius = 5 ;
}

Fan::Fan(int new_speed, bool new_state, double new_radius) {
    speed = new_speed ;
    on = new_state ;
    radius = new_radius ;
}

int Fan:: get_speed() {

    return speed ;
}

bool Fan:: get_state(){

    return on ;
}

double Fan:: get_radius(){

    return radius ;
}

void Fan:: set_speed(int new_speed) {
    if(new_speed <= 3 && new_speed <=1 )
        speed = new_speed ;
    else
        cout<<"error " <<endl ;
}

void Fan:: set_state(bool new_state) {
    on = new_state ;
}

void Fan:: set_radius(double new_radius){
   radius =  new_radius ;

}

