//
// Created by caesa on 06/08/2020.
//

#include "my_point.h"
#include <cmath>

my_point:: my_point(){
    x = 0 ;
    y = 0 ;
}

my_point::my_point(double new_x, double new_y){
    x= new_x ;
    y = new_y ;

}

double my_point:: get_x(){

    return x ;
}

double my_point:: get_y(){
    return y  ;
}

double my_point:: get_distance(my_point p_2){

    return sqrt( pow( p_2.x- x ,2) + pow(p_2.y - y, 2) ) ;
}


