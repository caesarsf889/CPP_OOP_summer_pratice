#include <iostream>
#include "Geometricobject.h"
#include "Rectangle.h"
#include "Derived_circle.h"

using std::string ;
using std::cout ;
using std::endl ;



void displayobject(const Geometricobject& object){


    cout<<object.get_color() <<endl ;
    cout<<(object.is_filled() ? "true" : "false" )<<endl  ;

}


int main() {

    Geometricobject qwe ;

    qwe.set_color("red") ;
    qwe.set_filled(true) ;
    cout<<qwe.to_string() <<endl
        <<qwe.get_color() <<"  " <<(qwe.is_filled() ? "true" :"false") <<endl ;


    Derived_circle ra(6.9) ;
    ra.set_color("black") ;
    ra.set_filled(false) ;
    cout<<ra.to_string() <<endl
        <<(ra.is_filled()? "true" : "false" ) <<endl
        <<ra.get_color() <<endl
        <<ra.get_radius() <<endl
        <<ra.get_perimeter() <<endl ;


    Rectangle qq(2,3) ;

    qq.set_color("orange") ;
    qq.set_filled(true) ;
    cout<<qq.to_string()  <<endl
        <<qq.get_color() <<endl
        <<( qq.is_filled() ? "true" : "false" ) <<endl
        <<qq.get_width() <<"  " <<qq.get_height() <<"   " <<qq.get_perimeter() <<endl
        <<qq.get_area() <<endl ;


    //
    displayobject(Geometricobject("black" , true)) ;
    displayobject(Rectangle(2,3)) ;
    displayobject(Derived_circle(6.9)) ;



    return 0;
}



