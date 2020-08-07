//
// Created by caesa on 07/08/2020.
//

#ifndef CH10_LEARN_STATIC_VARIABLE_AND_FUNCTION_ANTENNA_H
#define CH10_LEARN_STATIC_VARIABLE_AND_FUNCTION_ANTENNA_H


class antenna {


public:

    antenna() ;
    antenna(int direction, double size) ;

    double get_size() ;
    int get_direction() ;

    void set_direction(int direction) ;

    static int get_number_of_antenna() ;


private:

    double size ;
    int direction ;

    static int number_of_antenna ;




};


#endif //CH10_LEARN_STATIC_VARIABLE_AND_FUNCTION_ANTENNA_H
