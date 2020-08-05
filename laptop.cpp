//
// Created by caesa on 03/08/2020.
//
#include "laptop.h"

Laptop:: Laptop() {
    price = 1 ;
    size = 27 ;

}
Laptop::Laptop(double new_price){
    price = new_price ;
    size = 27 ;
}

double Laptop::get_size(){
    return size ;
}

double Laptop:: get_price(){
    return price ;
}

void Laptop:: set_price(double new_price){
   price = (new_price>0)?  new_price : 0 ;
}




