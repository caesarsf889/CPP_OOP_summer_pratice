//
// Created by caesa on 16/08/2020.
//

#ifndef CH11_10_BUILD_DYNAMIC_OBJECT_TV_H
#define CH11_10_BUILD_DYNAMIC_OBJECT_TV_H


class TV {

public:
    TV() ;
    TV(int new_code , int new_size) ;

    int get_size()const  ;
    int get_code()const  ;
    void set_code(int new_code) ;
    static int get_total() ;

private:
    int size ;
    int code ;
    static int total ;










};


#endif //CH11_10_BUILD_DYNAMIC_OBJECT_TV_H
