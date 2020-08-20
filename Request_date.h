//
// Created by caesa on 20/08/2020.
//

#ifndef CH14_REVIEW_FRIEND_REQUEST_DATE_H
#define CH14_REVIEW_FRIEND_REQUEST_DATE_H
#include "Date.h"
#include <iostream>
class Request_date {




public:

    static void request_date(){

        Date d_day(1423,5,8) ;
        d_day.day = 30 ;
        std::cout<<d_day.day <<std::endl ;


    }



private:







};


#endif //CH14_REVIEW_FRIEND_REQUEST_DATE_H
