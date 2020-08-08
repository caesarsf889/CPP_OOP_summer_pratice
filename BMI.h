//
// Created by caesa on 08/08/2020.
//

#ifndef CH10_10_7_BMI_BMI_H
#define CH10_10_7_BMI_BMI_H

#include <string>
using std::string ;


class BMI {


public:

     BMI( const string& new_name, int new_age,double new_weight, double new_height) ;
     BMI(const string& new_name ,double new_weight,double new_height) ;

     string get_status() const ;
     double get_bmi() const  ;

     string get_name() const ;
     int get_age() const ;
     double get_weight() const ;
     double get_height() const  ;



private:
    string name ;
    int age ;
    double weight  ;
    double height ;


};


#endif //CH10_10_7_BMI_BMI_H
