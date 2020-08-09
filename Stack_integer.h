//
// Created by caesa on 09/08/2020.
//

#ifndef CH10_STACK_OF_INTEGERS_STACK_INTEGER_H
#define CH10_STACK_OF_INTEGERS_STACK_INTEGER_H


class Stack_integer {


public:

    Stack_integer() ;

    bool is_empty() const ;
    int peek() const ;
    void push(int value ) ;
    int pop() ;
    int get_size() const ;


private:

    int element[100] ;
    int  size ;




};


#endif //CH10_STACK_OF_INTEGERS_STACK_INTEGER_H
