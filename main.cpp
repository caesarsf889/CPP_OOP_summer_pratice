#include <iostream>
#include "Triangle.h"

using std::cout;
using std::endl ;




int main() {

    try{
        cout<<"enter three side " ;
        double side_1, side_2, side_3 ;
        std::cin>>side_1 >>side_2 >>side_3 ;

        Triangle dong_feng(side_1,side_2,side_3) ;
        cout<<"info from dong_feng :: " <<dong_feng.get_perimeter() <<endl ;
        cout<<"info 2 from dong_feng::  " <<dong_feng.get_area() <<endl ;

    }

    catch(Non_Positive_Side_Exception& exinfo){

        cout<<exinfo.what() <<endl ;
        cout<<"the side is ::"<<exinfo.get_side() <<endl ;
    }

    catch(Triangle_Exception& exinfo){

        cout<<exinfo.what() <<endl ;
        cout<<"three side is ::  " << exinfo.get_side_1()
            <<"  " <<exinfo.get_side_2() <<"  "
            <<exinfo.get_side_3() <<endl ;

    }





    return 0;
}
