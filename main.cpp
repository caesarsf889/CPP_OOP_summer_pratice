#include <iostream>
#include "Stack_integer.h"

using std:: cout ;
using std::endl ;
using std:: cin ;

int main() {

    Stack_integer stack ;
    for(int i=0  ; i <10;i++){
        stack.push(i)  ;
    }

    while( !stack.is_empty() )
        cout<<stack.pop() <<" " <<endl ;


    system("pause") ;

    return 0;
}
