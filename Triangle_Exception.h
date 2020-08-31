//
// Created by caesa on 31/08/2020.
//

#ifndef CH16_MULTIPLE_CATCH_TRIANGLE_EXCEPTION_H
#define CH16_MULTIPLE_CATCH_TRIANGLE_EXCEPTION_H
#include <stdexcept>


class Triangle_Exception : public std::logic_error{

public:
    Triangle_Exception(double side_1 , double side_2 , double side_3)
            : std::logic_error("invalid triangle"){

        this->side_1 = side_1 ;
        this->side_2 = side_2 ;
        this->side_3 = side_3 ;
    }


    double get_side_1(){

        return side_1 ;
    }


    double get_side_2(){

        return side_2 ;
    }

    double get_side_3(){

        return side_3 ;
    }



private:

    double side_1 , side_2 , side_3 ;



protected:


};


#endif //CH16_MULTIPLE_CATCH_TRIANGLE_EXCEPTION_H
