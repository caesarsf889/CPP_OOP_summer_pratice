//
// Created by caesa on 09/08/2020.
//

#include "Stack_integer.h"



Stack_integer::Stack_integer() {

    size = 0    ;

}

bool Stack_integer::is_empty() const {

    //if(get_size() ==0 )
      //  return true ;
    //else
      //  return false ;
    return size==0 ;
}


int Stack_integer::peek() const {

    return  element[size-1] ;
}

void Stack_integer::push(int value)  {


    element[size++]  = value ;

}

int Stack_integer::pop() {

  return   element[ --size] ;

}


int Stack_integer::get_size() const {

return size ;
}



