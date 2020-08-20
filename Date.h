//
// Created by caesa on 20/08/2020.
//

#ifndef CH14_REVIEW_FRIEND_DATE_H
#define CH14_REVIEW_FRIEND_DATE_H


class Date {

public:

    Date(int year, int month, int day){

        this->year = year ;
        this->month = month ;
        this->day = day ;
    }


    friend class Request_date ;
    friend void friend_date() ;

private:

    int year ;
    int month ;
    int day ;






};


#endif //CH14_REVIEW_FRIEND_DATE_H
