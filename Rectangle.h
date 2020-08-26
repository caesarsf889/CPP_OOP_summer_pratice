//
// Created by caesa on 26/08/2020.
//

#ifndef CH15_2_SUPERCLASS_AND_SUBCLASS_RECTANGLE_H
#define CH15_2_SUPERCLASS_AND_SUBCLASS_RECTANGLE_H
#include "Geometricobject.h"

class Rectangle : public Geometricobject {


public:
    Rectangle() ;
    Rectangle(double width , double height) ;
    Rectangle(double width, double height , const string& color , bool filled) ;
    double get_width()const ;
    void set_width(double) ;
    double get_height()const ;
    void set_height(double) ;
    double get_area()const ;
    double get_perimeter()const ;
    string to_string()const ;





private:

    double width ;
    double height ;



};


#endif //CH15_2_SUPERCLASS_AND_SUBCLASS_RECTANGLE_H
