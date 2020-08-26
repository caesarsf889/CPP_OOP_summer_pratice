//
// Created by caesa on 26/08/2020.
//

#include "Derived_circle.h"


Derived_circle::Derived_circle() {


    radius = 1 ;

}


Derived_circle::Derived_circle(double radius) {

    set_radius(radius) ;

}

Derived_circle::Derived_circle(double radius, const string &color, bool filled) {


    set_radius(radius) ;
    set_color(color) ;
    set_filled(filled) ;
}


double Derived_circle::get_radius() const {



    return radius ;
}

void Derived_circle::set_radius(double radius) {

    this->radius  = (radius >= 0 )? radius : 0   ;
}


double Derived_circle::get_area() const {

    return  radius* radius* 3.14159 ;
}

double Derived_circle::get_perimeter() const {

    return 2*radius*3.14159 ;
}


double Derived_circle::get_diameter() const {


    return 2*radius  ;
}


string Derived_circle::to_string() const {

    return "circle object" ;
}

