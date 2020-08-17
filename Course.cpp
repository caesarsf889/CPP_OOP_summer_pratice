//
// Created by caesa on 16/08/2020.
//

#include "Course.h"
#include <string>
using std::string ;

Course::Course(const  string& course_name, int capacity) {

    num_of_student = 0 ;
    this->course_name = course_name ;
    this->capacity = capacity ;
    p_student = new string[capacity] ;



}

Course::~Course() {

    delete[] p_student ;

}

string Course::get_course_name() const {

    return  course_name ;
}

void Course::add_student(const string& name) {

    p_student[num_of_student] = name ;
    num_of_student++ ;
}

void Course::drop_student(string &name) {


}

string* Course::get_student() const {


    return p_student ;
}

int Course::get_num_of_student() const {

    return num_of_student ;
}


