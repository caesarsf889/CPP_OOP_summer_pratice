//
// Created by caesa on 07/08/2020.
//

#ifndef CH10_CONST_MEMBER_FUNCTION_MISSILE_H
#define CH10_CONST_MEMBER_FUNCTION_MISSILE_H


class missile {

public:

    missile() ;
    missile(int , double ) ;

    int get_direction() const  ;
    double get_distance() const ;

    void set_direction(int ) ;
    void set_distance(double) ;
    static int get_number_of_missile() ;

private:

    int direction ;
    double shot_distance ;
    static int number_of_missile ;

};


#endif //CH10_CONST_MEMBER_FUNCTION_MISSILE_H
