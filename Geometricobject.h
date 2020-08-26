//
// Created by caesa on 26/08/2020.
//

#ifndef CH15_2_SUPERCLASS_AND_SUBCLASS_GEOMETRICOBJECT_H
#define CH15_2_SUPERCLASS_AND_SUBCLASS_GEOMETRICOBJECT_H

#include <string>
using std::string ;

class Geometricobject {


public:


    Geometricobject() ;
    Geometricobject(const string& color , bool filled) ;
    string get_color()const ;
    void set_color(const string& color ) ;
    bool is_filled()const  ;
    void set_filled(bool filled) ;
    string to_string()const  ;



private:
    string color ;
    bool filled ;

};


#endif //CH15_2_SUPERCLASS_AND_SUBCLASS_GEOMETRICOBJECT_H
