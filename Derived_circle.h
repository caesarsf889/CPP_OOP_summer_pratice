//
// Created by caesa on 26/08/2020.
//

#ifndef CH15_2_SUPERCLASS_AND_SUBCLASS_DERIVED_CIRCLE_H
#define CH15_2_SUPERCLASS_AND_SUBCLASS_DERIVED_CIRCLE_H
#include "Geometricobject.h"

class Derived_circle : public Geometricobject {


public:

    Derived_circle() ;
    Derived_circle(double) ;
    Derived_circle(double radius , const string& color , bool filled) ;
    double get_radius()const ;
    void set_radius(double)  ;
    double get_area()const ;
    double get_perimeter()const  ;
    double get_diameter()const ;
    string to_string()const ;

private:

    double radius ;





};


#endif //CH15_2_SUPERCLASS_AND_SUBCLASS_DERIVED_CIRCLE_H
