//
// Created by caesa on 29/08/2020.
//

#ifndef CH15_9_ABSTRACT_CLASS_CIRCLE_H
#define CH15_9_ABSTRACT_CLASS_CIRCLE_H
#include "Geometric_object.h"

class Circle : public Geometric_object {


public:
    Circle() ;
    Circle(double radius) ;
    Circle(double radius ,const  string& color , bool filled) ;
    void set_radius(double radius) ;
    double get_radius()const ;

    double get_area()const  ;
    double get_perimeter()const  ;
    double get_diameter()const ;


private:

    double radius ;

protected:








};


#endif //CH15_9_ABSTRACT_CLASS_CIRCLE_H
