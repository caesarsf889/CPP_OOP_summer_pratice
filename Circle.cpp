//
// Created by caesa on 29/08/2020.
//

#include "Circle.h"


Circle::Circle() {

    radius = 1 ;

}

Circle::Circle(double radius) {

    set_radius(radius) ;
}

Circle::Circle(double radius, const string &color, bool filled) {

    set_radius(radius)  ;
    set_filled(filled) ;
    set_color(color) ;
}


void Circle::set_radius(double radius) {

    this->radius =  ((radius >=0 ) ?   radius : 0 );
}

double Circle::get_radius() const {

    return radius ;
}

double Circle::get_area() const {

    return radius*radius* 3.14159 ;
}


double Circle::get_perimeter() const {


    return 2*radius*3.14159 ;
}

double Circle::get_diameter() const {



    return 2*radius ;
}




