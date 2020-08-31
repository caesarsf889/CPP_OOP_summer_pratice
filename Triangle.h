//
// Created by caesa on 31/08/2020.
//

#ifndef CH16_5_TRIANGLE_H
#define CH16_5_TRIANGLE_H
#include "Geometric_object.h"
#include  "Triangle_Exception.h"
#include <cmath>

class Triangle : public Geometric_object {

public:

    Triangle(){

        side_1 = side_2 = side_3 = 1 ;
    }

    Triangle(double side_1, double side_2 ,double side_3){

        if(!is_valid(side_1, side_2, side_3))
            throw Triangle_Exception(side_1,side_2,side_3) ;


        this->side_1 = side_1 ;
        this->side_2 = side_2 ;
        this->side_3 = side_3 ;


    }

    double get_side1()const{

        return side_1 ;
    }
    double get_side2()const{

        return side_2 ;
    }

    double get_side3()const{

        return side_3 ;
    }


    void set_side_1(double new_side_1){

        if(!is_valid(new_side_1 , side_2 ,side_3))
            throw Triangle_Exception(new_side_1,side_2,side_3) ;


        this->side_1 = new_side_1 ;
    }


    void set_side_2(double new_side_2){

        if(!is_valid(side_1,new_side_2,side_3))
            throw Triangle_Exception(side_1,new_side_2,side_3) ;


        this->side_2 = new_side_2 ;
    }


    void set_side_3(double new_side_3){

        if(!is_valid(side_1,side_2,new_side_3))
            throw Triangle_Exception(side_1,side_2,new_side_3) ;


    }



    double get_perimeter()const{



        return side_1 +side_2 +side_3  ;
    }



    double get_area()const{


        double s = get_perimeter() / 2 ;

        return sqrt(s * ( s- side_1) * (s - side_2) * (s - side_3)) ;
    }




private:

    double side_1 , side_2 ,side_3 ;

    bool is_valid(double side_1, double side_2, double side_3){


        return (side_1+side_2 > side_3) && (side_2 +side_3 >side_1) && (side_3 +side_1 >side_2 ) ;
    }


protected:


};


#endif //CH16_5_TRIANGLE_H
