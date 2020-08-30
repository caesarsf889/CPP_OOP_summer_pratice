#include <iostream>
#include "Geometric_object.h"
#include "Rectangle.h"
#include "Circle.h"

using std::endl ;
using std::cout;
using std::string ;

void display_static(Geometric_object& origin_object){

    Geometric_object* p_object = &origin_object ;
    cout<<"\nthe radius is :" <<
        static_cast<Circle*>(p_object)->get_radius() <<endl ;

    cout<<"the diameter is : " <<
        static_cast<Circle*>(p_object)->get_diameter() <<endl ;

    cout<<"the width is : " <<
        static_cast<Rectangle*>(p_object)->get_width() <<endl ;
    cout<<"the height is: " <<
        static_cast<Rectangle*>(p_object)->get_height() <<endl ;

}

void display_dynamic(Geometric_object& original_object){

    cout<<original_object.get_area() <<endl ;
    cout<<original_object.get_perimeter() <<endl ;

    Geometric_object* p_object = &original_object ;

    Circle* p_circle = dynamic_cast<Circle*>(p_object) ;
    Rectangle* p_rectangle = dynamic_cast<Rectangle*>(p_object) ;

    if(p_circle != NULL){

        cout<<"the radius is : " <<p_circle->get_radius() <<endl ;
        cout<<"the diameter is : " <<p_circle->get_diameter() <<endl ;

    }

    if(p_rectangle != NULL){

        cout<<"the width is : " << p_rectangle->get_width() <<endl ;
        cout<<"the height is : " <<p_rectangle->get_height() <<endl ;
    }



}
   






int main() {

    Circle qq(5) ;
    Rectangle qwe(2,3) ;

    Rectangle xiong_san(2,3) ;
    Circle dong_feng(6) ;

    display_dynamic(xiong_san) ;
    cout<<"\n \n" ;
    display_dynamic(dong_feng) ;



    //display_static(qq) ;

    //upcasting without using casting expression still can convert
    Geometric_object* p = new Circle(6) ;
    Circle* p_1 = new Circle(9) ;
    //p = p_1  ;

    //downcasting
    p_1 = dynamic_cast<Circle*>(p) ;












    return 0;
}
