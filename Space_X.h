//
// Created by caesa on 08/08/2020.
//

#ifndef CH10_10_5AND6_REVIEW_SPACE_X_H
#define CH10_10_5AND6_REVIEW_SPACE_X_H


class Space_X {

public:

    Space_X() ;
    Space_X(int, double ) ;

    int get_code() const ;
    double get_shot_height()  const  ;

    void set_code(int new_code)  ;
    void set_shot_height(double new_shot_height) ;

    static int get_number_of_rocket() ;

private:
    int code ;
    double shot_height  ;

    static int number_of_rocket ;

};


#endif //CH10_10_5AND6_REVIEW_SPACE_X_H
