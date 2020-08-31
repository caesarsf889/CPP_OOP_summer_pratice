//
// Created by caesa on 31/08/2020.
//

#include "Geometric_object.h"

Geometric_object::Geometric_object() {

    color = "white"  ;
    filled = false ;

}


Geometric_object::Geometric_object(const string &color, bool filled) {

    set_color(color) ;
    set_filled(filled) ;
}


string Geometric_object::get_color() const {

    return color ;
}


void Geometric_object::set_color(const string &color) {

    this->color = color ;

}

bool Geometric_object::is_filled() const {

    return filled ;
}

void Geometric_object::set_filled(bool filled) {

    this->filled = filled ;
}

string Geometric_object::to_string() const {


    return "This is  Geometric_object " ;
}
