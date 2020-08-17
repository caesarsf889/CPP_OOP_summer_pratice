#include <iostream>
#include "Course.h"
using std::cout ;
using std::endl ;


int main() {

    Course course_1("data structure", 69) ;

    cout<<course_1.get_student() <<endl ;

    Course course_2("database system", 15) ;

    course_1.add_student("sdfddf") ;
    course_2.add_student("asdasdasd") ;
    course_1.add_student("asdasdsasd") ;
    course_1.add_student("aasdsasd") ;


    cout<<course_1.get_num_of_student() <<endl ;

    string* p_student = course_1.get_student() ;
    for(int i =0;i<course_1.get_num_of_student() ; i++){

        cout<<*(p_student+i) <<" "  ;

    }
    cout<<endl ;




    system("pause") ;

    return 0;
}
