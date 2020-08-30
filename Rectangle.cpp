//
// Created by caesa on 29/08/2020.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    width = 1  ;
    height = 1 ;
}

Rectangle::Rectangle(double width, double height) {

    set_width(width) ;
    set_height(height) ;

}

Rectangle::Rectangle(double width, double height, const string &color, bool filled) {

    set_height(height) ;
    set_width(width) ;
    set_color(color) ;
    set_filled(filled) ;

}

double Rectangle::get_width() const {

    return width ;
}

double Rectangle::get_height() const {

    return height ;
}

void Rectangle::set_height(double height) {


    this->height =  (height >=0 )? height :0 ;
}

void Rectangle::set_width(double width) {

    this->width = (width >=0 ) ? width : 0  ;
}


double Rectangle::get_area() const {


    return  width* height ;
}


double Rectangle::get_perimeter() const {


    return 2* (width+ height) ;
}

