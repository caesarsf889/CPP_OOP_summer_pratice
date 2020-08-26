//
// Created by caesa on 26/08/2020.
//

#include "Geometricobject.h"

Geometricobject::Geometricobject() {

    color = "white" ;
    filled = false  ;
}

Geometricobject::Geometricobject(const string &color, bool filled) {

    this->color = color ;
    this->filled = filled ;

}


string Geometricobject::get_color() const {

    return color ;
}


void Geometricobject::set_color(const string &color) {

    this->color = color ;
}


bool Geometricobject::is_filled() const {

    return filled ;
}


void Geometricobject::set_filled(bool filled) {

    this->filled = filled ;
}


string Geometricobject::to_string() const {



    return "Geometric_object" ;
}





