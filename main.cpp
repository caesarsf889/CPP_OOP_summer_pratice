#include <iostream>
#include "Geometric_object.h"
#include "Circle.h"
#include "Rectangle.h"

using std::endl ;
using std::cout ;


bool is_equal_area(const Geometric_object& object_1 , const Geometric_object& object_2 ){


    return object_1.get_area() == object_2.get_area() ;
}

void display_object(const Geometric_object* p_object){

    cout<< (*p_object).get_area() <<endl ;
    cout<<(*p_object).get_perimeter() <<endl ;

}


int main() {

    Circle qq(5) ;
    Rectangle qwe(2,3) ;

    cout<<"\n info from qq circle object : " <<endl ;
    display_object(&qq) ;

    cout<<"\n info from qwe rectangle object" <<endl ;
    display_object(&qwe) ;

    cout<<"is area equal ? \n"   ;
    cout<< (is_equal_area(qq ,qwe) ? "true" : "false" ) << endl  ;


    return 0;
}
