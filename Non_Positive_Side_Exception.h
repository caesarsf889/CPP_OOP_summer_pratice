//
// Created by caesa on 31/08/2020.
//

#ifndef CH16_MULTIPLE_CATCH_NON_POSITIVE_SIDE_EXCEPTION_H
#define CH16_MULTIPLE_CATCH_NON_POSITIVE_SIDE_EXCEPTION_H
#include <stdexcept>

class Non_Positive_Side_Exception : public std::logic_error{


public:
    Non_Positive_Side_Exception(double side)
     :   std::logic_error("Non-Positive Side")
     {
        this->side = side ;
    }

    double get_side()const{


        return side ;
    }

private:

    double side ;

protected:



};







#endif //CH16_MULTIPLE_CATCH_NON_POSITIVE_SIDE_EXCEPTION_H
