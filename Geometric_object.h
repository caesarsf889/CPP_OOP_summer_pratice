//
// Created by caesa on 29/08/2020.
//

#ifndef CH15_10_DYNAMIC_CAST_GEOMETRIC_OBJECT_H
#define CH15_10_DYNAMIC_CAST_GEOMETRIC_OBJECT_H
#include <string>
using std::string ;



class Geometric_object {


public:
    string get_color()const ;
    void set_color(const string& color) ;
    bool is_filled()const ;
    void set_filled(bool filled) ;
    string to_string()const ;
    virtual double get_area()const =0 ;
    virtual double get_perimeter()const =0 ;


private:

    string color ;
    bool filled ;

protected:

    Geometric_object() ;
    Geometric_object(const string& color , bool filled) ;




};

#endif //CH15_10_DYNAMIC_CAST_GEOMETRIC_OBJECT_H
