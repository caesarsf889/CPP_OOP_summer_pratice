#include <iostream>
#include "Course.h"
using std:: cout ;
using std::endl ;
using std::string ;


int main() {

    Course course_1("c++", 10) ;
    Course course_2(course_1) ;

    course_1.add_student("peter pan") ;
    course_2.add_student("lisa ma") ;

    cout<<course_1.get_student()[0] <<endl ;
    cout<<course_2.get_student()[0] <<endl ;
    cout<<course_2.get_student() <<endl ;
    cout<<course_1.get_student() <<endl ;






    return 0;
}
