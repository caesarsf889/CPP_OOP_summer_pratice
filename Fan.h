//
// Created by caesa on 05/08/2020.
//

#ifndef CH9_PRACTICE_FAN_FAN_H
#define CH9_PRACTICE_FAN_FAN_H


class Fan{

public:

    Fan() ;
    Fan(int ,bool, double) ;

    int get_speed() ;
    bool get_state() ;
    double get_radius() ;

    void set_speed(int ) ;
    void set_state(bool) ;
    void set_radius(double) ;


private:
    int speed ;
    bool on ;
    double radius ;


};

#endif //CH9_PRACTICE_FAN_FAN_H
