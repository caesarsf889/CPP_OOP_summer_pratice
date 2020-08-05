//
// Created by caesa on 03/08/2020.
//

#ifndef CH_9_DATA_FIELD_ENCAPSULATION_LAPTOP_H
#define CH_9_DATA_FIELD_ENCAPSULATION_LAPTOP_H

class  Laptop{


public:
    Laptop() ;
    Laptop(double) ;
    double get_size() ;
    double get_price() ;
    void set_price(double) ;


private:
    double price ;
    int size ;


};













#endif //CH_9_DATA_FIELD_ENCAPSULATION_LAPTOP_H
