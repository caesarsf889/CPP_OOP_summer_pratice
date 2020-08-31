#include <iostream>
#include "Triangle.h"

using std::cout;
using std::endl ;



int main() {


    try{
        Triangle qq ;
        cout<<qq.get_perimeter() <<endl ;
        cout<<qq.get_area() <<endl ;


        qq.set_side_3(4) ;
        cout<<qq.get_perimeter() <<endl ;
        cout<<qq.get_area() <<endl ;


    }

    catch(Triangle_Exception& qq_ex){

        cout<<qq_ex.what() <<endl ;

        cout<< "\nqq_ex info ::  "<<qq_ex.get_side_1() <<"   " <<qq_ex.get_side_2() <<
            "  "<<qq_ex.get_side_3() <<endl ;

    }



    return 0;
}
