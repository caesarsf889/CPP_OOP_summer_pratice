#include <iostream>
#include <stdexcept>



double calculate_area(double qq_object){

    if(qq_object <5 )
        throw std::invalid_argument("qq cannot lower than 5") ;


    return qq_object* qq_object*3.14 ;
}



int main() {

    std::cout <<"\nenter a nun then i will calculate area : " <<std::endl ;
    double qq ;
    std::cin>>qq ;

    try {

        int after_calculate = calculate_area(qq);
        std::cout << after_calculate << std::endl;

    }


    catch(std::invalid_argument& ex_of_qq_object){

        std::cout<< ex_of_qq_object.what() <<std::endl ;

    }






    return 0;
}
