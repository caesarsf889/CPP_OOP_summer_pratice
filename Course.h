//
// Created by caesa on 16/08/2020.
//

#ifndef CH11_13_COURSE_COURSE_H
#define CH11_13_COURSE_COURSE_H
#include <string>

using std::string ;

class Course {

public:


    Course( const string& course_name , int  capacity) ;
    ~Course() ;
    string get_course_name()const ;
    void add_student(const string& name) ;
    void drop_student(string& name) ;
    string* get_student() const ;
    int get_num_of_student()const  ;


private:

    string course_name ;
    string* p_student  ;
    int capacity ;
    int num_of_student ;



};


#endif //CH11_13_COURSE_COURSE_H
