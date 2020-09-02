//
// Created by caesa on 02/09/2020.
//

#ifndef CH12_4_REVIEW_GENERIC_STACK_H
#define CH12_4_REVIEW_GENERIC_STACK_H


template<typename T>
class Generic_stack{


public:
    Generic_stack() ;
    bool is_empty()const ;
    T peek()const ;
    void push(T value) ;
    T pop() ;
    int get_size()const ;



private:

    T element[100] ;
    int size ;

};


template <typename T>
Generic_stack<T>::Generic_stack(){




}

template <typename T>
bool Generic_stack<T>::is_empty() const {




}

template <typename T>
T Generic_stack<T>::peek() const {



}


template <typename T>
void Generic_stack<T>::push(T value) {




}

template <typename T>
T Generic_stack<T>::pop() {



}

template<typename T>
int Generic_stack<T>::get_size() const {




}




#endif //CH12_4_REVIEW_GENERIC_STACK_H
