#include <iostream>
#include "Generic_stack.h"


template <typename T>
void print_array(const Generic_stack<T>& stack ){

    while(!stack.is_empty())
        cout<<stack.pop() <<" "  ;

    cout<<endl ;
}


int main() {

    Generic_stack<int> qwe ;

    for(int i =0 ; i<10 ; i++){
        qwe.push(i) ;
    }




    return 0;
}
