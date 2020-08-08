//
// Created by caesa on 08/08/2020.
//

#include "BMI.h"
#include <cmath>


BMI:: BMI( const  string& new_name, int new_age,double new_weight, double new_height){

    name = new_name  ;
    age = new_age ;
    weight = new_weight ;
    height = new_height ;
}

BMI::BMI(const string& new_name, double new_weight, double new_height){

    name = new_name ;
    age = 20 ;
    weight = new_weight ;
    height = new_height ;
}

string BMI::get_status() const {

    double bmi = get_bmi() ;

    if( bmi< 18.5)
        return "underweight" ;
    else if(bmi < 25 )
        return "normal "  ;
    else if(bmi <30 )
        return "overweight " ;
    else
        return "obese" ;
}

double BMI::get_bmi() const {


    const double pound_to_kg = 0.453 ;
    const double meter_to_inch = 0.3084 ;

    double bmi =  (weight*pound_to_kg)  /  pow( (height * meter_to_inch ) ,2) ;

    return  bmi ;
}






string BMI::get_name() const {

    return name ;
}

int BMI::get_age() const {

    return age ;
}

double BMI::get_weight() const {

    return weight ;
}


double BMI::get_height() const {

    return height ;
}

