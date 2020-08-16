//
// Created by caesa on 16/08/2020.
//

#ifndef CH11_10AND11AND12_REVIEW_KEYBOARD_H
#define CH11_10AND11AND12_REVIEW_KEYBOARD_H


class Keyboard {

public:

    Keyboard() ;
    Keyboard(int code ,int size , bool wireless) ;

    ~Keyboard() ;

    int get_code() const ;
    int get_size() const ;
    bool get_wireless() const  ;


    void set_code(int new_code) ;


    static int get_num_of_keyboard() ;

private:

    int code ;
    int size ;
    bool wireless ;
    static int num_of_keyboard ;





};


#endif //CH11_10AND11AND12_REVIEW_KEYBOARD_H
