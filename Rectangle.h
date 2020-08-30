//
// Created by caesa on 29/08/2020.
//

#ifndef CH15_10_DYNAMIC_CAST_RECTANGLE_H
#define CH15_10_DYNAMIC_CAST_RECTANGLE_H

#include "Geometric_object.h"

class Rectangle : public Geometric_object {


public:
    Rectangle() ;
    Rectangle(double width , double height ) ;
    Rectangle(double width, double height , const string& color , bool filled) ;
    double get_width()const ;
    void  set_width(double width) ;
    double get_height()const ;
    void set_height(double height) ;
    double get_area()const ;
    double get_perimeter()const ;



private:
    double width ;
    double height ;


protected:









};
#endif //CH15_10_DYNAMIC_CAST_RECTANGLE_H
